#include<stdio.h>
int main(){
	FILE *fp;
	char c;
	fp =fopen("/home/the_prober/Desktop/welcome.txt","r");
	if(fp==NULL){
		printf("file noe exist");
	}
	else{
		while(c!=EOF){
			c=getc(fp);
			putchar(c);
			}
		fclose(fp);
	}
	return 0;
	}						

