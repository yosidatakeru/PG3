#pragma once
template <typename T1, typename T2>

class Min
{
public:
	T1 height;
	T2 width;

	//�R���X�g���N�^
	Min(T1 height, T2 width) : height(height), width(width) {}

	T1 comparison() {
		if (height < width) {
			return  height;
		}
		else {
			return  width;
		}
	}

};