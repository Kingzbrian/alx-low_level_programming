#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int randpass;
	int count = 0;
	int tt = 2772;

	srand(time(NULL));
	while (tt > 122)
	{
		randpass = (rand() % 125) + 1;
		printf("%c", randpass);
		tt -= randpass;
		count++;
	}
	printf("%c", tt);
	return (0);
}
