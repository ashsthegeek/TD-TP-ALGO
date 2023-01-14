#include <stdio.h>
#include <stdlib.h>
/*
Ecrire l’algorithme et implémenter en C un programme pour
calculer le factoriel d’un nombre donné par l’utilisateur.
Vous devez vous assurer que :
X est positive,
X est comprise entre 3 et 11
X ! = 1 x 2 x 3 x …. (X-1) x X
NB : L’utilisateur doit pouvoir refaire l’opération tant
qu’il le souhaite sans recompiler le
programme
*/

int main()
{
    int nbr, i, f = 1, rep;
    do {
        do {
        printf("Entrez un nombre pour calculer sa factorielle\n");
        scanf("%d", &nbr);
        } while ( nbr <= 3 || nbr >=11);
        for (i = 1; i <= nbr; i++)
        f = f * i;
        printf("Factorielle de %d = %d\n", nbr, f);
        printf("Voulez-vous refaire une calcule ? \n");
        printf("Si OUI taper sur n'importe quelle touche, sinon taper 0 \n");
        scanf("%d", &rep);
    }while (rep != 0);

  return 0;
}
