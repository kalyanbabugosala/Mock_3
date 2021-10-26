#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size


void search_word1(char *str,char *word);

int main()
{
    char str[MAX_SIZE], word[MAX_SIZE];
    //void (*funptr)(char,char);
    
    //Input string and word from user 
    printf("Enter any string: ");
    //fgets(str,25,stdin);
    gets(str);
    printf("Enter word to be searched: ");
    //fgets(word,25,stdin);
    gets(word);
    
    //funptr = search_word1;
    //funptr(str,word);
     search_word1(str,word);
    
    return 0;
}
