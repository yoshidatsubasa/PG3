#include <stdio.h>
#include <windows.h>
#include <time.h>

typedef void (*PFunc)(int*);

void Callback(int* answer) {
    srand(time(NULL));
    int result = rand() % 6 + 1;

    printf("\n�o�� : %d\n", result);

    if (result % 2 == 0)
    {
        printf("���� : ����\n\n");
    }
    else
    {
        printf("���� : �\n\n");
    }

    if (result % 2 == *answer)
    {
        printf("����\n");
    }
    else
    {
        printf("�s����\n");
    }
}

void SetTimeOut(PFunc p, int answer) {
    // �R�[���o�b�N�֐����Ăяo��
    Sleep(3000);
    p(&answer);
}

int main(void) {

    printf("\n�T�C�R���̌��ʂ�:\n�������Ǝv���Ȃ�:'0'\n����Ǝv���Ȃ�:'1'\n'0'��'1'����͂����Ă�������\n");
    printf("����:");

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