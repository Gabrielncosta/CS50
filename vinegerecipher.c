// a code that uses a command line argument keyword for encrypting a message

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    const int true = 1; 
    const int false = 0;
    int j , key, l = 0;
    char message[40];
    char *s = argv[1];
    
    // gets the message
    printf("plaintext: ");
    scanf("%s", message);

    // check for just two arguments and if the passed character is alphabetic
    for (int i = 0; i < strlen(s); i++)
    {
        // isalpha is a function that checks if the input is a letter instead of a number
        if (isalpha(s[i]) == false || argc != 2) 
        {
            printf("Usage: ./caesar keyword\n");
            return 1;
        }
    }

    // check if the letter is uppercase or lowercase then encrypts it
    for (int i = 0, n = strlen(message); i < n; i++)
    {
        int keyword = (int) argv[1][i];
        if (message[i] >= 'a' && message[i] <= 'z')
        {   
            // 'j' use here is for lopping the keyword
            j = (l % strlen(s));
            key = ((s[j]) - 97);
            printf("%c\n", (((message[i] - 'a') + key) % 26) + 'a');
            l++;
        } 
        else if (message[i] >= 'A' && message[i] <= 'z')
        {
            j = (l % strlen(s));
            key = ((s[j]) - 97);
            printf("%c", (((message[i] - 'A') + key) % 26) + 'A');
            l++;
        }
        else
        // if the input ins't lowercase neither upeprcase, just print whatever the input is
        {
            printf("%c", message[i]); 
        }
    } 
}
