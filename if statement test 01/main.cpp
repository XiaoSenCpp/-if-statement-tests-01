#include <iostream>
#include <windows.h>

using namespace std;
int main(void) {
	int x, y, z;

	cout << "������3������: " << endl;
	cin >> x >> y >> z;

	if (x > y) {		//���x>y�Ǿ���x��,���ж�x>z,���x>z���ֵ�ǣ�x,�������ֵ�ǣ�z
		if (x > z) {
			cout << "���ֵ�ǣ� " << x << endl;
		}
		else {
			cout << "���ֵ�ǣ� " << z << endl;
		}
	}
	else {				//�������y>z���ֵ�ǣ�y,�����Ǿ���"���ֵ�ǣ�z
		if (y > z) {
			cout << "���ֵ�ǣ� " << y << endl;
		}
		else {
			cout << "���ֵ�ǣ� " << z << endl;
		}
	}

	system("pause");
	return 0;
}