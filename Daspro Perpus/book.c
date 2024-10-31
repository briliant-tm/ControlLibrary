#include <stdio.h>
#include <string.h>
#include "book.h"

struct Book library[100];
int book_count = 0;

void addBook(int id, char *title, char *author) {
    library[book_count].id = id;
    strcpy(library[book_count].title, title);
    strcpy(library[book_count].author, author);
    book_count++;
    printf("Buku berhasil ditambahkan!\n");
}

void viewBooks() {
    printf("\nDaftar Buku:\n");
    for (int i = 0; i < book_count; i++) {
        printf("ID: %d\n", library[i].id);
        printf("Judul: %s\n", library[i].title);
        printf("Penulis: %s\n\n", library[i].author);
    }
}

void deleteBook(int id) {
    int found = 0;
    for (int i = 0; i < book_count; i++) {
        if (library[i].id == id) {
            found = 1;
            for (int j = i; j < book_count - 1; j++) {
                library[j] = library[j + 1];
            }
            book_count--;
            printf("Buku berhasil dihapus!\n");
            break;
        }
    }
    if (!found) {
        printf("Buku tidak ditemukan!\n");
    }
}
