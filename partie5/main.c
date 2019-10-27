#include <stdio.h>
#include <stdlib.h>

int main()
{

    char choix;
    int valeur;
    int nombreADecouvrir;
    int MIN = 1, MAX = 1000;


    printf("L'ordinateur a chosi un nombre entre 1 et 1000.\n");
    printf("Pouvez-vous trouver le nombre en 10 coups maximum ?\n \n");
    do
    {
         printf("\n Jouer \t \t \t --> appuyer sur la touche 1\n");
        printf("sortir du programme \t --> appuyer sur la touche s\n");
        printf("Votre choix : ");
        fflush(stdin);
        scanf("%c",&choix);
            switch(choix)
            {
            case('l'):
                {


    srand(time(NULL));
    nombreADecouvrir = (rand() % (MAX - MIN + 1)) + MIN;
    printf("%d",nombreADecouvrir);
    printf("Votre choix : ");
    scanf("%d",&valeur);
        do
        {
            if (valeur<nombreADecouvrir)
            {
                printf("\nTrop petit!");
                printf("\nVotre prediction : ");
                scanf("%d",&valeur);

            }
            if(valeur>nombreADecouvrir)
            {
                printf("\nTrop grand");
                printf("\nVotre prediction : ");
                scanf("%d",&valeur);

            }
        }while(valeur!= nombreADecouvrir);
        if(valeur==nombreADecouvrir)
            {
                printf("\n Bingo");
                choix='s';
                break;
            }


                }
                break;
                case('L'):
                {


    srand(time(NULL));
    nombreADecouvrir = (rand() % (MAX - MIN + 1)) + MIN;
    printf("%d",nombreADecouvrir);
    printf("Votre choix : ");
    scanf("%d",&valeur);
        do
        {
            if (valeur<nombreADecouvrir)
            {
                printf("\nTrop petit!");
                printf("\nVotre prediction : ");
                scanf("%d",&valeur);

            }
            if(valeur>nombreADecouvrir)
            {
                printf("\nTrop grand");
                printf("\nVotre prediction : ");
                scanf("%d",&valeur);

            }
        }while(valeur!= nombreADecouvrir);
        if(valeur==nombreADecouvrir)
            {
                printf("\n Bingo");
                choix='s';
                break;
            }


                }
                break;
            case('s'):
                printf("Au revoir ");
                break;
            case('S'):
                {
                printf("Au revoir...");
                choix='s';
                break;
                }

            default:
               {
                printf("Choix non valide...\n");
                break;
               }

            }
    }while(choix!='s');

}
