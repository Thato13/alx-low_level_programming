#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#ifndef main

int _isalpha(char c)
{
if(c <= 122 && c >= 65)
{
printf("is alphabet");
return 1;
}
return(0);
}

int print_sign(int n)
{
if(n > 0)
{
printf("+");
return 1;
}else if(n == 0)
{
printf("0");
return 0;
}else
printf("-");
return -1;
}

int _abs(int n)
{
if(n<0)
{
return -(n);
}
return n;
}
int _putchar(char c)
{
return(write(1, &c, 1));
}

int print_last_digit(int n)
{

if(n>=0)
{
_putchar((n % 10) + '0');
}else if(n < 0)
{
_putchar((-(n) % 10) + '0');
return (-(n) % 10);
}
return(n % 10); 
}


void print_alphabet(void)
{
char alphabet = 'a';
while(alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
}

void print_alphabet_x10(void)
{
char alphabet = 'a';
int n = 0;
while(n <= 9)
{
while(alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
n++;
alphabet = 'a';
}

}

int _islower(char c)
{
int checker = c;

if(checker <= 122 && checker >= 97)
{
printf("is lower");
return 1;

}


return(0);
}
#endif

