//main.c//

#include <stdio.h>
#include "function 1.h"

int main() {
    int options;
    struct User users[100];
    int userCount = 0;
    while (1) {
        printf("1. Add User\n2. Update User\n3. Delete User\n4. Credit Money\n5. Debit Money\n6. Transfer Money \nEnter the options to do: ");
        scanf("%d", &options);

        switch (options) {
            case 1:
                printf("\nCreate User\n");
                createUser(users, &userCount);
                break;
            case 2:
                printf("\nUpdate User\n");
                break;
            case 3:
                printf("\nDelete User\n");
                break;
            case 4:
                printf("\nCredit Money\n");
                break;
            case 5:
                printf("\nDebit Money\n");
                break;
            case 6:
                printf("\nTransfer Money\n");
                break;
            default:
                printf("\nInvalid Input\n");
        }
    }

    return 0;
}
