#pragma once
#include"Action.h"
class Attack : public Action
{
public:
//�R���X�g���N�^
	Attack();

	//����
	void actions() override;

	
	//�f�X�g���N�^
	~Attack();

private:

	const char* name_;
};

