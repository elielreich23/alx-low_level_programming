#include "main.h"
/**
 * jack_bauer - prints each minute of the day
 *
 * Return:returns 0
*/
void jack_bauer(void)
{
	int min, h;

	for (h = 0; h <= 23; h++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar(10);
		}
	}
}
