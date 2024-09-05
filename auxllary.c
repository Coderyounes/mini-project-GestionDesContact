#include "main.h"

void Welcome() {
    printf("\n*************************************\n");
    printf("\n\tBonjour!\n");
    printf("*************************************\n");
    printf("0: exit\n");
    printf("1: ajouter Contact\n");
    printf("2: afficher Contact\n");
    printf("3: modifie Contact\n");
    printf("4: search Contact\n");
    printf("5: supprimer Contact\n");
}

int searchAux(Contact_t contacts[], int count, char nom[]) {
    int i;
    for (i = 0; i < count; i++) {
        if(strcmp(contacts[i].nom, nom) == 0) {
            return (i);
        }
    }
    return (-1);
}