#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

void ordinaSringhe(char *array[], int nStringhe) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Errore argomenti");
        return 0;
    }

    int fd = open(argv[1], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0) {
        perror("Errore nell'apertura del file");
        return 0;
    }

    ordinaStringhe(&argv[2], argc - 2);

    // Scrittura delle stringhe ordinate su file e a video
    for (int i = 2; i < argc; i++) {
        write(fd, argv[i], strlen(argv[i]));
        write(fd, "\n", 1); // Aggiunge un ritorno a capo

        write(1, argv[i], strlen(argv[i]));
        write(1, "\n", 1);
    }

    close(fd);
    return 0;
}
