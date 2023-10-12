#include<stdio.h>
#include <Windows.h>
#pragma region 関数ポインタハローワルド
//void PrintHelloWorld(void)
//{
//	printf("HelloWorld\n");
//}
#pragma endregion


#pragma region 関数ポインタの特徴
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
#pragma endregion



#pragma region 関数ポインタの特徴(配列)

//int assiton(int a, int b)
//{
//	return a + b;
//}
//
//
//int subtraction(int a, int b)
//{
//	return a - b;
//}
//
//
//int multraction(int a, int b)
//{
//	return a * b;
//}
//
//int division(int a, int b)
//{
//	return a / b;
//}


#pragma endregion

typedef void (*PFunc)(int*);

void DispResult(int* s)
{
	printf("%d秒待って実行\/", *s);
}
void setTimeout(PFunc P, int second)
{
	Sleep(second * 1000);

	P(&second);
}

int main(void)
{

	

#pragma region 関数ポインタハローワルド
	//////宣言変数と同じ用に関数の前に*をつけて()で囲む
	////void (*pfunc)();
	//////ここで中に入れる
	////pfunc = PrintHelloWorld;

	////printf("PrintHelloWrldのアドレス = %p\n ", PrintHelloWorld);
	////printf("pfuncの内容 = %p\n", pfunc);
	////pfunc();
#pragma endregion

#pragma region 関数ポインタの特徴
	//int l = 114;
	//int h = 514;

	//int (*calc)(int, int);

	//calc = add;
	//printf("%d\n", calc(l, h));


	//calc = sub;
	//printf("%d\n", calc(l, h));
#pragma endregion

#pragma region 関数ポインタの特徴(配列)

	/*int l = 33;
	int h = 4;

	int(*funcArr[4])(int, int) =
	{

	 assiton,

     subtraction,

     multraction,

     division 

};

	for (int i =0;i<4;i++)
	{
		printf("%d\n", funcArr[i](l, h));
	}*/
#pragma endregion


	//関数ポインタのデメリット
	//意見すると変数の代入にしか見えないので注意
	//例　calc =add;
	//回避方法
	// 例　calc = &add;


	printf("start\n");

	PFunc p;
	p = DispResult;
	setTimeout(p, 3);


	return 0;
}