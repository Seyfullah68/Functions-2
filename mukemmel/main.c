#include <stdio.h>
#include <stdlib.h>

void muk(int x)
{
    int sonuc=0;
    int i=1;
    while(i<x)
    {
        if(x%i==0)
        {
            sonuc=sonuc+i;
        }
        i++;
    }
    if(sonuc==x){
        printf("muk sayi");

    }
    else
    {
        printf("degil");
    }

}

int main()
{
    int a;
    printf("sayiyi gir\n");
    scanf("%d",&a);
    muk(a);
    return 0;
}
