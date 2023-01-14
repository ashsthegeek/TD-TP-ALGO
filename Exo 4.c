#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Ecrire l’algorithme et implémenter en C un programme pour calculer
et retourne l’hypoténuse, le cosinus, le sinus et la tangente d’un
triangle rectangle dont les cotés sont entrés par l’utilisateur
 */
int main()
{
    float AB, BC, AC, cosBAC, sinBAC, tanBAC;
    printf("Le triangle ABC est rectangle en B \n");
    printf("Donner la longeur du cote AB : \n");
    scanf("%f", &AB);
    printf("Donner la longeur du cote BC : \n");
    scanf("%f", &BC);
    //Calcule de l'hypotenus
    AC = sqrt((AB*AB)+(BC*BC));
    printf("La longeur de l'hypotenus est : %.2f \n", AC);
    //Calcule du cosinus
    cosBAC = AB/AC;
    printf("Le cosinus de l'angle BAC est : %.2f \n", cosBAC);
    //Calcule du sinus
    sinBAC = BC/AC;
    printf("Le sinus de l'angle BAC est : %.2f \n", sinBAC);
    //Calcule de la tangente
    tanBAC = BC/AB;
    printf("La tangente de l'angle BAC est : %.2f \n", tanBAC);
    return 0;
}
