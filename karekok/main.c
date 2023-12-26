#include <stdio.h>
#include <stdlib.h>

int karekok(int x)
{
    int y=x/2;
    for(int j=0;j<50;j++)
    {
        y=((y*2)+x)/(2*y);
    }
    return y;
}

int main()
{
    int sayi;
    printf("karekoku alinacak sayiyi giriniz\n");
    scanf("%d",&sayi);
    printf("sonuc: %d",karekok(sayi));
    return 0;
}
