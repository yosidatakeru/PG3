#include"Function.h"

void DispResut(int* s)
{
	printf("%d�b��Ɏ��s\n",*s);
}

void setTimeout(PFunc p, int second)
{
	Sleep(second * 1000);
	p(&second);
}

int division(int dice)
{
	std::function<int(int)>fx = [](int dice)
	{
		return dice % 2;
	};
	return fx(dice);
}
