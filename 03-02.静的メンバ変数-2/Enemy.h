#pragma once
class Enemy
{
public:
	Enemy();  //コンストラクタ
	~Enemy(); //デストラクタ

	bool IsAlive();

	void SetDeath();

	void Update();

	void Draw();

public:
	//Enemy 全体の情報としたい
	static bool isAllAlive;
private:
	//個別の状態
	bool isAlive;
};

