#pragma once
#include <iostream>
class Action
{
public:
	//コンストラクタ
    Action();

	
	//行動用関数
	virtual void actions();

	//デストラクタ
	virtual ~Action();

private:

	const char* name_="neme";
};

