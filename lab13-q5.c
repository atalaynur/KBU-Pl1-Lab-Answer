#include <stdio.h>
#include <ctype.h>

void count(char []);

int main(){

char sentence[100];
printf("enter a sentence: ");
fgets(sentence, sizeof(sentence), stdin);

count(sentence);

return 0;
}

void count(char sentence[]){
int space=0;
for (int i = 0; sentence[i] != '\0'; i++)
{
    if (isspace(sentence[i]))
    {
        space++;
    }
    
}

printf("there are %d words in this sentence", space);

}