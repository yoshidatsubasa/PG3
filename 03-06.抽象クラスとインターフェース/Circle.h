#pragma once
#include"IShape.h"

//�h���N���X
class Circle :public IShape
{
public:
	void size() override;
	void draw() override;
};