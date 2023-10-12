#include"Function.h"

void DispResut(int* s)
{
	printf("%dïbå„Ç…é¿çs\n",*s);
}

void setTimeout(PFunc p, int second)
{
	Sleep(second * 1000);
	p(&second);
}
