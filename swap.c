#include <stdio.h>
void main()
{
int a,b;
printf (" ENTER TWO NUMBERS TO SWAP: ");
scanf ("%d%d" , &a , &b);
b = a + b;
a = b - a;
b = b - a;
printf (" a = %d , b = %d " , a , b);
}

