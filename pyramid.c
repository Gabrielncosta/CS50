//  Creates a pyramid with height based on user input

#include <stdio.h>

int main(void)
{
    int height, line, hashtag, dot;
    
    // prompts user for height
    printf("Pyramid size: ");
    scanf("%d", &height);
   
    // for loop 
    
    for (line = 0; line < height; line++)
    {  
        for (dot = height; dot > line; dot--)
        {
            printf(" ");
        }
        
        for (hashtag = 0; hashtag <= line; hashtag++)  //first pyramid
        {
            printf("#");
        }
        
        for (dot = 1; dot < 2; dot++)
        {
            printf(" ");
        }
        
        for (hashtag = 0; hashtag <= line; hashtag++)  // second pyramid
        {
            printf("#");
        }
        
        printf("\n");
    }
    return 0;
} 
