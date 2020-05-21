#include<stdio.h>
char* roman(long x) {
    printf("Enter the number :- ");
    int v,ct=0,l=0;
    char R[100];
    scanf("%ld",&x);
    while(x!=0) {

        if(x>=1&&x<4) {
            v=1;
            R[ct++]='I';
            l++;
        }
        else if(x>=4&&x<5) {
            v=4;
            R[ct++]='I';
            l++;
            R[ct++]='V';
            l++;
        }
        else if(x>=5&&x<9) {
            v=5;
            R[ct++]='V';
            l++;
        }
        else if(x>=9&&x<10) {
            v=9;
            R[ct++]='I';
            l++;
            R[ct++]='X';
            l++;
        }
        else if(x>=10&&x<40) {
            v=10;
            R[ct++]='X';
            l++;
        }
        else if(x>=40&&x<50) {
            v=40;
            R[ct++]='X';
            l++;
            R[ct++]='L';
            l++;
        }
        else if(x>=50&&x<90) {
            v=50;
            R[ct++]='L';
            l++;
        }
        else if(x>=90&&x<100) {
            v=90;
            R[ct++]='X';
            l++;
            R[ct++]='C';
            l++;

        }
        else if(x>=100&&x<400) {
            v=100;
            R[ct++]='C';
            l++;
        }
        else if(x>=400&&x<500) {
            v=400;
            R[ct++]='C';
            l++;
            R[ct++]='D';
            l++;
        }
        else if(x>=500&&x<900) {
            v=500;
            R[ct++]='D';
            l++;
        }
        else if(x>=900&&x<1000) {
            v=900;
            R[ct++]='C';
            l++;
            R[ct++]='M';
            l++;
        }
        else if(x>=1000&&x<100000) {
            v=1000;
            R[ct++]='M';
            l++;
        }
        else if(x>=100000){
          printf("enter the value below 1 lakhs(100000)");
          break;
        }
        x=x-v;
    }
    //for(int i=0; i<l; i++)
    //    printf("%c",R[i]);
  //  printf("\n");
    return R;
}
