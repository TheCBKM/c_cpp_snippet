#include<stdio.h>
void area(float *p,float *q,float *r)
{
  *r=((*p)*(*q)/2);
}
void main()
{
  float h,b,a;
  printf("Enter height: ");
  scanf("%f",&h);
  printf("Enter base: ");
  scanf("%f",&b);
  area(&h,&b,&a);
  printf("area: %f",a);
}
