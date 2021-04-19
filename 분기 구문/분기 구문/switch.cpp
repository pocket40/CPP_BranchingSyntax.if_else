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
		cout << "입력하신 숫자는 1입니다.\n";
		break;
	case 2:
		cout << "입력하신 숫자는 2입니다.\n";
		break;
	case 3:
		cout << "입력하신 숫자는 3입니다.\n";
		break;
	case 4:
		cout << "입력하신 숫자는 4입니다.\n";
		break;
	case 5:
		cout << "입력하신 숫자는 5입니다.\n";
		break;
	default:
		cout << "입력하신 값은 1,2,3,4,5 이와에 다른 값입니다.\n";
		break;
	}

	cout << "switch 구문이 끝났습니다.\n";

	return 0;
}