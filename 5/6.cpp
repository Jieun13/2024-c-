#include<iostream>
#include<string>

using namespace std;

int main() {
	string str;
	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.)" << endl;
	while (true) {
		cout << ">> ";
		getline(cin, str);

		if (str == "exit") break;

		reverse(str.begin(), str.end());
		cout << str << endl;
	}
	
}