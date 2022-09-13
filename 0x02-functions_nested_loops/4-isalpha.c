#include "main.h"

int main(void)
{
int r;
r = _isalpha('K');
_putchar(r + '0');
r = _isalpha('z');
_putchar(r + '0');
r = _isalpha(109);
_putchar(r + '0');
r = _isalpha('}');
_putchar(r +'0');
_putchar('\n');
return(0);
}
