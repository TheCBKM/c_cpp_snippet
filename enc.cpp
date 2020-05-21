#include <stdio.h>
int main()
{
    int c;
    printf("Enter a character: ");

    // Reads character input from the user
    scanf("%d", &c);

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
    return 0;
}
