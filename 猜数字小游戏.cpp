#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	cout << "--------------------��������Ϸ--------------------" << endl;
	int a;
	srand(time(NULL));
	int b = rand() % 11 + 2;
	while (1) {
		cout << "������һ��1��10����������:"; cin >> a;
		if (a > b) {
			cout << "��µ����ִ���" << endl;
			cout << "������������Ϸ" << endl;
		}
		else if (a < b) {
			cout << "��µ�����С��" << endl;
			cout << "������������Ϸ" << endl;
		}
		else if (a == b) {
			cout << "��ϲ��¶���" << endl;
			cout << "��Ϸ����" << endl;
			break;
			return 0;
		}
		/*else if (a > 10) {
			cout << "��µ����ִ�����10" << endl;
			cout << "������������Ϸ" << endl;
		}
		else if (a < 1) {
			cout << "��µ�����С����1" << endl;
			cout << "������������Ϸ" << endl;
		}*/
	}
}