#include "Withdrawal.h"
#include<iostream>
Withdrawal::Withdrawal()
{
}

void Withdrawal::actions()
{
	name_ = "Withdrawal";
	std::cout << name_ << "<\n";
	std::cout << "離脱" << "\n";
}

Withdrawal::~Withdrawal()
{
}
