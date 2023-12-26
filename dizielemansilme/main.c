#include <stdio.h>
#include <stdlib.h>

void sil(int seri[],int a,int b)
{
    int son[a-1];
    int i=0;
    while(i!=b)
    {
        son[i]=seri[i];
        i++;
    }
    while(b<a)
    {
        son[b]=seri[b+1];
        b++;
    }
    for(int j=0;j<a-1;j++)
    {
        printf("%3d",son[j]);
    }
}

int main()
{
    int n,x;
    printf("kac rakam ve kacinci silinecek\n");
    scanf("%d%d",&n,&x);
    x=x-1;
    int dizi[n];
    srand(time(0));
    printf("dizimiz:\n");
    for(int i=0;i<n;i++)
    {
        dizi[i]=rand()%10;
        printf("%3d",dizi[i]);
    }
    printf("\n");
    sil(dizi,n,x);
    return 0;
}
