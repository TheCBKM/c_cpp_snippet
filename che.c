#include<stdio.h>

void main(){
int a[50],n,k=1,m=10,l;
scanf("%d",&n);
l=n%m;
while(l!=0){k++;m*=10;l=n%m;}       
printf("\n%d",k)  ;                                                                                 


}
