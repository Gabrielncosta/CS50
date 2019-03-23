// A program for encrypting a message by shifting each letter by some number of places
// using a command line argument



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char message[20];
    printf("plaintext: ");
    scanf("%s", message);
    
    // transform the second argument into an integer
    int key = atoi(argv[1]);
    
    // check if key is a positive number
    if (key < 0)
    {
        printf("Only postive numbers");
    }

    // just two arguments: the program and the key
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    
    // check if the letter is uppercase or lowercase then encrypts it
    for (int i = 0, n = strlen(message); i < n; i++)
    {
        if (message[i] >= 'a' && message[i] <= 'z')
        {
            printf("%c", (((message[i] - 'a') + key) % 26) + 'a');
        } 
        else if (message[i] >= 'A' && message[i] <= 'z')
        {
            printf("%c", (((message[i] - 'A') + key) % 26) + 'A');
        }
        else
        {
            printf("%c", message[i]); 
        }
    }
}
