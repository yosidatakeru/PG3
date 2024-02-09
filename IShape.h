#pragma once
class IShape
{
public:

	virtual void Size() = 0;

	virtual void Draw() = 0;

	virtual ~IShape() = 0;

protected:
		
	float area_ = 0;
};

