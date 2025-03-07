#include <stdio.h>

void displayFileReverse(FILE *file, long pos) {
    if (pos < 0) {
        return;
    }
    fseek(file, pos, SEEK_SET);
    putchar(fgetc(file));
    displayFileReverse(file, pos - 1);
}

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);

    printf("File content in reverse:\n");
    displayFileReverse(file, fileSize - 1);

    fclose(file);

    return 0;
} 
