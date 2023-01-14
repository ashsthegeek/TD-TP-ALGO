#include <stdio.h>
#include <stdlib.h>
/*
Écrire un programme qui pour un entier k saisi,
calcule le plus grand entier n tel que n! k.
*/
int main()
{
    int k, n, i=1, fact=1;
    printf("Saisissez en Entier: \n");
    scanf("%d", &k);
    do {
        fact= fact*i;
        n= (i-1);
        i++;
    }while (fact <= k);
    printf("Le plus grand entier est: %d \n",n);
    return 0;
}
