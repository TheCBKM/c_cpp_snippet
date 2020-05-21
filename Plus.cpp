#include <stdio.h>
#include<string.h>
#include<math.h>
int sum=0;
void Sum(char *p) {
    int c=0,o=1,t;
    int l=strlen(p);
    int f=l;
    for(int i=0; i<l; i++) {
        f--;
        o=1;
        t=(*(p+i))-48;
        for(int j=0; j<f; j++) {
            o*=10;
        }
        c+=o*t;
    }
    sum+=c;
}
int main() {
    char p[10],n[20];
    printf("Enter the String positive no. only and '+' to end - ");
    fgets(n,20,stdin);
    int l=strlen(n);
    int j=0;
    for(int i=0; i<l; i++) {
        if(n[i]=='+') {
            p[j]='\0';
            Sum(p);
            j=-1;
        }
        p[j++]=n[i];
    }
    printf(" \nthe Sum is =%d\n",sum);
    return 0;

}
