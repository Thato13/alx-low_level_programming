#include<unistd.h>
#ifndef main

int _putchar(char c)
{
return(write(1, &c, 1));
}

#endif

