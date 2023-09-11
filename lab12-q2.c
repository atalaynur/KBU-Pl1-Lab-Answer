#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1),stdin); 

    for (i = 0; i < strlen(str1); i++) {
        if (isalpha(str1[i])) {
            str2[j++] = str1[i];
        }
    }

    str2[j] = '\0';

    printf("Result: %s\n", str2);

    return 0;
}
