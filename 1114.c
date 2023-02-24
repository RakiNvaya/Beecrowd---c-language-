#include<stdio.h>
int main()
{
    int a;
    while(1)
    {
        scanf("%d",&a);

        int d=a%100;
        if(d==2)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}
