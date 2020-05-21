#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
 int al=0,num=0,aln=0;
 char numa[20],ala[20], alnuma[20];
void search(char q[],int f)
{
  int k=1,c=1;
  for(int i=0;i<f;i++){
    if(isalpha(q[i]) != 0)
    k=0;
    else if(isdigit(q[i]) != 0)
    c=0;
  }
  for(int i=0;i<f;i++){
  if(k==0&&c==0){alnuma[aln++]=q[i];}
  if(k==0&&c==1){ala[al++]=q[i];}
  if(k==1&&c==0){numa[num++]=q[i];}
}
if(k==0&&c==0){alnuma[aln++]=' ';}
if(k==0&&c==1){ala[al++]=' ';}
if(k==1&&c==0){numa[num++]=' ';}
}
int main()
{
   int i,c,j=0,k=0,f;
   char a[50],a1[50],a2[50];
   printf("enter sen.");
   fgets(a,20,stdin);
   c=strlen(a);
   char *p;
   p = strtok (a," ,.-");
   for(i=0;i<c;i++)
   while (p != NULL)
  {
    f=strlen(p);
    search(p,f);
    p = strtok (NULL, " ,.-");
  }
  printf("Numeric values are:-");puts(numa);
  printf("\n");
  printf("AlphaNumeric values are:-" );
  puts(alnuma);
  printf("\n");
  printf("Alpaha values are:-");
    puts(ala);
  return 0;

}
