#include <stdio.h>
int main()
{
	const int AMOUNT=100;
	int price=0;
	printf("input price");
	scanf("%d",&price);
	int change=AMOUNT-price;
	printf("%d",change);
	return 0;
}