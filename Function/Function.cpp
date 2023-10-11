#include "Function.h"
int workingTime = 9;
int workingHours = 0;
int total = 0;
int Recursive(int  hoursWorked)
{
	int total = 1072;
	//ゴール
	if (hoursWorked >= workingTime)
	{
		return(0);
	}

	total *= hoursWorked;

	printf("%d時間働いた一般的合計金額%d円\n", hoursWorked, total);
	//再起関数
	return (1072 + Recursive(hoursWorked + 1));


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




		workingHours = workingHours * 2 - 50;

		total += workingHours;
		printf("%d時間働いた再起敵合計金額%d円\n", money, total);
		return (total, Recursive2(money + 1));
	}


	if (money == 1)
	{


		//再起関数

		; workingHours = 100;
		total += workingHours;
		printf("%d時間働いた再起敵合計金額%d円\n", money, total);
		return (total + Recursive2(money + 1));
	}

	printf("%d時間働いた再起敵合計金額%d円\n", money, total);
	return (Recursive2(money + 1));

}
