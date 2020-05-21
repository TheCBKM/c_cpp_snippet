#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,i,a,j;
    char name[40];
    printf("enter name to get reverse\n");
    fgets(name,40,stdin);
    for(i=0; name[i]!=0; i++)
    j=i-1;
    for( i=0; name[i]!=0; i++)
    {
      if(j==0)
      goto c;
      if(name[i]!=name[j])
        {
            goto a;
        }
        j--;

    }
    c:
    printf("\nname is  palindrome\n");
    goto b;
    a:
    printf("\nname is not palindrome\n");
    b:
    return 0;
}
