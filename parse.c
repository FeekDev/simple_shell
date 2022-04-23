#include "shell.h"

char **tokenizer(char *str)
{
    char **tokens;
    int bufersize = 100;
    char *token;
    int i = 0;

    tokens = malloc(sizeof(char *) * bufersize);

    if (!tokens)
    {
        fprintf(stderr, "Allocation error in Tokenizer");
        exit(EXIT_FAILURE);
    }

    token = strtok(str, DELIMIT);
    while (token)
    {
        tokens[i] = token;
        i++;
        if (i >= bufersize)
        {
            bufersize += bufersize;
            tokens = realloc(tokens, bufersize * sizeof(char *));
            if (!tokens)
            {
                fprintf(stderr, "Reallocation error in parse: tokens");
                exit(EXIT_FAILURE);
            }
        }
        tokens = strtok(NULL, DELIMIT);
    }
    tokens[i] = NULL;
    return (tokens);
}