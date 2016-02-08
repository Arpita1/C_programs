#include <stdio.h>
void main()
{
int NUM , a , b , SUM;
printf ("Enter a number range upto which you want the series: ");
scanf ("%d" , &NUM);
a = 0;
:Xb = 1;
printf ("Fibonacci Series");
while ( a <= NUM )
 {
  printf ( "%d\t" , a);
  SUM = a + b;
  a = b;
  b = SUM;
 }
}
