#include <stdio.h>
#include <ctype.h>
int main()
{
    char word = 'a';
    scanf("%c", &word);
    char WORD = toupper(word);
    printf("%c\n", WORD);

    return 0;
}
