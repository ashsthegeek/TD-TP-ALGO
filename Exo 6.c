#include <stdio.h>
#include <stdlib.h>

int main()
{
    int note;
    printf("Entre votre note \n");
    scanf("%d", &note);
    switch(note){
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    printf("Ajourne \n");
    break;
    case 10:
    case 11:
      printf("Mention passable \n");
        break;
    case 12:
    case 13:
      printf("Mention assez bien \n");
        break;
    case 14:
    case 15:
    case 16:
      printf("Mention bien \n");
        break;
    case 17:
    case 18:
      printf("Mention tres bien \n");
        break;
    case 19:
    case 20:
      printf("Mention Excellente \n");
        break;

default :
    printf("La note est invalide");

    }
    return 0;
}
