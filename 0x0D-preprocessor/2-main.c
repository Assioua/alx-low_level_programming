#include "_putchar.c"

/**
 * main - print file of execution
 */

int main(void)
{
	char arr[] = __FILE__;
	int i;

	for (i = 0 ; arr[i] != '\0' ; i++)
	{
		_putchar(arr[i]);
	}
	
	_putchar('\n');
	return (0);	
}
