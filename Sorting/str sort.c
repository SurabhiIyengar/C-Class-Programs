#include <string.h>
#include <stdio.h>

void sortStrings(char arr[][50], int n) {
    char temp[50];
    for (int j=0; j < n-1; j++) {
        for (int i=j+1; i < n; i++) {
            if (strcmp(arr[j], arr[i]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
            }
        }
    }
}

int main() {
    char arr[][50] = {"Hyderabad", "Mysore", "Bangalore"};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortStrings(arr, n);

    for(int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}
