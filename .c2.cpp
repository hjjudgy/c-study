#include <stdio.h>
int main()
{
	int price= 0;
	printf("请输入金额:");
	scanf("%d",&price);
	int change= 100-price;
	printf("找零:%d",change);
	return 0;
}
