#pragma once
#include <iostream>
class Action
{
public:
	//�R���X�g���N�^
    Action();

	
	//�s���p�֐�
	virtual void actions();

	//�f�X�g���N�^
	virtual ~Action();

private:

	const char* name_="neme";
};

