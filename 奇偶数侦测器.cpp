#include<iostream>
using namespace std;
int main()
{
	cout << "这是一个奇偶数侦测器" << endl;
	cout << "开始吧" << endl;
	cout << "请输入一个数字:"; int a; cin >> a;
	if(a % 2 == 0) {
		cout << "你输入的数字是:" << a << endl;
		cout << "这个数是偶数" << endl;
	}
	if (a % 2 != 0) {
		cout << "你输入的数字是:" << a << endl;
		cout << "这个数是奇数" << endl;
	}
	system("pause");
}