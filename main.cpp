#include"Function/Function.h"

int main()
{
	
	//時間
	int money = 0;

	
	int result = Recursive(money);
	int result2 = Recursive2(money);

	if (result >= result2)
	{
		printf("時給のほうが高い\n");

	}

	

	printf("時給%d\n", result);
	printf("再起時給%d\n", result2);

	return 0;
}