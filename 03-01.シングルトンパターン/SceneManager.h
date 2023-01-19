#pragma once
#include <stdio.h>
#include <Windows.h>

class SceneManager final
{
private:
	SceneManager();

	~SceneManager();

	int sceneNo = 0;

	int Count = 0;
public:
	SceneManager( const SceneManager & obj ) = delete;

	SceneManager& operator=(const SceneManager& obj) = delete;

	static SceneManager* GetInstance();

	void ChangeScene();

	void ShowScene();
};

