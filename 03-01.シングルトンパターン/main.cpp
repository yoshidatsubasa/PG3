#include<stdio.h>
#include"SceneManager.h"
int main()
{

	SceneManager* sceneMnager = SceneManager::GetInstance();

	sceneMnager->GetInstance()->ShowScene();
	sceneMnager->GetInstance()->ChangeScene();
	

	return 0;
}