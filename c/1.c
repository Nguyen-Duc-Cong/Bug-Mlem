#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int x, S = 0;
	do
	{
		scanf("%d", &x);
		if (x != 0)
			S = S + x;
	} while (x != 0);
	printf("Sum: %f", S);//-----------------------------------------------
	getch();
	return 0;
}
