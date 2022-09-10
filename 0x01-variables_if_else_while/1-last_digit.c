#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

char last_digit[10];
itoa(n,last_digit,10);
if(last_digit[strlen(last_digit)-1] > 5)
{
printf("Last digit of %d is %c and is greater than 5\n",n,last_digit[strlen(last_digit)-1]);
}else if(last_digit[strlen(last_digit)-1] == 5)
{
printf("Last digit of %d is %c and is 0\n",n,last_digit[strlen(last_digit)-1]);
}else if(last_digit[strlen(last_digit)-1] < 6 && last_digit[strlen(last_digit)-1] != 0)
{
printf("Last digit of %d is %c and is less than 6 and not 0\n",n,last_digit[strlen(last_digit)-1]);
}
return(0);
}
