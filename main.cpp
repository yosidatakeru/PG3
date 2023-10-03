#include<stdio.h>

////多くの倍が TypeだがよくTと略される　Type=T;
//名前つける場所
//Typeがいろいろのに代わる
template <typename Type>
Type Min(Type a, Type b)
{

	if (a > b) 
	{
		return static_cast<Type>(a + b);
	}
	
	if (a < b)
	{
		return static_cast<Type>(a - b);

	}

	if (a == b)
	{
		return static_cast<Type>(a + b);

	}
}

int main()
{


	printf("%d\n", Min<int>(114,51));


	printf("%f\n", Min<float>(11.4f, 01.4f));


	
	printf("%lf\n", Min<double>(1.4, 5.1));



	printf("%c数字以外は代入でません\n", Min<char>(0, 0));


	

	return 0;
}