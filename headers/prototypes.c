//declaration des bibliothèques
#include <stdio.h>
#include <stdlib.h>

//la procedure qui permet de rentrer au menu precedent
void retourMenu()
{
    int choix;

    printf("\n:Pour Rentrer au menu Principal Tapez 1\n");
    printf(":Pour quitter Tapez 2\n");
    printf(":Votre exe n'a pas d'arguments, veuilez saisir\n");

    do{
        printf("\nle choix est compris entre 1 & 2\n");
        printf("==>votre choix de menu: ");
        scanf("%d", &choix);

    }while(choix < 1 || choix > 2);

    switch(choix)
    {
        case 1:
            main();
            break;
        case 2:
            printf("Vous avez choisi de quitter le programme\n");
            break;
    }

}
