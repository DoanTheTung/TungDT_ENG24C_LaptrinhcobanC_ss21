#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    FILE *file;
    int numLines;
    char line[500];
    // Mo file de ghi
    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("khong the mo file bt05.txt.\n");
        return 1;
    }
    // Nhap so dong va noi dung
    printf("Nhap so dong muon ghi vao file: ");
    scanf("%d", &numLines);
    getchar();
    for (int i = 0; i < numLines; i++) {
        printf("Nhap noi dung dong thu %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        int len = strlen(line);
        if (len > 0 && line[len - 1] == '\n') {
            line[len - 1] = '\0';
        }
        fprintf(file, "%s\n", line);
    }
    // Ðóng file sau khi ghi
    fclose(file);
    // Mo file de doc
    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("khong the mo file file bt05.txt.\n");
        return 1;
    }
    // Doc va in noi dung
    printf("\nN?i dung file bt05.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    // Dong file
    fclose(file);
    return 0;
}
