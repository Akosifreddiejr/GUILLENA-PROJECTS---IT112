#include <stdio.h>

int main() {
    char name[100];
    char section[50];
    FILE *fp;

    printf("Complete Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Section: ");
    fgets(section, sizeof(section), stdin);

    fp = fopen("student.txt", "w");
    if(fp == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    fprintf(fp, "Complete Name: %s", name);
    fprintf(fp, "Section: %s", section);
    fclose(fp);

    printf("\nInformation successfully saved to student.txt\n\n");

    fp = fopen("student.txt", "r");
    if(fp == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    char text[100];
    while(fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);
    }
    
    fclose(fp);
    return 0;
}