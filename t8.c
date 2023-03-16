#include <stdio.h>
int main()
{
int num =10;
char ch ='a';
int *Intptr= &num;
char *Chrptr= &ch; printf("Int address is %p\n", Intptr);
Intptr++;
printf("Int address is %p\n", Intptr); printf("Char address is %p\n", Chrptr);
Chrptr++;
printf("Char address is %p\n", Chrptr);
printf("sizeof thenum %d and char %d", sizeof(int), sizeof(char));
printf("sizeof num %d and char %d\n", sizeof (num), sizeof(ch)); printf("sizeofptr num %d and char %d ", sizeof(Intptr), sizeof(Chrptr));
return 0;
}