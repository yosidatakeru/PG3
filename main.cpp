#include<stdio.h>
#include<list>
#include<iostream>

using namespace std;
int main()
{
	std::list<const char*> yamanoteseStation
	{
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome",
		"Sugamo","Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
		"Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho","Shimbashi","Yurakucyo"
	};

	cout << "山手線の全駅" << "\n";
	cout << "1970年、2019年、2022年の一覧を表示します" << "\n";
	cout << "どの年を表示しますか" << "\n";

	//入力
	int selectYear = 0;
	cin >> selectYear;

	if (selectYear == 1970)
	{
		cout << "1970年の駅一覧を表示します" << "\n";
	}

	if (selectYear == 2019)
	{
		cout << "2019年の駅一覧を表示します" << "\n";
		for (list<const char*>::iterator itr = yamanoteseStation.begin(); itr != yamanoteseStation.end(); ++itr)
		{
			if (*itr == "Tadata")
			{
				itr = yamanoteseStation.insert(itr, "Nish-Nippori");
				++itr;
			}

			

		}

	}

	if (selectYear == 2022)
	{
		cout << "2022年の駅一覧を表示します" << "\n";
		for (list<const char*>::iterator itr = yamanoteseStation.begin(); itr != yamanoteseStation.end(); ++itr)
		{
			if (*itr == "Tadata")
			{
				itr = yamanoteseStation.insert(itr, "Nish-Nippori");
				++itr;
			}

			if (*itr == "Tamachi")
			{
				itr == yamanoteseStation.insert(itr, "Takanawa GateWay");
				++itr;
			}

		}

	}
	for (list<const char*>::iterator itr = yamanoteseStation.begin(); itr != yamanoteseStation.end(); ++itr) {

		cout << *itr << "\n";
	}

	

	return 0;
}