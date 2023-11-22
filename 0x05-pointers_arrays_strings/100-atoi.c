#include "main.h"

int _atoi(char *s)
{
	int num = 0, sign = 1, i;

	if (s == NULL)
		return (0);
	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == ' ' || s[i] == '+')
			continue;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			if (num > INT_MAX)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
		}
		else if (num > 0)
			break;
	}
	return (num * sign);
}
