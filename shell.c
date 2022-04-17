#include "shell.h"

int main(int argc, char **argv)
{
    char *cmd;

    init_shell();

    do
    {
        print_prompt1(); /*imprimimos el indicador del shell*/

        cmd = read_cmd(); /*leemos un comando (linea de entrada terminada en \n)*/

        if(!cmd)
        {
            exit(EXIT_SUCCESS); /*si hay un error al leer el comando, salimos del shell*/
        }

        if(cmd[0] == '\0' || strcmp(cmd, "\n") == 0)
        {
            free(cmd);
            continue; /*si el comando está vacío, salteamos la entrda y continuamos con el bucle*/
        }

        if(strcmp(cmd, "exit\n") == 0) /*si el comando es exit, salimos del shell*/
        {
            free(cmd);
            break;
        }

        printf("%s\n", cmd); /*De lo contrario, hacemos eco del comando, liberamos la memoria que usamos para almacenar el comando y continuamos con el bucle.*/

        free(cmd);

    } while(1);

    exit(EXIT_SUCCESS);

}
