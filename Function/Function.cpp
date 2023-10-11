#include "Function.h"
int workingTime = 9;
int hourlyWage = 0;
int total = 0;
int Recursive(int  money)
{
	int total = 1072;
	//ゴール
	if (money >= workingTime)
	{
		return(0);
	}

	total *= money;

	printf("%d時間働いた一般的合計金額%d\n", money, total);
	//再起関数
	return (1072 + Recursive(money + 1));


}



int Recursive2(int  money)
{

	//ゴール
	if (money >= workingTime)
	{

		return(0);
	}


	if (money >= 2)
	{
		//再起関数




		hourlyWage = hourlyWage * 2 - 50;

		total += hourlyWage;
		printf("%d時間働いた再起敵合計金額%d\n", money, total);
		return (total, Recursive2(money + 1));
	}


	if (money == 1)
	{


		//再起関数

		; hourlyWage = 100;
		total += hourlyWage;
		printf("%d時間働いた再起敵合計金額%d\n", money, total);
		return (total + Recursive2(money + 1));
	}

	printf("%d時間働いた再起敵合計金額%d\n", money, total);
	return (Recursive2(money + 1));

}
