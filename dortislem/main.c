#include <stdio.h>
#include <stdlib.h>

int topla(int a,int b)
{
    return a+b;
}
int cikar(int a,int b)
{
    return a-b;
}
float bol(float a,float b)
{
    return a/b;
}
int carp(int a,int b)
{
    return a*b;
}
int main()
{
    int x,y;
    char islem;
    printf("yapmak istedigin islem nedir + - * /\n");
    scanf("%c",&islem);
    printf("lutfen sayilari giriniz\n");
    scanf("%d%d",&x,&y);


    switch (islem)
    {
    case '+':
        {

            printf("sonuc %d",topla(x,y));
            break;
        }
    case '-':
        {
            printf("sonuc %d",cikar(x,y));
            break;
        }
    case '/':
        {

            printf("sonuc %f",bol((float)x,(float)y));
            break;
        }
    case '*':
        {
            printf("sonuc %d",carp(x,y));
            break;
        }
    default:
        {
            printf("yanlis islem");
            break;
        }
    }
    return 0;
}
