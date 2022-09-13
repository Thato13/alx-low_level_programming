#include "main.h"

int main(void)
{
int r;
r = _islower('A');
_putchar(r + '0');
r = _islower('a');
_putchar(r + '0');
r = _islower(98);
_putchar(r + '0');
_putchar('\n');
return(0);
}
