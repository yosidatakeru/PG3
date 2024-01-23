#pragma once

#include <windows.h>




class Enemy
{
public:
	

	void Initialze();
	void Update();
	void Attack();
	void Shoot();
	void Withdrawal();
	
private:

	

	enum enemySituation
	{
		Attacks ,
		Shoots ,
		Withdrawals ,
	};
	
	enemySituation phase_ = enemySituation();

	static void (Enemy::* spFuncTadle[])();


};

