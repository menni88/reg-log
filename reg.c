#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data.h"

void registerUser(User *users, int *total) {
	
    User newUser;
    printf("Enter your username: ");
    scanf("%s", newUser.username);
    int i;
    for ( i = 0; i < *total; i++) {
        if (strcmp(users[i].username, newUser.username) == 0) {
            printf("Username already exists.\n");
            return;
        }
    }

    printf("Enter password: ");
    scanf("%s", newUser.password);

    users[(*total)++] = newUser;

    printf("Hello %s %s\n", newUser.username);
}
