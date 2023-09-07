#include <stdio.h>

int main() {
    int num, onum, rnum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    onum = num; 
    while (num > 0) {
        remainder = num % 10;
        rnum = rnum * 10 + remainder;
        num /= 10;
    }

    if (onum == rnum) {
        printf("%d is a palindrome number.\n", onum);
    } else {
        printf("%d is not a palindrome number.\n", onum);
    }

    return 0;
}
