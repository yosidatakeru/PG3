#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�~�߂邽�߂ɃC���N���[�h
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
	int enemySituation = 0;
	int timeS = 0;
	
};

