#include <stdio.h>
void main()
{
int NUM , REV = 0;
printf ("Enter a Number: ");
scanf ("%d" , &NUM);
while (NUM != 0)
 {
   REV = REV * 10;
   REV = REV + NUM % 10;
   NUM = NUM / 10;
 }
  printf ("The Result Is: %d" , REV);
}
