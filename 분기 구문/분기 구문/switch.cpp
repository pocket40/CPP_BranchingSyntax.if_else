#include <iostream>

using namespace std;

int main() 
{
	/*switch (interger - expresssion)
	{
	case label1:
		code#1
	case label2:
		code#2
	case label3:
		code#3
	case label4:
		code#4
	case label4:
		code#5
	}
		*/
	int a;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "�Է��Ͻ� ���ڴ� 1�Դϴ�.\n";
		break;
	case 2:
		cout << "�Է��Ͻ� ���ڴ� 2�Դϴ�.\n";
		break;
	case 3:
		cout << "�Է��Ͻ� ���ڴ� 3�Դϴ�.\n";
		break;
	case 4:
		cout << "�Է��Ͻ� ���ڴ� 4�Դϴ�.\n";
		break;
	case 5:
		cout << "�Է��Ͻ� ���ڴ� 5�Դϴ�.\n";
		break;
	default:
		cout << "�Է��Ͻ� ���� 1,2,3,4,5 �̿Ϳ� �ٸ� ���Դϴ�.\n";
		break;
	}

	cout << "switch ������ �������ϴ�.\n";

	return 0;
}