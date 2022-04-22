#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("PID of ex1.c = %d\n", getpid());
    char *args[] = {"Hello", "Felipe", "Holbie", NULL};
    execv("./exc2", args);
    printf("Back to exc1.c");
    return 0;
}