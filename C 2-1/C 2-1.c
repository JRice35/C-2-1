#include <stdio.h>
#include <string.h>

int main() {
    // Declare a character array to store the user's message
    char message[300];

    // Prompt the user to enter a message
    printf("Enter your message:\n");
    fgets(message, sizeof(message), stdin); // Read input including spaces



    // Check if the message length is within the 140-character limit
    if (strlen(message) <= 140) {
        printf("\nPosted\n");
    }
    else {
        printf("\nRejected\n");
    }

    return 0; // End the program
}
