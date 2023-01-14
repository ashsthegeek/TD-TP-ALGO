#include <stdio.h>
#include <stdlib.h>
/*
Écrire un programme qui saisit des entiers positifs.
Le programme s'arrête dès qu'un entier
négatif est saisi. Il affiche alors :
• Le nombre d'entiers positifs qui ont été saisis.
• Le plus grand entier qui a été saisi
• La somme des tous les entiers saisis.
*/

int main()
{
    int n, entierpos=0, plusgrand=0, som=0;
    while(n>=0){
        printf("Donner un entier positif :\n");
        scanf("%d", &n);
        if (n>=0){
            entierpos ++;
        }
        if (n > plusgrand){
            plusgrand = n;
        }
        som = som +n;
    }
    printf("Le nombre d'entier positif est %d \n",entierpos);
    printf("Le plus grand entier saisi est %d \n",plusgrand);
    printf("La somme des entiers saisies est %d \n",som);
    return 0;
}
