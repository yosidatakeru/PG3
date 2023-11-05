#include"PG3_02_02/Min.h"
#include<stdio.h>
int main()
{ 
	Min<int>b1(10, 20);
	Min<float>b2(1.2, 3.4);
	
	printf("b1=%d\n", b1.Size());
	printf("b2=%f\n", b2.Size());
	return 0;
}
