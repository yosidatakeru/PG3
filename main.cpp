
#include"Action.h"
#include"Attack.h"
#include"Withdrawal.h"
int main()
{
	const int dementors = 2;
	Action* action[dementors];
	action[0] = new Attack();
	action[1] = new Withdrawal();

	for (int i = 0; i < dementors; i++)
	{
		action[i]->actions();
	}
		
	for (int i = 0; i < dementors; i++)
	{
		delete action[i];
	}
		return 0;
}
