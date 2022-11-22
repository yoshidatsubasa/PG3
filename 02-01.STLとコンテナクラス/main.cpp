#include<list>
#include <iostream>

using namespace std;

int main()
{
	list<const char*>stations={"Tokyo","Kanda","Akihabara","Okachimachi","Ueno",
		"Uguisudani","Nippori","Tabata","Komagome","Sugamo","Otsuka","Ikebukuro",
		"Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku",
		"Shibuya","Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamachi",
		"Hamamatsucho","Shimbashi","Yurakucho"};

	//�o��
	cout << "---1970�N�̉w�ꗗ---" << endl;
	for (const char* station : stations) {
		cout << station << endl;
	}

	//�����闢(1971�N�J��)��}��
	for (list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = stations.insert(itr, "Nishi - Nippori");
			++itr;
		}
	}

	//�o��
	cout << "---2019�N�̉w�ꗗ---" << endl;
	for (const char* station : stations) {
		cout << station << endl;
	}

	//���փQ�[�g�E�F�C(2020�N�J��)��}��
	for (list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = stations.insert(itr, "Takanawa - Gateway");
			++itr;
		}
	}

	//�o��
	cout << "---2022�N�̉w�ꗗ---" << endl;
	for (const char* station : stations) {
		cout << station << endl;
	}

	
	return 0;
}