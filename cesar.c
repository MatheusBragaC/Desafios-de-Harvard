
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Uso: %s chave\n", argv[0]);
        return 1;
    }

    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("%s\n", "É necessário colocar um número");
            return 1;
        }
    }

    int rotacionar = atoi(argv[1]);
    string texto = get_string("Texto puro: ");

    for (int i = 0; i < strlen(texto); i++)
    {
        if (isalpha(texto[i]))
        {
            char c;
            if (islower(texto[i]))
            {
                c = 'a';
            }
            else
            {
                c = 'A';
            }
            texto[i] = ((texto[i] - c + rotacionar) % 26) + c;
        }
    }
    printf("Texto cifrado: %s\n", texto);
    return 0;
}
