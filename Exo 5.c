#include <stdio.h>
#include <stdlib.h>
/*
Ecrire l’algorithme et implémenter en C un programme qui attribue
une mention en fonction
de la moyenne de l’étudiant saisie au clavier.
Utiliser l’instruction IF.
 */

int main()
{
    int note;
    printf("Entrer votre note \n");
    scanf("%d",&note);
    if (note < 10)
        printf("Ajourne ! \n");
    else if (note < 12)
        printf("Mention passable \n");
    else if (note < 14)
        printf("Mention Assez bien \n");
    else if (note < 16)
        printf("Mention bien \n");
    else if (note < 18)
        printf("Mention tres bien \n");
    else
       printf("Mention excellente \n");
    return 0;
}
