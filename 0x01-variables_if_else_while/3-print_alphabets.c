#include<stdio.h>

/**
*print the alphabet in lowercase
*
*At 02h45 to 18/03/2023
*/
int main(void)
{
	char alp_l_u[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	
	for (i = 0; i < 52; i++)
	{
		putchar(alp_l_u[i]);
	}
	putchar('\n');
	return (0);
}
