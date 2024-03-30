#include <stdio.h>

int main()
{
    int IG, IA, EC, ID, ST;

    scanf("%d%d%d%d%d", &IG, &IA, &EC, &ID, &ST);

    if (IG + IA > 0)
    {
        if (EC * ID == 1)
        {
            if (ST == 1)
            {
                printf("Seu trabalho sera avaliado.\n");
            }
            else
            {
                printf("Seu trabalho nao sera avaliado, nota 0.\n");
            }
        }
        else
        {
            printf("Seu trabalho nao sera avaliado, nota 0.\n");
        }
    }
    else
    {
        printf("Seu trabalho nao sera avaliado, nota 0.\n");
    }

    return 0;
}