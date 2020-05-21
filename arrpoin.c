#include<stdio.h>
 int main()

{char *s="good morning";
char *q;
q=s;
for(int i=0;i<12;i++)
printf("%c",*(q+i));
  return 0;
}
