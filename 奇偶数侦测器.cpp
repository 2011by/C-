#include<iostream>
using namespace std;
int main()
{
	cout << "����һ����ż�������" << endl;
	cout << "��ʼ��" << endl;
	cout << "������һ������:"; int a; cin >> a;
	if(a % 2 == 0) {
		cout << "�������������:" << a << endl;
		cout << "�������ż��" << endl;
	}
	if (a % 2 != 0) {
		cout << "�������������:" << a << endl;
		cout << "�����������" << endl;
	}
	system("pause");
}