#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(void) {
    char buf[4096];
    pid_t pid;
    int status;

    printf("%%");
    while (fgets(buf, 4096, stdin) != NULL) {
        if (buf[strlen(buf) - 1] == '\n') {
            buf[strlen(buf) - 1] = 0;
        }
        if ((pid = fork()) < 0) {
            printf("fork error\n");
        } 
        else if (pid == 0) {
            //printf("child process\n");
            execlp(buf, buf, (char*) 0);
            printf("can't execute: %s\n", buf);
            exit(127);
        }

        if (waitpid(pid, &status, 0) < 0) {
            printf("waitpid error\n");
        }
        printf("%%");
    }
    printf("return\n");
    exit(0);
}
