#pragma once
#include"Action.h"
class Approach : public Action
{
public:
	//�R���X�g���N�^
	Approach();

	void  actions() override;

	//�f�X�g���N�^
	~Approach();

private:
	const char* name_;

};

