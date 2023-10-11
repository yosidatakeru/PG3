#include"Function/Function.h"

int main()
{
	

	int hoursWorked = 0;
	
	int result = Recursive(hoursWorked);
	
	int result2 = Recursive2(hoursWorked);

	printf("時給%d\n", result);
	
	printf("再起時給%d\n", result2);
	
	if (result >= result2)
	{
		printf("時給のほうが高い\n");
	}
	else
	{
		printf("再帰的時給のほうが高い\n");
	}
	return 0;
}