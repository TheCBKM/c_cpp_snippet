#include <stdio.h>
#include <stdlib.h>
/*int main(void)
{
    printf("string: ");
    char x[10];
    scanf("%9s",x);
    char *s;
    int y = strtol(x, &s, 10);
    printf("String parsed as:\ninteger: %d\nremainder of the string: %s\n",y, s);
}*/
static  int arra[50],a=0;
void wow(){
  arra[a++]=2;
  arra[a++]=2;
  arra[a++]=2;
  arra[a++]=2;
  arra[a++]=12;
}
int main()
{

  arra[a++]=0;
  arra[a++]=1;
  arra[a++]=1;
  arra[a++]=1;
  arra[a++]=1;
wow();
for (int i = 0; i<=10;i++) {
  printf("%i\n",arra[i] );

}printf("%i\n",a );
return 0;
}
