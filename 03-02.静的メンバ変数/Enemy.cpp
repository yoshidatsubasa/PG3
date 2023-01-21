#include "Enemy.h"
#include "DxLib.h"

bool Enemy::IsAlive = true;

Enemy::Enemy()
{
}

Enemy::~Enemy()
{
}

Enemy* Enemy::GetInstance()
{
	static Enemy instance;

	return &instance;
}

void Enemy::Dead()
{
	IsAlive = false;
}

void Enemy::Draw(int x, int y)
{
	if (IsAlive)
	{
		DrawCircle(x,y,50, GetColor(255, 255, 0), true);
	}
}