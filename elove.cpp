#include<stdio.h>
#include<string.h>
int main()
{
    char c[80],d[80],e[80];
    int j=0,l=0,i=0,ct=0,k,f=0;
    printf("enter the string    ");
    fgets (c, 80, stdin);
   	
    for(l=0; c[l]!='\0'; l++);
	i=l-2;
      	
    for(j=0;c[j]!='\0';j++)
	e[j]=c[i--];
    strcpy(c,e);		
   j=l-1;
    for(i=0; c[i]!='\0'; i++)
    {
        if(c[i]==' ' )
        {
            k=ct;
            for(; f<=ct; f++)
            {	//printf(" %i-%i ",j,k);
                d[j]=c[k];
                k--;j--;

            }

        }
        ct++;
	  }d[j]=' ';j=0;
	for(;f<l-1;f++){//printf(" %i-%i ",j,f);
	d[j++]=c[f];}


    for(i=0;i<l;i++)
    	printf("%c",d[i]);
    printf("\n");	
    return 0;
}
