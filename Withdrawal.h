#pragma once
#include"Action.h"
class Withdrawal : public Action
{
public:
	//�R���X�g���N�^
	Withdrawal();

	void actions() override;

	//�f�X�g���N�^
	~Withdrawal();

private:
	const char* name_;
};

class withdrawal
{
};

