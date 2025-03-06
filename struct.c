#include <stdio.h>
#define MAX_USERS 3

// Define a struct to represent a user
struct User {
    int id;
    char name[50];
    int balance;
};

int main() {
    // Create two users
    struct User users[MAX_USERS];
    for(int i = 0;i < MAX_USERS; i++){
        printf("enter the id:");
        scanf("%d",&users[i].id);
        printf("enter the name");
        scanf("%s",&users[i].name);
        printf("enter the balance");
        scanf("%d",&users[i].balance);
    }
    for(int i = 0; i < MAX_USERS; i++){
        printf("%d",users[i].id);
        printf("%s",users[i].name);
        printf("%d",users[i].balance);

    }

    int find,i;
    printf("Enter the UserID to check the balance: ");
    scanf("%d", &find);

    for(int i=0; i< MAX_USERS; i++){
            if(find==users[i].id){
                 printf("balance of user %d: %d",find,users[i].balance);
    }
}
}
