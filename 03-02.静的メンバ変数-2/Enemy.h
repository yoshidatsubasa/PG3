#pragma once
class Enemy
{
public:
	Enemy();  //�R���X�g���N�^
	~Enemy(); //�f�X�g���N�^

	bool IsAlive();

	void SetDeath();

	void Update();

	void Draw();

public:
	//Enemy �S�̂̏��Ƃ�����
	static bool isAllAlive;
private:
	//�ʂ̏��
	bool isAlive;
};

