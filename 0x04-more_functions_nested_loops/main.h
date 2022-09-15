#ifndef MAIN_H
#define MAIN_H
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void jack_bauer(void)
{
struct tm* current_time;
time_t s;
s = time(NULL);
current_time = localtime(&s);
current_time -> tm_hour = 0;
current_time -> tm_min = 0;
while(current_time -> tm_hour <= 23)
{
while(current_time ->tm_min <= 59)
{
printf("%2d:%2d\n",current_time -> tm_hour,current_time -> tm_min);
current_time -> tm_min++;
}
current_time -> tm_min = 0;
current_time -> tm_hour++;
}
}

void times_table(void)
{
int row = 0;
int col = 0;
while(row <= 9)
{
while(col <= 9)
{
printf("%d",row * col);
if(col < 9)
{
printf(",  ");
}
col++;
}
col = 0;
row++;
printf("\n");
}

}

void print_times_table(int n)
{
int row = 0;
int col = 0;
if(n > 15 || n < 0)
{
return;
}else
{
while(row <= n)
{
while(col <= n)
{
printf("%d",row * col);
if(col < n)
{
printf(";  ");
}
col++;
}
printf("\n");
col = 0;
row++;
}
}
}

void sum_of_multiples(void)
{
int check = 0;
int ref = 1023;
while(ref > 5)
{
if(ref % 3 == 0 || ref % 5 == 0)
{
check = check + ref;
}
ref--;
}
printf("The sum of multiples of 3 or 5 below 1024 is : %d",check);
}

int fibanacci_numbers(int n)
{
if(n <= 1)
{
return n;
}
return fibanacci_numbers(n -1) + fibanacci_numbers(n - 2);
}

void fib_display(void)
{
int start = 2; 
int max = 50;

while(start <= max)
{
printf("%d",fibanacci_numbers(start));
if(start < max)
{
printf(";  ");
}
start++;
}
printf("\n");

}
int add(int n, int c)
{

return n + c;
}

int mul(int a, int c)
{
return a * c;
}
void print_to_98(int n)
{
if(n<=98)
{
while(n <= 98)
{
printf("%d",n);
if(n<98)
{
printf(";  ");
}
n++;
}
printf("\n");
}else if(n > 98)
{
while(n>=98)
{
printf("%d",n);
if(n>98)
{
printf(";  ");
}
n--;
}
printf("\n");
}
}


int _isalpha(char c)
{
if(c <= 122 && c >= 65)
{
printf("is alphabet");
return 1;
}
return(0);
}
int _isdigit(int c)
{
if(c <= '9' && c>= '0')
{
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

void print_numbers(void)
{
char number = '0';
while(number <= '9')
{
_putchar(number);
number++;
}
_putchar('\n');
}

void print_most_numbers(void)
{
int number = '0';
while(number <= '9')
{
if(number == '4' || number == '2')
{
number++;
}
_putchar(number);
number++;
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
int _isupper(int c)
{
if(c <= 90 && c>= 65)
{
return 1;
}
return(0);
}



#endif

