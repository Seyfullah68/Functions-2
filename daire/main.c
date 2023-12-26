#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

void daire(float yaricap)
{
    printf("alan: %f\n",pi*yaricap*yaricap);
    printf("cevre: %f",2*pi*yaricap);
}
int main()
{
    float r;
    printf("dairenin yarcapini giriniz\n");
    scanf("%f",&r);
    daire(r);
    return 0;
}
