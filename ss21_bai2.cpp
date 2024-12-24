#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char input[500];
    char firstChar;
    //Mo file de ghi
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the tao file.\n");
        return 1;
    }
   // Doc ky tu dau tien trong file
    firstChar = fgetc(file);
    if (firstChar != EOF) {
        printf("Ky tu dau tien trong bt01.txt la: '%c'\n", firstChar);
    } else {
        printf("File bt01.txt rong.\n");
    }
    fclose(file);
    printf("Da ghi chuoi thanh cong.\n");
    return 0;
}
