//Playing with Characters
//https://leetcode.com/problems/to-lower-case/submissions/2199894457/
#include <stdio.h>

int main() {
    char ch;
    char s[100];
    char str[100];

    scanf("%c", &ch);
    scanf("%s", s);
    scanf(" %[^\n]", str);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", str);

    return 0;
}
