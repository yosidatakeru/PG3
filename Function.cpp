#include"Function.h"
////‘½‚­‚Ì”{‚ª Type‚¾‚ª‚æ‚­T‚Æ—ª‚³‚ê‚é@Type=T;
//–¼‘O‚Â‚¯‚éêŠ
//Type‚ª‚¢‚ë‚¢‚ë‚Ì‚É‘ã‚í‚é
template <typename Type>

Type add(Type a, Type b)
{
	return static_cast<Type>(a + b);

}
