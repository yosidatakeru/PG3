#pragma once
template <typename T1>

class Min
{
public:
	T1 height;
	T1 width;

	//コンストラクタ
	 Min(T1 height, T1 width) :  height(height), width(width){}
    
	// メンバ関数
	T1 add()
	{
		if (height < width)
		{
			return width;
		}
		else
		{
			return height;
		}
	}

};

