// Scrivere un programma concorrente che realizzi il seguente comando:
// cat costituzione.txt | more

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Numero di argomenti errato");
        return -1;
    }
    int pid, p1p0[2];

    pid = fork();

    if (pid == 0)
    {
        close(p1p0[0]);
        close(1);                          // Chiude lo standard output
        dup(p1p0[1]);                      // Duplica il canale di output della pipe e va nello standard output
        close(p1p0[1]);                    // Chiude il canale in più
        execl("/bin/cat", "cat", argv[1]); // Processo che dà in output il file costituzione.txt tramite "cat"
        return -1;
    }

    pid = fork();

    if (pid == 0)
    {
        close(p1p0[1]);
        close(0);                   // Chiude lo standard input
        dup(p1p0[0]);               // Duplica il canale di input della pipe e va nello standard input
        close(p1p0[0]);             // Chiude il canale in più
        execl("/bin/more", "more"); // Processo che prende in input il file costituzione.txt e esegue "more"
        return -1;
    }

    close(p1p0[0]);
    close(p1p0[1]);
    wait(&pid);
    wait(&pid);

    return 0;
}