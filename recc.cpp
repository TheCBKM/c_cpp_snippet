#include <stdio.h>
long sum(long sumt)
{
  long value=0;
  int v=0;
  printf("enter 1 to add more value and 2 to get sum\n");
  scanf("%d",&v );
  if(v==1)
  {
    printf("enter the value\n");
    scanf("%ld",&value );
    sumt+=value;
    sum(sumt);
  }
  else
  return sumt;
}
int main()
{
  long sumt;
   sumt=sum(0);
  printf("the total value is:%ld\n",sumt );
  return 0;
}
