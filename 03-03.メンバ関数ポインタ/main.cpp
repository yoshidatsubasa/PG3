#include<stdio.h>
#include"Enemy.h"

int main()
{
	Enemy enemy;
	int input;


	while (true)
	{
		//続けるかどうか入力させる
		printf("0:exit 1:continue==> ");
		scanf_s("%d" ,& input);
		if (input == 0)break;

		enemy.Update();

		enemy.Draw();
	}
	

	return 0;
}