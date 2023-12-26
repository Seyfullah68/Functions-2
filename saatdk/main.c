#include <stdio.h>
#include <stdlib.h>

void cevir(int sn)
{
    int hr,mn,san,tut;
    hr=sn/3600;
    tut=sn%3600;
    mn=tut/60;
    san=tut%60;
    printf("%d:%d:%d",hr,mn,san);
}
int main()
{
    int x;
    printf("kac saniyeyse gir\n");
    scanf("%d",&x);
    cevir(x);

    return 0;
}
