#include "Enemy.h"
#include<stdio.h>
//static メンバ変数はEnemy.cppで用意する
 bool Enemy::isAllAlive=false;
Enemy::Enemy()
{
	isAlive = true;
	isAllAlive = true;
}

Enemy::~Enemy()
{

}
bool Enemy::IsAlive()
{
	return ~isAllAlive;
}

void Enemy::SetDeath()
{
	isAlive = ~isAlive;
	isAllAlive = ~isAllAlive;
}

void Enemy::Update()
{
	if (IsAlive())
	{
		isAlive = ~isAlive;
	}
}

void Enemy::Draw()
{
	if (IsAlive())
	{
		printf("敵の表示\n");
	}
}