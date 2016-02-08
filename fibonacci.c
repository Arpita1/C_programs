#include <stdio.h>
void main()
{
int NUM , a , b , SUM;
printf ("Enter a Number Range: ");
scanf ("%d" , &NUM);
a = 0;
b = 1;
printf ("Fibonacci Series");
while ( a <= NUM )
 {
  printf ( "%d\t" , a);
  SUM = a + b;
  a = b;
  b = SUM;
 }
}
