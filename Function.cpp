#include"Function.h"
////多くの倍が TypeだがよくTと略される　Type=T;
//名前つける場所
//Typeがいろいろのに代わる
template <typename Type>

Type add(Type a, Type b)
{
	return static_cast<Type>(a + b);

}
