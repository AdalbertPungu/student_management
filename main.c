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



}
