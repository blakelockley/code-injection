#include <stdio.h>
#include <string.h>

#define BUF_LEN 64

// TODO: sha256 hash function for password 
// TODO: set an expected password as a digest of sha256

char correct_password[] = "notpassword"; // make sure the password is not 'password' :^)

void check_password(void) {
    char password[16];

    printf("Please enter the password: ");
    gets(password);

    // This is the epitome of security!
    if (strcmp(password, correct_password) == 0) {
        printf("Access granted, the codename is...\n");

        FILE *f = fopen("flag.txt", "r");
        char buffer[BUF_LEN];

        fgets(buffer, BUF_LEN, f);
        printf("%s\n", buffer);
        fclose(f);

    } else {
        printf("Access denied!\n");
    }
}


int main(int argc, char **argv) {

    check_password();
    
    return 0;
}