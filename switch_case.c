#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        switch(ch)
        {
            case 'a': 
            case 'e': 
            case 'i': 
            case 'o': 
            case 'u': 
            case 'A': 
            case 'I': 
            case 'E': 
            case 'O': 
            case 'U':
            printf("%c is a VOWEL. \n",ch);
            break;
            default:
            printf("%c is a CONSONANT. \n",ch);

        }
    }
    else
    {
        printf("%c is not an alphabet.\n",ch);
    }
    return 0;
}