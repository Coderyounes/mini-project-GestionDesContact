#include "main.h"

int main() {
    int choix;
    Contact_t contacts[ENTRY];
    int sizeTable = 0, count = 0;
    while(1) {
        char word[50];
        Welcome();
        printf("Enter un Choix: ");
        scanf("%d", &choix);
        sizeTable = sizeof(contacts) / sizeof(Contact_t);
        switch(choix) {
            case 0:
                printf("Exit...");
                exit(0);
            case 1:
                addContact(contacts, sizeTable, count);
                count++;
                break;
            case 2:
                displayContact(contacts, count);
                break;
            case 3:
                printf("Entree le nom de Contact a modifie: ");
                scanf("%s", word);
                ModifyContact(contacts, count, word);
                clearString(word);
                break;
            case 4:
                printf("Entre nom to search: ");
                scanf("%s", word);
                searchContact(contacts, count, word);
                clearString(word);
                break;
            case 5:
                printf("C'est le nom de Contacts? je veux supprimer: ");
                scanf("%s", word);
                deleteContact(contacts, count, word);
                count--;
                clearString(word);
                break;
            default:
                printf("Please Enter a Correct Choice\n");
                exit(0);
        }
    }
    return (0);
}