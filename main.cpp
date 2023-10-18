#include"Function/Function.h"
int division(int dice)
{
    std::function<int(int)>fx = [](int dice)
    {
        return dice % 2;
    };
    return fx(dice);
}
int main()
{
  

    // サイコロを振る
    srand(time(nullptr));
    int dice = rand() % 6 + 1;
    int (*total)(int);

    // ユーザーからの予想を受け取る
    int userGuess = 0;
    printf("丁（奇数）か半（偶数）を予想してください（1: 丁, 2: 半）: ");
    scanf_s("%d", &userGuess);

    PFunc p;
    p = DispResut;
    setTimeout(p, 3);



    total = &division;
    

    // ゲームの結果を表示
    printf("サイコロの出目: %d\n", dice);
    printf("%d\n", total(dice));
    if ((total(dice) == 1&& userGuess == 1) || (total(dice) ==0  && userGuess == 2))
    {
        printf("当たり\n");
    }
    else
    {
        printf("外れ\n");
    }


    return 0;

}
