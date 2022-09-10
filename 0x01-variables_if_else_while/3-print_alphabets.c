#include<stdio.h>
#include<stdlib.h>

int main(void)
{
char small_L = 'a';
char capital_L = 'A';

while(small_L <= 'z')
{
putchar(small_L);
small_L++;
}
while(capital_L <= 'Z')
{
putchar(capital_L);
capital_L++;
}
putchar('\n');
return(0);
}
