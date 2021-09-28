//structure tuteurs
struct Tuteurs
{
    int numTuteur;
    char nomTuteur[50];
    char Profession[50];
    char TelTuteur[10];
};

struct Tuteurs parent;

//structure etudiants
struct Etudiants
{
    char codeEtu[6];
    char Nom[50];
    char Post_nom[50];
    char Prenom[50];
    int age;
    char adresseEtu;
    int Tel[10];
    //numTuteur
};

struct Etudiants info;

//procedure menu 1 pour l'ajouter
void menu1()
{
    FILE* fichier = NULL;
    int nbreP;


    //Dans la variable fichier on ajoute le fichier en mode lecture(a)
    fichier = fopen("etudiant_data.txt", "a");

    printf("\n======== MENU 1 =========\n");

    do{
        printf("\nQuel est le nombre des personnes ?: ");
        scanf("%d", &nbreP);
        if(nbreP <= 0)
        {
            printf("le nombre doit etre superieur a 1\n");
            continue;
        }
        else if(nbreP > 0 && nbreP < 1)
        {
            break;
        }
    }while(nbreP <= 0);

        printf("\n***Enregistrement***\n");

    if(fichier != NULL)
    {
        for(int i = 1; i <= nbreP; i += 1)
        {
            printf("\nSaisir les informations des Personnes: %d\n", i);

            printf("\nNom: ");
            scanf("%s", info.Nom);

            printf("Post_nom: ");
            scanf("%s", info.Post_nom);

            printf("Prenom: ");
            scanf("%s", info.Prenom);

            printf("Age: ");
            scanf("%d", &info.age);
            
            fprintf(fichier,"%s ", info.Nom);
            fprintf(fichier,"%s ", info.Post_nom);
            fprintf(fichier,"%s ", info.Prenom);
            fprintf(fichier,"%d\n", info.age);

            printf("\nLa chaine: %s, %s, %s, %d\n", info.Nom, info.Post_nom, info.Prenom, info.age);

        }

        fclose(fichier);
    }

    retourMenu();

}


//procedure menu 2 pour l'afficher
void menu2()
{
    FILE* fichier = NULL;
    int caractereActuel = 0;

    fichier = fopen("etudiant_data.txt", "r");
    printf("\n======== MENU 3 =========\n");

    printf("*** liste du fichier ***\n\n");

    if (fichier != NULL)
    {
        // Boucle de lecture des caractères un à un
        do
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche
        } while(caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)

        fclose(fichier);
    }

    retourMenu();

}

//permet d'ajouté les informations du tuteur
void menu1Tuteur()
{
    FILE* fichier = NULL;
    int nbreP;

    //Dans fichier on ajoute le fichier en mode lecture(a) s'il n'existe pas
    fichier = fopen("parent_data.txt", "a");

    printf("\n======== MENU 1 =========\n");

    do{
        printf("\nQuel est le nombre des personnes ?: ");
        scanf("%d", &nbreP);
        if(nbreP <= 0)
        {
            printf("le nombre doit etre superieur a 1\n");
            continue;
        }
        else if(nbreP > 0 && nbreP < 1)
        {
            break;
        }
    }while(nbreP <= 0);

    printf("\n***Enregistrement***\n");

    if(fichier != NULL)
    {
        for(int i = 1; i <= nbreP; i += 1)
        {
            printf("\nSaisir les informations des Personnes: %d\n", i);

            printf("Nom Tuteur: ");
            scanf("%s", parent.nomTuteur);

            printf("Profession: ");
            scanf("%s", parent.Profession);

            printf("Tel: ");
            scanf("%s", parent.TelTuteur);

            fprintf(fichier,"%s ", parent.nomTuteur);
            fprintf(fichier,"%s ", parent.Profession);
            fprintf(fichier,"%s\n", parent.TelTuteur);

            printf("\nLa chaine: %s, %s, %s\n", parent.nomTuteur, parent.Profession, parent.TelTuteur);

        }

        fclose(fichier);
    }

    retourMenu();

}

