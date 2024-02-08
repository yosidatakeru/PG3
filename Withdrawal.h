#pragma once
#include"Action.h"
class Withdrawal : public Action
{
public:
	//コンストラクタ
	Withdrawal();

	void actions() override;

	//デストラクタ
	~Withdrawal();

private:
	const char* name_;
};

class withdrawal
{
};

