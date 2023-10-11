#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data.h"

void loginUser(User *users, int total) {
    char username[20];
    char password[20];

    printf("Enter your username: ");
    scanf("%s", username);

    printf("Enter your password: ");
    scanf("%s", password);

    int i;
    for (i = 0; i < total; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            printf("Hello %s\n", users[i].username);
            return;
        }
    }

    printf("Invalid username or password.\n");
}
