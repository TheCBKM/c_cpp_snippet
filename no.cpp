#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sen[20],sen1[20];
    int i,j,k;
    printf("enter sentence\n");
    fgets(sen,20,stdin);
    for(i=0;sen[i]!='\0';i++);
    i--;
    for(j=0;sen[j]!='\0';j++)
       {
           sen1[j]=sen[i];
            i--;
        }

    sen1[j]='\0';

    for(i=0;sen1[i]!='\0';i++)
    {
        if(sen1[i+1]==' '|| sen1[i+1]=='\0')
        {
            for(k=i;sen1[k]!=' '&&sen1[k]>=0;k--)
            {
                printf("%c",sen1[k]);
            }
            printf(" ");
        }
    }

    return 0;
}
