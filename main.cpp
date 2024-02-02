#include"Min.h"
#include<stdio.h>
int main()
{ 
	Min<int,int>comperVal1(10, 20);
	Min<int,float>comperVal2(12, 3.4f);
	Min<int,double>comperVal3(10.8, 10.4);
	Min<float, float>comperVal4(21.0f, 15.0f);
	Min<float, double>comperVal5(23.0f, 57.0);
	Min<double, double>comperVal6(26.0, 63.0);

	printf("b1=%d\n", comperVal1.comparison());
	printf("b2=%d\n", comperVal2.comparison());
	printf("b2=%d\n", comperVal3.comparison());
	printf("b4=%f\n", comperVal4.comparison());
	printf("b5=%f\n", comperVal5.comparison());
	printf("b6=%f\n", comperVal6.comparison());
	return 0;
}
