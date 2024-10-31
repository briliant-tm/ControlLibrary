#include <stdio.h>
#include "book.h"

int main() {
    int choice, id;
    char title[100], author[100];

    while (1) {
        printf("\nMenu:\n");
        printf("1. Tambah Buku\n");
        printf("2. Lihat Buku\n");
        printf("3. Hapus Buku\n");
        printf("4. Keluar\n");
        printf("Pilih opsi: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Masukkan ID Buku: ");
                scanf("%d", &id);
                printf("Masukkan Judul Buku: ");
                getchar(); 
                fgets(title, 100, stdin);
                title[strcspn(title, "\n")] = '\0'; 
                printf("Masukkan Nama Penulis: ");
                fgets(author, 100, stdin);
                author[strcspn(author, "\n")] = '\0';
                addBook(id, title, author);
                break;
            case 2:
                viewBooks();
                break;
            case 3:
                printf("Masukkan ID Buku yang ingin dihapus: ");
                scanf("%d", &id);
                deleteBook(id);
                break;
            case 4:
                printf("Terima kasih! Program selesai.\n");
                return 0;
            default:
                printf("Opsi tidak valid. Silakan pilih ulang.\n");
        }
    }
    return 0;
}
