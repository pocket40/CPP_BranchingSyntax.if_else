#include <iostream>

using namespace std;

int main()
{
	//�� ǥ����
	//����, ����, ������ ������

	cout << "����� ���̸� �Է��Ͻʽÿ�.";
	int age;
	cin >> age;

	if (age < 0 || age > 100) {
		cout << "������ �Ͻø� �ȵ˴ϴ�!";
	}
	else if (age >= 20 || age <= 29) {
		cout << "����� 20�� �̱���?\n";
	}
	else if (age >= 30 || age <= 39) {
		cout << "����� 30�� �̱���?";
	}
	else {
		cout << "����� ���̸� �� �𸣰ڽ��ϴ�.\n";
	}


	return 0;
}
