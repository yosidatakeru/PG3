#include"PG3_02_02/Min.h"
#include<stdio.h>
int main()
{ 
	Min<int>b1(10, 20);
	Min<float>b2(1.2, 3.4);
	Min<double>b3(10.3, 10.4);

	printf("b1=%d\n", b1.add());
	printf("b2=%f\n", b2.add());
	printf("b2=%f\n", b3.add());
	return 0;
}
