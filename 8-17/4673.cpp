#include <iostream>
#include <vector>
using namespace std;

bool num[10000];

int d(int num) {
	int temp = num + num / 1000 + num / 100 % 10 + num % 100 / 10 + num % 10;
	return temp ;
}


void self_number_check() {
	int temp;
	num[1] = false;
	for (int i = 0; i < 10000; ++i) {
		if (d(i) <= 10000) {
			temp = d(i);
			num[temp] = true;
		}
	}
}

int main(void) {
	self_number_check();
	for (int i = 1; i <= 10000; ++i) {
		if (!num[i]) {
			cout << i << "\n";
		}
	}
	return 0;
}