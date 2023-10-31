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
	int enemyAction = true;
	
	while (enemyAction == true)
	{
		
		timeS++;
		if (timeS == 181)
		{
			timeS = 0;
		}
		
		switch (enemySituation)
		{
		case 0:
			
			if (timeS ==180)
			{
				(this->*spFuncTadle[0])();
				enemySituation = 1;
				
			}

			break;

		case 1:
			
			if (timeS == 180)
			{
				(this->*spFuncTadle[1])();
				enemySituation = 2;
			}
			break;

		case 2:
			

			if (timeS == 180)
			{
				(this->*spFuncTadle[2])();
				enemySituation = 0;
				enemyAction = false;
			}

			break;

		}

	}
}
