#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int c;
    char a[20];
    srand(time(NULL));
    printf("Enter a string ");
    fgets(a,20,stdin);
    c = rand() % (50);
    
}
