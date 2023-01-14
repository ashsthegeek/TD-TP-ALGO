#include <stdio.h>
#include <stdlib.h>
/*
Ecrire l’algorithme et implémenter en C le programme permettant
d’afficher les nombres impairs compris entre deux autres entiers
MIN et MAX. Les valeurs de X, MIN et MAX sont donnés
par l’utilisateur.
 */

int main()
{
    int i, X, Mini, Maxi;
    printf("Donner un entier X : \n");
    scanf("%d", &X);
    printf("Donner une valeur minimum : \n");
    scanf("%d", &Mini);
    printf("Donner une valeur maximum : \n");
    scanf("%d", &Maxi);

    for (i= 0 ; i <= Maxi ; i++ ){
        if (i%2 != 0)
            printf("%d Est un nombre impair \n",i);
    }
    return 0;
}
