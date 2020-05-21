#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>


int main()
{
   int i,c,j=0,k=0;
   char a[20],a1[20],a2[20];
   printf("enter sen.");
   fgets(a,20,stdin);
   c=strlen(a);

   for(i=0;i<c;i++)
   { if(a[i]==' ')
   {
     if (isalpha(a[i+1]))
     {
       a1[k]=' ';
       k++;
     }
     if (isdigit(a[i+1]))
     {
       a1[j]=' ';
       j++;
     }
   }
       if(isupper(a[i])||islower(a[i]))
       {
           a1[j]=a[i];
           j++;
       }
       else if(isdigit(a[i]))
       {
           a2[k]=a[i];
           k++;
       }

   }

    a1[j]='\0';
    a2[k]='\0';


   puts(a1);
   printf("\n");
   puts(a2);
    return 0;
}
