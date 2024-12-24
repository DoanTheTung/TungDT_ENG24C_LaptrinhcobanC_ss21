#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char input[500];
    // Mo file
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        return 1;
    }
    // Nhap chuoi
    printf("Nhap chuoi muon them vao file bt01.txt: ");
    fgets(input, sizeof(input), stdin);
    // Ghi chuoi vao file
    fputs(input, file);
    // Ðóng tep
    fclose(file);
    printf("Da ghi them vao file bt01.txt thanh cong.\n");
    return 0;
}

