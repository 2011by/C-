#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	cout << "--------------------猜数字游戏--------------------" << endl;
	int a;
	srand(time(NULL));
	int b = rand() % 11 + 2;
	while (1) {
		cout << "请输入一个1到10的整形数字:"; cin >> a;
		if (a > b) {
			cout << "你猜的数字大了" << endl;
			cout << "将重新启动游戏" << endl;
		}
		else if (a < b) {
			cout << "你猜的数字小了" << endl;
			cout << "将重新启动游戏" << endl;
		}
		else if (a == b) {
			cout << "恭喜你猜对了" << endl;
			cout << "游戏结束" << endl;
			break;
			return 0;
		}
		/*else if (a > 10) {
			cout << "你猜的数字大于了10" << endl;
			cout << "将重新启动游戏" << endl;
		}
		else if (a < 1) {
			cout << "你猜的数字小于了1" << endl;
			cout << "将重新启动游戏" << endl;
		}*/
	}
}