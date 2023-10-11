#include<stdio.h>

//時給
int workingTime = 9;
int Recursive(int  money)
{
	int total = 1072;
	//ゴール
	if (money >= workingTime)
	{
		return(0);
	}

	total*= money;
	
	printf("%d時間働いた一般的合計金額%d\n",money ,total);
	//再起関数
	return (1072+ Recursive(money + 1));


}


int hourlyWage = 0;
int total = 0;
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
		return (total,Recursive2(money + 1) );
	}
		
	
	if (money == 1)
	{
		
		
		//再起関数
		
		; hourlyWage = 100;
		total += hourlyWage;
		printf("%d時間働いた再起敵合計金額%d\n", money, total);
		return (total +Recursive2(money + 1));
	}

	printf("%d時間働いた再起敵合計金額%d\n", money, total);
	return (Recursive2(money + 1));

}

int main()
{
	//時間
	int money = 0;

	int result;
	int result2;
	result = Recursive(money);
	result2 = Recursive2(money);

	if (result >= result2)
	{
		printf("時給のほうが高い\n");

	}

	

	printf("時給%d\n", result);
	printf("再起時給%d\n", result2);

	return 0;
}