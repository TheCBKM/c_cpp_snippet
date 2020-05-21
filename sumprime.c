#include<stdio.h>
int prime(int j) {
    for(int i=2; i<j; i++) {
        if(j%i==0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    printf("\n enter the no.\n");
    int n,k,i,j;
    scanf("%d",&n);
    k=n;
    for( i=n-1; i>1; i--)
    
        if(prime(i))
        
            for( j=i-1; j>1; j--)
            
                if(prime(j))
                
                    if(i+j==k)
                    {
                        goto a;
                    }
                
            
        
    
    printf("\n there is no such sum of primeS\n");
    return 0;
a:
    printf("\n  %d is sum of %d+%d \n",k,i,j);
    return 0;
}
