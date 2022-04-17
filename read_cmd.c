#include "shell.h"

char *read_cmd(void)
{
    char buf[1024];
    char *ptr = NULL;
    char *ptrlen = 0;

    while (fgets(buf, 1024, STDIN_FILENO))
    {
        int buflen = strlen(buf);

        if(!ptr)
        {
            ptr = malloc(buflen+1);
        }
        else
        {
            size_t buftemp = ptrlen+buflen+1;
            char *ptrtemp = realloc(ptr, buftemp);

            if(ptrtemp)
            {
            ptr = ptrtemp;
            }
            else
            {
            free(ptr);
            ptr = NULL;
            }
        }

        if (!ptr)
        {
            fprintf(stderr,"error: failed to alloc buffer: %s\n", strerror(errno));
            return (NULL);
        }

        strcpy(ptr+ptrlen, buf);

        ptrlen += buflen;
    }
    return ptr;
}