#include<stdio.h>
int main()
{
    int n;
    printf("how many no. you want\n");
    scanf("%d",&n);
    int a[100],i,s;
    printf("enter %d no.",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter no. to search\n");
    scanf("%d",&s);
    int m,k,f=a[0],ctr=0;
    m=s-f;
    if(m<0) {
        m=-m;
    }
    for(i=1; i<n; i++) {
        k=s-a[i];
        if(k==0||m==0) {
            ctr=i;
            break;
        }
        else if(k>0) {
            if(k<m) {
                m=k;
                ctr=i;
            }
        }
        else if(k<0) {
            k=-k;
            if(k<m) {
                m=k;
                ctr=i;
            }
        }
    }
    printf("%d is at position %d\n",a[ctr],ctr+1);
    return 0;
}
