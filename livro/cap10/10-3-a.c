#include <stdio.h>

int main()
{
    int sequence[10];
    int i;
    int count = 0;

    scanf("%d%d%d%d%d%d%d%d%d%d", &sequence[0], &sequence[1], &sequence[2], &sequence[3], &sequence[4], &sequence[5], &sequence[6], &sequence[7], &sequence[8], &sequence[9]);

    for (i = 9; i > 0; i--) {
        if (sequence[9] == sequence[i]) {
            count++;
        }
    }

    printf("O numero %d apareceu %d vezes\n", sequence[9], count);
    return 0;
}