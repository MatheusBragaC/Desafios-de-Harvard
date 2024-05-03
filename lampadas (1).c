
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>




const int BITS_NO_BYTE = 8;



void imprimir_lampada(int bit);


int main(void)
{
    string texto = get_string("Digite um texto: ");
    for(int i = 0; i < strlen(texto); i++)
    {
        char c = texto[i];
        for (int k = 7; k >= 0; k--)
        {
            int bit = (c >> k) & 1 || 0;
            imprimir_lampada(bit);
        }
    printf("\n");
    }




    return 0;
}



void imprimir_lampada(int bit)
{
    if (bit == 0)
    {

        printf("\U000026AB");
    }
    else if (bit == 1)
    {

        printf("\U0001F7E1");
    }
}
