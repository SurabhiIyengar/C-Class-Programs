#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {
    char groceries[SIZE][50];
    FILE *file;
    file = fopen("groceries.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }
    printf("Enter %d grocery items:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Item %d: ", i + 1);
        scanf(" %[^\n]", groceries[i]);
        fprintf(file, "%s\n", groceries[i]);
    }

    fclose(file);
    printf("\nGrocery items saved to 'groceries.txt'.\n");

    file = fopen("groceries.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("\nYour Grocery List (Read from file):\n");
    char item[50];
    int count = 1;


    while (fgets(item, sizeof(item), file) != NULL) {
        printf("%d. %s", count, item);
        count++;
    }

    fclose(file);
    return 0;
}
