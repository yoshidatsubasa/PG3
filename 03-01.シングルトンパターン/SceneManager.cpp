#include "SceneManager.h"


SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}

SceneManager* SceneManager::GetInstance()
{
	static SceneManager instance;


	return &instance;
}

void SceneManager::ChangeScene()
{
	while (true)
	{
		Sleep(3 * 1000);

		sceneNo += 1;
		if (sceneNo > 3) {
			sceneNo = 0;
			Count += 1;
		}

		if (Count == 3) {
			break;
		}
		ShowScene();

	}
}

void SceneManager::ShowScene()
{
	if (sceneNo == 0) {
		printf("Title\n");
	}

	if (sceneNo == 1) {
		printf("NewGame\n");
	}

	if (sceneNo == 2) {
		printf("GamePlay\n");
	}

	if (sceneNo == 3) {
		printf("GameClear\n");
	}
}