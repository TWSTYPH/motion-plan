#include <iostream>
using namespace std;

#define week 7

int main()
{
	//int a = 10,b=15,c=0;
	//cout << "请输入两个变量值" << endl;
	//cin >> a >> b;
	//c = a > b ? a : b;



	int score;
	score = 0;
	cout << "请输入分数：" << endl;

	cin >> score;
	if (score > 600)
		cout << "恭喜考上一本大学:" <<score<< endl;
	else
		cout << "很遗憾:" <<score<< endl;
	system("pause");

	return 0;

}
