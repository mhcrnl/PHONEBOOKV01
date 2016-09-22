## Synopsis

Agenda Phone Book program.

## Code Example
```C
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
```


## Motivation

This is a project for learning.

## Installation
```C
agenda *appAge;
    appAge = append(head, "Vasile", "Andrei", "1234567890");
    printList(head);
    printf("CONTACTUL A FOST ADAUGAT:");
    printList(appAge);
```


## API Reference

Depending on the size of the project, if it is small and simple enough the reference docs can be added to the README. For medium size to larger projects it is important to at least provide a link to where the API reference docs live.

## Tests

Describe and show how to run the tests with code examples.

## Contributors

Let people know how they can dive into the project, include important links to things like issue trackers, irc, twitter accounts if applicable.

## License

FREE 