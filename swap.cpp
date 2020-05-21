#include"roman.h"
#include<string.h>
#include<stdio.h>
int main()
{
  long x;
  printf("enter the number");
scanf("%ld",&x);
 char A[100];
int l=roman(x,A);
for(int i=0; i<l; i++)
printf("%c",A[i]);
printf("\n");
//roman();
return 0;
}
