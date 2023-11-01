#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//止めるためにインクルード
#include <windows.h>
#include<functional>


class Enemy
{
public:

	void Inil();
	void Attack();
	void Shoot();
	void Withdrawal();
	void Update();
private:
	static void (Enemy::* spFuncTadle[])();
	int enemyAction = true;
	
	int time = 0;

	enum enemySituation
	{
		Attacks = 1,
		Shoots = 2,
		Withdrawals = 3,
	};
	enemySituation  phase_;
	
};

