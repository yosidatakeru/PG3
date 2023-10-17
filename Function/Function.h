#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//止めるためにインクルード
#include <windows.h>
#include<functional>
typedef void (*PFunc)(int*);

void DispResut(int* s);

void setTimeout(PFunc p, int second);

int division(int a);