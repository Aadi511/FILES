#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i;
    FILE *fp, *dp2;
    char c[100];

    // Read input from stdin and write to "huha.txt"
    fgets(c, sizeof(c), stdin);
    fp = fopen("huha.txt", "w");
    if (fp == NULL) {
        perror("Failed to open huha.txt for writing");
        return 1;
    }
    fprintf(fp, "%s", c);
    fclose(fp);

    // Open "huha.txt" for reading
    fp = fopen("huha.txt", "r");
    if (fp == NULL) {
        perror("Failed to open huha.txt for reading");
        return 1;
    }

    // Open "hahu.txt" for writing
    dp2 = fopen("hahu.txt", "w");
    if (dp2 == NULL) {
        perror("Failed to open hahu.txt for writing");
        fclose(fp);
        return 1;
    }

    // Read from "huha.txt" and write to "hahu.txt"
    while ((i = fgetc(fp)) != EOF) {
        fputc(i, dp2);  // Write the character to "hahu.txt"
    }

    // Close both files
    fclose(fp);
    fclose(dp2);

    return 0;
}
