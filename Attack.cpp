#include "Attack.h"
#include<iostream>
Attack::Attack()
{
	name_ = "Attack";
}

void Attack::actions()
{
	std::cout << name_ << "\n";
	std::cout << "攻撃" << "\n";

}

Attack::~Attack()
{
	const char* name_;
}
