#include <stdio.h>

#define BIT_MASK(x) (0x01 << x)

int main ()
{
	int num, n;

	printf("Enter the number :\n\r");
	scanf("%d", &num);
	printf("Enter n, where nth bit will be cleared and set:\n\r");
	scanf("%d",&n);

	printf("number after setting %d bit : %d\n\r", n, (BIT_MASK(n) | num) );
	printf("number after clearing %d bit : %d\n\r", n, (~BIT_MASK(n) & num) );

	return 0;
}
