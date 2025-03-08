
//create.h//

#ifndef CREATE_H
#define CREATE_H

struct User {
    int id;
    int balance;
    char name[50];
    char address[200];
};


void createUser(struct User *users, int *userCount);

#endif
