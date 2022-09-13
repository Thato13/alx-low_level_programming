#include<unistd.h>

#ifndef main
#define main

int _putchar(char c)
{
return(write(1, &c, 1));
}

#endif
