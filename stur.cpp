 #include <stdio.h>
#include <stdlib.h>

int main()
{
    struct emp
    {
        int eno;
        char ename[20];
        float esa;
    };
    struct emp e;
    scanf("%d",&e.eno);
    printf("%d",e.eno);
    printf("enrt name   ");
    fgets(e.ename,20,stdin);
    printf("%s",e.ename);
    scanf("%f",&e.esa);
    printf("%f",e.esa);

    return 0;
}
