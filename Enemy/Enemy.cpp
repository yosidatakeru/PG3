#include "Enemy.h"



void (Enemy::*Enemy::spFuncTadle[])() =
{
&Enemy::Attack,
&Enemy::Shoot,
&Enemy::Withdrawal
};

void Enemy::Inil()
{
	(this->*spFuncTadle[0])();
	(this->*spFuncTadle[1])();
	(this->*spFuncTadle[2])();
}
void Enemy::Attack()
{
	printf("Attack\n");
	(this->*spFuncTadle[1])();

}

void Enemy::Shoot()
{
	printf("Shoot\n");
	
	(this->*spFuncTadle[2])();
}
void Enemy::Withdrawal()
{
	printf("Withdrawal\n");
	
	//(this->*spFuncTadle[0])();
	
}




void Enemy::Update()
{
	
	//phase_ = Attacks;

	int enemyAction = true;
	
	while (enemyAction == true)
	{
		

			(this->*spFuncTadle[0])();
		
		


			enemyAction = false;

	
	}
}

