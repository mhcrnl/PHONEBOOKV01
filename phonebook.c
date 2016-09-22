/*======================================================================
    File:       phonebook.c
    Author:     Mihai Cornel mhcrnl@gmail.com 0722270796
    System:     Ubuntu 16.04
    IDE:        Code::Blocks 13.10
    Compiler:   gcc
    Description:Phone Book Application
    Version:    1.0
    Date:       22.09.2016
=======================================================================*/

#include "phonebook.h"

/**< 1. Print the list */
void printList(agenda *head)
{
    agenda *curent = head;
    while(curent != NULL){
        printf("%s %s %s\n", curent->nume, curent->prenume, curent->tel);
        curent = curent->next;
    }
}
/**< 2. Add at last element in list  */
void addLast(agenda *head, char nume[], char prenume[], char tel[])
{
    agenda *curent = head;
    while(curent->next != NULL){
        curent = curent->next;
    }
    curent->next = malloc(sizeof(agenda));
    strcpy(curent->nume, nume);
    strcpy(curent->prenume, prenume);
    strcpy(curent->tel, tel);
    curent->next->next = NULL;
}
/**< 3. Search for name in list */
agenda *findName(agenda *head, char nume[])
{
    while(head != NULL){
        if(strcasecmp(nume, head->nume) == 0){
            return head;
        }
        head = head->next;
    }
    return NULL;
}
/**< 4. Add element in list  */
agenda *append(agenda *head, char nume[], char prenume[], char tel[])
{
    head->next = malloc(sizeof(agenda));
    head = head->next;
    strcpy(head->nume, nume);
    strcpy(head->prenume, prenume);
    strcpy(head->tel, tel);
    head->next = NULL;

}
