#include <iostream>

using namespace std;

int main()
{
	//논리 표현식
	//논리합, 논리곱, 논리부정 연산자

	cout << "당신의 나이를 입력하십시오.";
	int age;
	cin >> age;

	if (age < 0 || age > 100) {
		cout << "거짓말 하시면 안됩니다!";
	}
	else if (age >= 20 || age <= 29) {
		cout << "당신은 20대 이군요?\n";
	}
	else if (age >= 30 || age <= 39) {
		cout << "당신은 30대 이군요?";
	}
	else {
		cout << "당신의 나이를 잘 모르겠습니다.\n";
	}


	return 0;
}
