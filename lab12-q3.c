#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define size 1000

int main(){
char sentence[size];
int vowels = 0, consonants = 0, digits = 0, spaces = 0, other = 0;

printf("enter sentence:");
fgets(sentence, sizeof(sentence), stdin);

for (int i = 0; sentence[i] != '\0'; i++)
{


    if (isalpha(sentence[i]))
    {
        if (sentence[i]=='a' || sentence[i] =='e' || sentence[i] =='u'||sentence[i] =='i'||sentence[i] =='u')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
        
    }
    
    if (isdigit(sentence[i]))
    {
        digits++;
    }
    else if (isspace(sentence[i]))
    {
        spaces++;

    }


}

printf("\nVowels: %d\nConsonants: %d\nDigits: %d\nWhite spaces: %d", vowels,consonants,digits,spaces);

}