#include<stdio.h>

//時給
int Recursive(int n)
{

	//ゴール
	if (n >= 7)
	{
		return(0);
	}



	//再起関数
	return(1072 + Recursive(n + 1));


}



int Recursive2(int g)
{

	//ゴール
	if (g >= 7)
	{
		return(0);
	}



	//再起関数
	return(100 + Recursive2(g + 1) * 2 - 50);


}

int main()
{
	//時間
	int n = 0;
	int g = 0;
	int h = 0;
	int result;
	int result2;
	result = Recursive(n);
	result2 = Recursive2(g);

	if (result >= result2)
	{
		printf("時給のほうが高い\n");

	}

	if (result <= result2)
	{
		//再起処理
		printf("再起処理価格\n");
	}

	printf("時給%d\n", result);
	printf("再起時給%d\n", result2);

	return 0;
