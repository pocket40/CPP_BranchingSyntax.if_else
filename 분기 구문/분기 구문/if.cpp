#include <iostream>

using namespace std;

int main() 
{
	//�б� ���� : if����

	/*if(����)
		�ڵ�*/

	if (false) {
		cout << "������ ";
		cout << "���Դϴ�." << endl;
	}
	else {
		cout << "������";
		cout << "�����Դϴ�." << endl;

	}

	if (false)
		cout << "������ �����Դϴ�.";

	cout << "���α׷��� ����Ǿ����ϴ�.\n";

	if (false) {
		cout << "#1";
	}
	else {
		if (true) {
			cout << "#2\n";
		}
		else {
			cout << "#1";
		}
	}

	if (false) {
		cout << "#1";
	}
	else if (true) {
			cout << "#2";
		}
	else {
		cout << "#1";
	}

	return 0;
}
