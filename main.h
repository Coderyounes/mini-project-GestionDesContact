#ifndef MAIN_H
#define MAIN_H
#define MAX 200
#define ENTRY 10

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contact {
    char nom[50];
    char email[100];
    char phone[30];
} Contact_t;

// Auxillary
void Welcome();
int searchAux(Contact_t contacts[], int count, char nom[]);
void clearString(char *str);

// Contact Operation
void addContact(Contact_t contacts[], int size, int count);
void displayContact(Contact_t contacts[], int count);
void deleteContact(Contact_t contacts[], int count, char nom[]);
void ModifyContact(Contact_t contacts[], int count, char nom[]);
void searchContact(Contact_t contacts[], int count, char word[]);

#endif /* MAIN_H*/