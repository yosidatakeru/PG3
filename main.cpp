#include"Function/Function.h"

int main(int dice)
{
  
    
       
    // サイコロを振る
    srand(time(nullptr));
    dice = rand() % 6 + 1;
   
    

    // ユーザーからの予想を受け取る
    int userGuess = 0;
    printf("丁（奇数）か半（偶数）を予想してください（1: 丁, 2: 半）: ");
    scanf_s("%d", &userGuess);

    //時間制御
    PFunc p;
    p = DispResut;
    setTimeout(p, 3);



    printf("サイコロの出目: %d\n", dice);
    

    // ゲームの結果を表示
   
    std::function<int(int)>fx = [](int dice)
    {
        return dice %2;
    };
    

    printf("2で割った数%d\n", fx(dice));


   
    if ((fx(dice) == 1 && userGuess == 1) || (fx(dice) == 0 && userGuess == 2))
    {

        printf("当たり\n");
    }
    else
    {
        printf("外れ\n");
    }


    return 0;

}
