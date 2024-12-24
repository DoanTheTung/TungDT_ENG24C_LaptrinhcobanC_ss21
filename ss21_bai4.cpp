#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char input[500];
    char line[500];
    // Mo file
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        return 1;
    }
    // Doc dong dau tien trong file
    if (fgets(line, sizeof(line), file) != NULL) {
        printf("Dong dau tien trong file bt01.txt la:\n%s\n", line);
    } else {
        printf("tep bt01.txt rong.\n");
    }
    // Dong file
    fclose(file);
    return 0;
}
