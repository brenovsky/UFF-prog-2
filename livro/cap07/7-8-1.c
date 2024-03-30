#include <stdio.h>

int main()
{
    int caminho;

    scanf("%d", &caminho);

    if (caminho == 1)
    {
        scanf("%d", &caminho);

        if (caminho == 4)
        {
            scanf("%d", &caminho);

            if (caminho == 6)
            {
                printf("caminho valido! chegou ao final\n");
            }
            else
            {
                printf("caminho invalido\n");
            }
        }
        else
            {
                printf("caminho invalido\n");
            }
    }
    else if (caminho == 2)
    {
        printf("caminho valido! mas nao chegou ao final\n");
    }
    else if (caminho == 3)
    {
        scanf("%d", &caminho);

        if (caminho == 5)
        {
            scanf("%d", &caminho);

            if (caminho == 7)
            {

                scanf("%d", &caminho);

                if (caminho == 8)
                {
                    printf("caminho valido! chegou ao final\n");
                }
                else
                {
                    printf("caminho invalido\n");
                }
            }
            else
            {
                printf("caminho invalido\n");
            }
        }
        else
        {
        printf("caminho invalido\n");
        }
    }
    else
    {
        printf("caminho invalido\n");
    }

    return 0;
}