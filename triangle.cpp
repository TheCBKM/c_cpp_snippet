#include<stdio.h>
int main()
{
   printf("enter no. of lines\n\n");
  int z=1,n;
 scanf("%d",&n);

  for (int i=0; i<n-1; i++)
  {
    for (int j=n-1; j>i; j--)
    {
      printf(" "); 
    }
   printf("*");   
    if (i!=0)    {
      for (int k=1; k<=z; k++)
      {
        printf(" ");
      }
     printf("*");
      z+=2;
    }
  printf("\n"); 
}
  for (int i=0; i<=z+1; i++)
  {
   printf("*");
  }
printf("\n");
return 0;
}
