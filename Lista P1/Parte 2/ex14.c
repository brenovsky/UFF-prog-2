//Imprime, na primeira linha, de 1 a n; na segunda, de 2 a n... assim vai até a linha n, onde imprime n

#include <stdio.h>
int main(){
    int r, i, j, n = 1;
    scanf("%d",&r);
    for(i=r; i >= 1; i--){
        for(j=1; j <= i; ++j){
            printf("%d",r + j - i);
        }
        printf("\n");
    }
    return 0;
}