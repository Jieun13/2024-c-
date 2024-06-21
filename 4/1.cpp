#include<iostream>

using namespace std;

class Tower {
private :
	int height;
public :
	Tower() {
		height = 1;
	}
	Tower(int h) {
		height = h;
	}
	int getHeight() {
		return height;
	}
};

int main() {

	Tower myTower;						// 1 ����
	Tower seoulTower(100);				// 100 ����

	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}