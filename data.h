#ifndef DATA_H
#define DATA_H

#define size 10

typedef struct {
    char username[20];
    char password[20];
} User;

void registerUser(User *users, int *total);
void loginUser(User *users, int total);

#endif 
