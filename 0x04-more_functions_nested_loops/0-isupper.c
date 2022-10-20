#include "main.h"

int _isupper(int c)
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (c == str[i])
		{
			return (1);
		}
		return (0);
	}
}
