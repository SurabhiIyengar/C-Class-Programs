
#include <stdio.h>


char alp() {
    int x;
    printf("Enter the integer: ");
    scanf("%d", &x);
    return x;
}


int main() {
    printf("%c", alp());
    return 0;
}

