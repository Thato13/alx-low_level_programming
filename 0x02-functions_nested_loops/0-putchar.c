#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "main.h"

int main(void)
{
char c[] = "_putchar";
int n = strlen(c);
int i =0;
while(i <= n)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return(0);
}
