#include <stdio.h>
#include <string>
#include <chrono>
#include <iostream>


int main()
{

	const int TEXT_AMOUNT = 100000;
	std::string a(TEXT_AMOUNT, 'a');
	std::cout << TEXT_AMOUNT << "文字のコピーと移動を比較\n";



	std::chrono::steady_clock::time_point now = std::chrono::steady_clock::now();
	std::string a2 = a;

	std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

	auto result = std::chrono::duration_cast<std::chrono::microseconds>(end - now).count();

	std::cout << "コピーの場合" << "\n";
	std::cout << result << "\n";

	std::chrono::steady_clock::time_point now2 = std::chrono::steady_clock::now();
	std::string a3 = std::move(a);

	std::chrono::steady_clock::time_point end2 = std::chrono::steady_clock::now();
	auto result2 = std::chrono::duration_cast <std::chrono::microseconds> (end2 - now2).count();

	std::cout << "移動の場合" << "\n";
	std::cout << result2 << "\n";

	return 0;
}