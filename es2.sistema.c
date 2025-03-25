/*Scrivere un programma concorrente che realizzi il seguente comando:

cat file.txt | wc

il processo p2 deve rimandare l'output di wc al padre, il quale lo scriverà
su un file chiamato wc.txt

il nome del file "file.txt" deve essere passato come argomento in argv[1]
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Numero di argomenti errato");
        exit(1);
    }

    int pid, p1p0[2], fd, p2p0[2], nread;
    char buff[1024];

    pipe(p1p0);
    pid = fork();

    if (pid == 0)
    {
        close(p1p0[0]);
        close(1);
        dup(p1p0[1]);
        close(p1p0[1]);

        execl("/bin/cat", "cat", argv[1], NULL);
        return -1;
    }

    pipe(p2p0);
    pid = fork();

    if (pid == 0)
    {
        close(p1p0[1]);
        close(0);
        dup(p1p0[0]);
        close(p1p0[0]);

        close(p2p0[0]);
        close(1);
        dup(p2p0[1]);
        close(p2p0[1]);

        execl("/bin/wc", "wc", NULL);
        return -1;
    }

    close(p1p0[1]);
    close(p1p0[0]);
    close(p2p0[1]);

    fd = open("wc.txt", O_WRONLY | O_CREAT, 0777);

    while ((nread = read(p2p0[0], buff, sizeof(buff))) > 0)
    {
        write(fd, buff, nread);
    }

    close(p2p0[0]);
    close(fd);
    return 0;
}
