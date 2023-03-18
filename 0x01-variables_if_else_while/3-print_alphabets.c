#include<stdio.h>

/**
*print the alphabet in lowercase
*
*Return (0) to confirme the succes
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
