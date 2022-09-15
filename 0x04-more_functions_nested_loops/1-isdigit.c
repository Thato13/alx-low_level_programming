#include "main.h"
/**
 *main - check code
 *
 *return 0 evrytime code execute
 */
int main(void)
{
char c;

c = '0';
printf("%c: %d\n", c, _isdigit(c));
c = 'a';
printf("%c: %d\n", c, _isdigit(c));
return (0);
}
