#include<stdio.h>
int main()
{
    char a[15],b[15],c[15];
    scanf("%s%s%s",&a,&b,&c);
    if(a=='vertebrado' && b=='ave' && c=='carnivoro')
    {
        printf("aguia");
    }
    if(a=='vertebrado' && b=='ave' && c=='onivoro')
    {
        printf("pomba");
    }
    if(a=='vertebrado' && b=='mamifero' && c=='onivoro')
    {
        printf("homem");
    }
    if(a=='vertebrado' && b=='mamifero' && c=='herbivoro')
    {
        printf("vaca");
    }
    if(a=='invertebrado' && b=='inseto' && c=='hematofago')
    {
        printf("pulga");
    }
     if(a=='invertebrado' && b=='inseto' && c=='herbivoro')
    {
        printf("lagarta");
    }

    if(a=='invertebrado' && b=='anelideo' && c=='hematofago')
    {
        printf("sanguessuga");
    }

    if(a=='invertebrado' && b=='anelideo' && c=='onivoro')
    {
        printf("minhoca");
    }

   return 0;


    }
