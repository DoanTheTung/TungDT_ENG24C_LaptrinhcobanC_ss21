#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char input[500];
    //Mo file de ghi
    file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the tao file.\n");
        return 1;
    }
    // Nhap chuoi
    printf("Nhap chuoi vao file bt01.txt: ");
    fgets(input, sizeof(input), stdin);
    // Ghi chuoi vao file
    fputs(input, file);
    //Dong file
    fclose(file);
    printf("Da ghi chuoi thanh cong.\n");
    return 0;
}
