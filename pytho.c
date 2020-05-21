#include<stdio.h>
int main()
	{ 
	int a,e,b;
	printf("Enter Start & End Range");
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++)
		for (int j=a;j<=b;j++)
			for(int k=a;k<=b;k++)
				if(((i*i)+(j*j))==(k*k))	
				printf("%d , %d , %d \n",i,j,k);
	scanf("%d",&e);
	return 0;
	}		
