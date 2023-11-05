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
	
	time = 0;
	
	phase_ = Enemy::Shoots;
}

void Enemy::Shoot()
{
	printf("Shoot\n");
	time = 0;
	phase_ = Enemy::Withdrawals;
}
void Enemy::Withdrawal()
{
	printf("Withdrawal\n");
	time = 0;
	phase_ = Enemy::Attacks;
}




void Enemy::Update()
{
	
	phase_ = Attacks;

	int enemyAction = true;
	
	while (enemyAction == true)
	{
		
		
			for (int i = 0; i < 3;i++)
			{
				

				(this->*spFuncTadle[i])();

				
			}
		
		
			enemyAction = false;

		
			

			
			

			

	
		

	}
}

