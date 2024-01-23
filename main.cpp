#include"Enemy/Enemy.h"
int main()
{
    Enemy* enemy = new Enemy;
     
    enemy->Initialze();

     enemy->Update();

     delete enemy;
    return 0;

}
