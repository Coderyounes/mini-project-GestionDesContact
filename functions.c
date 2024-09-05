#include "main.h"

void addContact(Contact_t contacts[], int size, int count) {
    if (count >= size) {
        printf(" size: %d");
        printf("Tableux est Plein!\n");
        return;
    }
    printf("Enter nom: ");
    scanf("%s", contacts[count].nom);
    printf("Enter l'email: ");
    scanf(" %s", contacts[count].email);
    printf("Enter le numero de telephone: ");
    scanf("%s", contacts[count].phone);
}

void displayContact(Contact_t contacts[], int count) {
    int i;
    if (count == 0) {
        printf("contacts list is empty!");
        return;
    }

    for(i = 0; i < count; i++) {
        printf("\n------------------------\n");
        printf("Name is: %s  Email is: %s  phone: %sn", contacts[i].nom,
                                                        contacts[i].email,
                                                        contacts[i].phone);
    }
}

void searchContact(Contact_t contacts[], int count, char nom[]) {
    int i;
    i = searchAux(contacts, count, nom);

    if (i < 0) {
        printf("No Contact Found");
        return;
    }
    printf("Contact Found: %s %s %s", contacts[i].nom, contacts[i].email, contacts[i].phone);
}

void ModifyContact(Contact_t contacts[], int count, char nom[]) {
    int i;
    i = searchAux(contacts, count, nom);
    if(i < 0) {
        printf("No Contact Found to Modify\n");
        return;
    }
    printf("Entre le nouveau Nom: ");
    scanf("%s", contacts[i].nom);
    printf("Entree le nouveau Email: ");
    scanf("%s", contacts[i].email);
    printf("Entree le nouveau phone: ");
    scanf("%s", contacts[i].phone);
}

void deleteContact(Contact_t contacts[], int count, char nom[]) {
    int i;

    i = searchAux(contacts, count, nom);
}