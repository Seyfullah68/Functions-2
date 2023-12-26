#include <stdio.h>
#include <stdlib.h>

void fibonacci(int x)
{
    int ilk=0;
    int ikinci=1;
    int sonraki;
    for(int i=0;i<x;i++)
    {
       if(i<=1)
       {
           sonraki=1;
       }
       else
       {
           sonraki=ilk+ikinci;
           ilk=ikinci;
           ikinci=sonraki;
       }
       printf("%4d",sonraki);
    }
}
int main()
{
    int a;
    printf("sayi giriniz\n");
    scanf("%d",&a);
    fibonacci(a);
    return 0;
}
