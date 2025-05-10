#include <stdio.h>

int main(){
    FILE *sourceFile, *destinationFile;
    char ch;
    sourceFile = fopen("input.txt", "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file\n");
        return 1;
    }
    destinationFile = fopen("output.txt", "w");
    if (destinationFile == NULL) {
        printf("Error: Could not open destination file\n");
        fclose(sourceFile);
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }
    fclose(sourceFile);
    fclose(destinationFile);
    printf("File copied successfully.\n");
    return 0;
}