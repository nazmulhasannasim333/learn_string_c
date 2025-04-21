#include <stdio.h>
#include <string.h>

int main()
{
    char s[10];
    // gets(s);
    fgets(s, 10, stdin);
    printf("%s", s);
    return 0;
}