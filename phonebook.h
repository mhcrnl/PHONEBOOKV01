#ifndef PHONEBOOK_H_INCLUDED
#define PHONEBOOK_H_INCLUDED
/*============================================================
    File:       phonebook.h
    Author:     Mihai Cornel mhcrnl@gmail.com 0722270796
    System:     Ubuntu 16.04
    IDE:        Code::Blocks 13.10
    Compiler:   gcc
    Description:Phone Book Application
    Version:    1.0
    Data:       22.09.2016
==============================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct AGENDA {
    char nume[20];
    char prenume[20];
    char tel[20];
    struct AGENDA *next;
} agenda;

/**< 1. Print the list */
void printList(agenda *head);
/**< 2. Add at last element in list  */
void addLast(agenda *head, char nume[], char prenume[], char tel[]);
/**< 3. Search for name in list */
agenda *findName(agenda *head, char nume[]);
/**< 4. Add element in list  */
agenda *append(agenda *head, char nume[], char prenume[], char tel[]);
/**< 5. Save to file agenda */
void saveToFile(agenda *head, char filename[20]);
#endif // PHONEBOOK_H_INCLUDED
