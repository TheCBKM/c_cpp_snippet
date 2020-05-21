#include<stdio.h>
int main(){
	FILE *fp;
	fp=fopen("/home/the_prober/Desktop/welcome.txt","w");
	fprintf(fp,"welcome to data file handlin  g\n ");
	fclose(fp);
	return 0;
	} 

 









