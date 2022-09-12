#include<stdio.h>
#include<stdlib.h>

int main(void)
{
int number_1 = 1;
int number_2 = 2;
int number_0 = 0;
while(number_0 <= 7)
{
while(number_1 <= 8)
{

while(number_2 <= 9)
{
putchar(number_0 + '0');
putchar(number_1 + '0');
putchar(number_2 + '0');

if(number_0 < 7)
{
putchar(',');
}
putchar(' ');
number_2++;
}
number_1++;
number_2 = number_1 + 1;
}
number_1 = number_0 + 1;
number_0++;
}
putchar('\n');
return(0);
}
