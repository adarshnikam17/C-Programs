#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("Character is Vowel.");
    }
    else{
        printf("it is consonent.");
    }
    return 0;
}