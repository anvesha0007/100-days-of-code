//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceName[50], destName[50];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", sourceName);

    printf("Enter destination filename: ");
    scanf("%s", destName);

    source = fopen(sourceName, "r");

    if(source == NULL) {
        printf("Source file not found.");
        return 1;
    }

    destination = fopen(destName, "w");

    if(destination == NULL) {
        printf("Destination file cannot be created.");
        fclose(source);
        return 1;
    }

    while((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.");

    fclose(source);
    fclose(destination);

    return 0;
}
