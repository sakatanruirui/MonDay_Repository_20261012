#include <iostream>
#include "Character.h"
using namespace std;
int main(void)
{
	//コンストラクタ
	Character character("爆裂波動砲");
	cout << character.GetName() << endl;

	character.Attack();

	return 0;
}

