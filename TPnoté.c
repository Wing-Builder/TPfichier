#include <stdio.h>
#include <stdlib.h>

typedef struct Contact // champs de la structure.
{
    char* firstname;
    char* lastname;
    int age;
} Contact; // Remplacer struct Contact par "contact" (typedef permet de définir un type)

/* Programme qui permet de saisir des contacts et de les enregistrer sur disque: createContacts.exe*/

/* Programme qui affiche le nombre de contacts, la liste de contact: contactList.exe*/

int main()
{
    /*  1.Saisi de contact */

    Contact contact = {"", "", 0}; // initialisation de la structure

    // affichage du contact
    // printf("Prénom du contact: ");
    // scanf("%s", contact.firstname);

    // printf("Nom du contact: ");
    // scanf("%s" contact.lastname);

    // printf("Age du contact: ");
    // scanf("%d" contact.age);

    /*----------------------------------------------------------------------------------------------*/

    /* 2.Enregistrement du contact sur disque.*/
    FILE *fic = fopen("contactList.exe", "r"); // fopen(<fichier>, <mode_ouverture>): ouverture du fichier.
    char lettre = 0;
    
    if (fic == NULL)
        exit(1);

    /*-----------------------------------------------------------------------------------------------*/

    /* Programme qui affiche le nombre de contacts, la liste de contact: contactList.exe*/
    /* 3.Afficher la liste des contacts du disque.*/

    while (1) // pour lire tous les caractères du début à la fin.
    {
        lettre = fgetc(fic); // lecture du premier caractère obligatoire et faite dans tous les cas.

        if (feof(fic)) 
            break; // si on est bien à la fin du fichier.

        printf("%c", lettre);
    }
    fclose(fic); // fermeture du fichier.

    return 0;
}
