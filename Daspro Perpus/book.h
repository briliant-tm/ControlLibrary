#ifndef BOOK_H
#define BOOK_H

struct Book {
    int id;
    char title[100];
    char author[100];
};

void addBook(int id, char *title, char *author);
void viewBooks();
void deleteBook(int id);

#endif
