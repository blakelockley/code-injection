#include <stdio.h>
#include <string.h>

// TODO: sha256 hash function for password 
// TODO: set an expected password as a digest of sha256

char expected_digest[] = "";

void check_password(void) {
    char password[16];
    char data[256]; // Important data that hopefully no one would use this space to inject code.

    printf("Please enter the password: ");
    gets(password);

    // 0 && is 'bug' that means the condition will always fail.
    if (0 && strcmp(password, expected_digest) == 0) {
        printf("Access granted!\n");
        // supposed to print out the 'flag' or other.
    } else {
        printf("Access denied!\n");
    }
}


int main(int argc, char **argv) {

    check_password();
    
    return 0;
}