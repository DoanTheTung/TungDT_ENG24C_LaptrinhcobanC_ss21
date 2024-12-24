#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char input[500];
    FILE *sourceFile, *destFile;
    char ch;
    //Mo file bt01.txt
    file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the tao file.\n");
        return 1;
    }
    // Mo fle bt06.txt 
    destFile = fopen("bt06.txt", "w");
    if (destFile == NULL) {
        printf("Khong the tao file bt06.txt.\n");
        fclose(sourceFile);
        return 1;
    }
    // Sao chep noi dung bt01.txt sang bt06.txt
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    printf("Sao chep noi dung bt01.txt sang bt06.txt thanh cong.\n");
    // Dong file
    fclose(sourceFile);
    fclose(destFile);
    return 0;
}
