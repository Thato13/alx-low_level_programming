#include<stdio.h>
#include<stdlib.h>

int main(void)
{
char letter = 'a';

while(letter <= 'z')
{
if(letter == 'q' || letter == 'e')
{
letter++;
}else
{
putchar(letter);
letter++;
}
}
putchar('\n');
return(0);
}
