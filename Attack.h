#pragma once
#include"Action.h"
class Attack : public Action
{
public:
//コンストラクタ
	Attack();

	//説明
	void actions() override;

	
	//デストラクタ
	~Attack();

private:

	const char* name_;
};

