#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <functional>

typedef void (*PFunc)(int*);

void Callback(int* answer) {

    std::function<int()> dice = []() {return rand() % 6 + 1; };

    int result = dice();

    printf("\n出目 : %d\n", result);

    if (result % 2 == 0)
    {
        printf("結果 : 丁\n\n");
    }
    else
    {
        printf("結果 : 半\n\n");
    }

    if (result % 2 == *answer)
    {
        printf("正解\n");
    }
    else
    {
        printf("不正解\n");
    }
}

void SetTimeOut(PFunc p, int answer) {
    // コールバック関数を呼び出す
    Sleep(3000);
    p(&answer);
}

int main(int argc, const char argv[]) {
    srand(time(NULL));

    printf("\nサイコロの結果が:\n丁だと思うなら:'0'\n半だと思うなら:'1'\n'0'か'1'を入力をしてください\n");
    printf("入力:");

    int answer;
    scanf_s("%d", &answer);

    if (answer != 0 && answer != 1)
    {
        printf("\nError!\n");
        return 0;
    }

    PFunc p;
    p = Callback;
    SetTimeOut(p, answer);

    return 0;
}


