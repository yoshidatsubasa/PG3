#include "Enemy.h"
#include<stdio.h>
//static �����o�ϐ���Enemy.cpp�ŗp�ӂ���
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
		printf("�G�̕\��\n");
	}
}