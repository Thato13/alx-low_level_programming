#include<stdio.h>
#include<stdlib.h>

int main(void)
{
char letter = 'z';

while(letter >='a')
{
putchar(letter);
letter--;
}
putchar('\n');
return(0);
}
