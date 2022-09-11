#include<stdio.h>
#include<stdlib.h>

int main(void)
{
int number_1 = 0;
int number_2 = 1;

while(number_1 <= 8)
{

while(number_2 <= 9)
{
putchar(number_1 + '0');
putchar(number_2 + '0');

if(number_2 < 9)
{
putchar(',');
}
putchar(' ');
number_2++;
}
number_1++;
number_2 = number_1 + 1;
}
putchar('\n');
return(0);
}
