#include<stdio.h>
int main(){
	int m=21,n=0,c=0,p=0;
	char k;
	while(m!=1){
		printf("\nEnter ur choice(1,2,3,4,5,6)\n");
		scanf("%d",&n);
		m=m-n;
		if(n>6){
			printf("\ninvalid selection\n");
			break;
			}
		if(p==1){for(int i=1;i<7;i++){if((m-i)==8){c=i;break;}}p++;}//Important
		else{
		c=7-n;
		p++;
		}
		
		getchar();
		
		m=m-c;
		printf("\ncomputer choses:- %d \n",c);
		printf("\n match sticks left:-%d\n",m);
	}
	printf("\nHA HA HA computer wins as always\a");
	getchar();
	return 0; }	
















		
