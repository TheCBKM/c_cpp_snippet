#include<stdio.h>
int main()
{
  printf("enter ur ammount ");
float  a,c=0,b;
  scanf("%f",&a);
  b=a;
  if(a>=5000)
  {
    b=a-5000;
    if (b>=5000)
    {
      c=c+250;
    }
    else
    {
      c=c+(0.05*b);

    }
    b=a;
      if(b>=10000)
      {
        b=b-10000;

        if(b>=10000)
        {
          c=c+1000;
        }
        else
        {
          c=c+(b*0.1);

        }b=a;
        if(b>=20000)
        {
          b=b-20000;
          c=c+b*(0.2);
        }
      }
  }
  printf("%f\n",c);
}
