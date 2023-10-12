#include"Function/Function.h"

int main()
{

    // サイコロを振る
    srand(time(nullptr));
    int dice = rand() % 6 + 1;


    // ユーザーからの予想を受け取る
    int userGuess = 0;
    printf("丁（奇数）か半（偶数）を予想してください（1: 丁, 2: 半）: ");
    scanf_s("%d", &userGuess);

    PFunc p;
    p = DispResut;
    setTimeout(p, 3);





    // ゲームの結果を表示
    printf("サイコロの出目: %d\n", dice);

    if ((dice % 2 == 1 && userGuess == 1) || (dice % 2 == 0 && userGuess == 2))
    {
        printf("当たり\n");
    }
    else
    {
        printf("外れ\n");
    }


    return 0;

}
