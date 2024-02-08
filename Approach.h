#pragma once
#include"Action.h"
class Approach : public Action
{
public:
	//コンストラクタ
	Approach();

	void  actions() override;

	//デストラクタ
	~Approach();

private:
	const char* name_;

};

