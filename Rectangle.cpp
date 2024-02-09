#include "Rectangle.h"
#include<iostream>

Rectangle::Rectangle(float height, float width)
{
	height_ = height;
	width_ = width;

}

void Rectangle::Size()
{
	area_ = height_ * width_;
}

void Rectangle::Draw()
{
	std::cout << "Rectangie" << std::endl;
	std::cout << area_ << std::endl << std::endl;
}

Rectangle::~Rectangle()
{

}
