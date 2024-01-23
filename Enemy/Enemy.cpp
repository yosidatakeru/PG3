#include "Enemy.h"
#include<stdio.h>




void Enemy::Initialze()
{
	phase_ = enemySituation::Attacks;
}

void (Enemy::* Enemy::spFuncTadle[])() = {
	//ÇªÇÍÇºÇÍÇÃä÷êî
	&Enemy::Attack,
	&Enemy::Shoot,
	&Enemy::Withdrawal,


};


void Enemy::Attack()
{
	printf("Attack\n");
	
}

void Enemy::Shoot()
{
	printf("Shoot\n");


	
}
void Enemy::Withdrawal()
{
	printf("Withdrawal\n");
	
}




void Enemy::Update()
{
	
	
	for (int i = 0; i < 3; i++)
	{
		(this->*spFuncTadle[i])();
	}
	
	
		
	
}

