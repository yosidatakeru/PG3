#include<thread>
#include<vector>
#include <string>
#include"Calation.h"
#include"DisplayText.h"

int main()
{
	std::vector<std::string>threadName{ "thread 1","thread 2","thread 3" };

	std::thread th1(DisplayText, threadName[0]);
	th1.join();

	std::thread th2(DisplayText, threadName[1]);
	th2.join();

	std::thread th3(DisplayText, threadName[2]);
	th3.join();



	return 0;
}