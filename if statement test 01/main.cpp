#include <iostream>
#include <windows.h>

using namespace std;
int main(void) {
	int x, y, z;

	cout << "请输入3个整数: " << endl;
	cin >> x >> y >> z;

	if (x > y) {		//如果x>y那就是x大,再判断x>z,如果x>z最大值是：x,否则最大值是：z
		if (x > z) {
			cout << "最大值是： " << x << endl;
		}
		else {
			cout << "最大值是： " << z << endl;
		}
	}
	else {				//否则如果y>z最大值是：y,否则那就是"最大值是：z
		if (y > z) {
			cout << "最大值是： " << y << endl;
		}
		else {
			cout << "最大值是： " << z << endl;
		}
	}

	system("pause");
	return 0;
}