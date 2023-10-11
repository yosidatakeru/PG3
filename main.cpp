#include<stdio.h>

//時給
int Recursive(int  money)
{

	//ゴール
	if (money >= 8)
	{
		return(0);
	}



	//再起関数
	return(1072 + Recursive(money + 1));


}


int hourlyWage = 0;
int total = 0;
int Recursive2(int  money)
{
	
	//ゴール
	if (money >= 8)
	{

		return(0);
	}


	if (money >= 1)
	{
		//再起関数
	
	
		
	
		hourlyWage = hourlyWage * 2 - 50;
	
		total += hourlyWage;
	
		return (total,Recursive2(money + 1) );
	}
		
	
	if (money == 0)
	{
		
		
		//再起関数
		
		; hourlyWage = 100;
		total += hourlyWage;
		
		return (total +Recursive2(money + 1));
	}

	


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

	if (result <= result2)
	{
		//再起処理
		printf("再起処理価格高い\n");
		printf("再起処理価格のほうが儲かる\n");
	}

	printf("時給%d\n", result);
	printf("再起時給%d\n", result2);

	return 0;
}