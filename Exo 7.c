#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Ecrire l’algorithme et implémenter en C un programme capable de
résoudre une équation du second degré dans R dont les valeurs A, B
et C sont données par l’utilisateur. Les valeur de A, B et C doivent
être des entiers compris entre 1 et 8 avec C un nombre impaire.
 */
int main()
{
    int A, B, C, Delta, rep ;
    float X, X1, X2 ;
    // Pour la valeur A
    do{
        printf("Saisir la valeur de A \n");
        scanf("%d", &A);
    }
    while (A < 1 || A > 8);
    //Pour la valeur B
    do{
        printf("Saisir la valeur de B \n");
        scanf("%d", &B);
    }
    while (B < 1 || B > 8);
    // Pour la valeur C
    do{
        printf("Saisir la valeur de C \n");
        scanf("%d", &C);
    }
    while (C < 1 || C > 8);
    // Calcule de Delta
    Delta = pow(B,2)-(4*A*C);

    // Les conditions
    if(Delta < 0)
        printf("Pas de solution ! \n");
    else if (Delta == 0){
        X = -B / (2*A);
        printf("La solution est %.2f \n",X);
    }
    else{
        X1 = (-B-sqrt(Delta))/(2*A);
        X1 = (-B+sqrt(Delta))/(2*A);
        printf("Les solutions sont %.2f et %.2f \n",X1, X2);
        }
    printf("Avez-vous d'autre equation (0/1) ? \n");
    scanf("%d", &rep);

    return 0;
}
