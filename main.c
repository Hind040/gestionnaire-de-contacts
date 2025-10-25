#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct liste {
    char nom[50];
    char telephone[10];
    char email[50];
};
void ajouter(struct liste contacts[100], int *nombre) {
    printf("entrer le nom : ");
    scanf("%s", contacts[*nombre].nom);
    printf("entrer le numero de telephone : ");
    scanf("%s", contacts[*nombre].telephone);
    printf("entrer l'adresse e-mail : ");
    scanf("%s", contacts[*nombre].email);
    printf("Contact ajoute !\n");
    (*nombre)++;
}
void rechercher(struct liste contacts[100], int nombre) {
    char nomrecherche[50];
    printf("entrer le nom a rechercher : ");
    scanf("%s", nomrecherche);
    for (int i=0; i<nombre ;i++){
        if(strcmp(contacts[i].nom,nomrecherche)==0){ //==0 : cad le nom li fliste =nomrecherche
           printf("le contacte est trouve !\n");
           printf("le nom :%s\n",contacts[i].nom);
           printf("le telephone de telephone :%s\n",contacts[i].telephone);
           printf("l'adresse email :%s\n",contacts[i].email);
           return;
    }
    }
    printf("le contact n'est pas trouve !\n");
}
void modifier(struct liste contacts[100], int nombre) {
    char nomrecherche[50];
    printf("entrer le nom du contact a modifier : ");
    scanf("%s", nomrecherche);
        for(int i=0;i<nombre;i++){
                if (strcmp(contacts[i].nom,nomrecherche)==0){
            printf("le nouveau nom : ");
            scanf("%s", contacts[i].nom);
            printf("le nouveau numero de telephone : ");
            scanf("%s", contacts[i].telephone);
            printf("la nouveau adresse e-mail : ");
            scanf("%s", contacts[i].email);
            printf("le contact n'est pas trouve !\n");
            return;
            }
        }
    printf("Contact modifiee!\n");
}
void supprimer(struct liste contacts[100], int *nombre) {
    char nomrecherche[50];
    struct liste temp[100];
    printf("Entrer le nom du contact a supprimer : ");
    scanf("%s", nomrecherche);
    for (int i = 0; i < *nombre; i++) {
        if (strcmp(contacts[i].nom, nomrecherche) != 0) {
            temp[n++] = contacts[i];
    }
}
}
void afficher_tous(struct liste contacts[100], int *nombre) {
    if (*nombre == 0) {
        printf(" Aucun contact enregistre !\n");
    } else {
        printf("--- Liste des contacts ---\n");
    }
            for (int i=0;i<*nombre;i++){
            printf("%d.[%s -%s - %s]\n",i+1,contacts[i].nom,contacts[i].telephone,contacts[i].email);
      }

    }
int main() {
    struct liste contacts[100];
    int nombre = 0;
    int choix;
    do {
        printf("--- Systeme de Gestion de Contacts ---\n");
        printf("1---ajouter---\n");
        printf("2---rechercher---\n");
        printf("3---modifier---\n");
        printf("4---supprimer---\n");
        printf("5---afficher_tous---\n");
        printf("0---quitter---\n");
        printf("choisissez une option : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouter(contacts, &nombre);
                break;
            case 2:
                rechercher(contacts, nombre);
                break;
            case 3:
                modifier(contacts, nombre);
                break;
            case 4:
                supprimer(contacts,&nombre);
                break;
            case 5:
                afficher_tous(contacts,&nombre);
                break;
            case 0:
                printf("Au revoir !\n");
                exit(0);
            default:
                printf("Veuillez reessayer.\n");
        }
    }while (choix!=0);
    return 0;
}
