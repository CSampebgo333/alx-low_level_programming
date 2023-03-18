#include <stdio.h>

/**
*Print the alphabec in lowercase
*At 02h15 AM the 18/03/2023
*Followed by new line
*/
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar("\n");
	return (0);
}
