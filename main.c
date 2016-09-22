/*============================================================
    File:       main.c
    Author:     Mihai Cornel mhcrnl@gmail.com 0722270796
    System:     Ubuntu 16.04
    IDE:        Code::Blocks 13.10
    Compiler:   gcc
    Description:Phone Book Application
    Version:    1.0
    Date:       22.09.2016
==============================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "phonebook.h"

int main()
{
    printf("Hello world from PhoneBookV01!\n");

    agenda *head = NULL;
    head = malloc(sizeof(agenda));
    if(head == NULL){
        return 1;
    }
    //Add a node
    strcpy(head->nume, "Mihai");
    strcpy(head->prenume, "Cornel");
    strcpy(head->tel, "0722270796");
    head->next = NULL;

    printList(head);

    addLast(head, "Mihai", "Vasile", "073456789");
    addLast(head, "Manea", "Vasile", "0734567899");

    printList(head);

    agenda *findNume;
    findNume = findName(head, "Manea");
    puts("CONTACTUL CAUTAT DUPA NUME: ");
    printList(findNume);

    agenda *appAge;
    appAge = append(head, "Vasile", "Andrei", "1234567890");
    printList(head);
    printf("CONTACTUL A FOST ADAUGAT:");
    printList(appAge);

    return 0;
}
