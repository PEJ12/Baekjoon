#include <iostream>
using namespace std;

bool check_num(int num) {
	if (num > 99 && num <= 1000) {
		if (num % 100 % 10 - num % 100 / 10 == num % 100 / 10 - num / 100) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
			return true;
		}
	}


int main(void) {
	int num;
	cin >> num;
	int count = 0;
	for (int i = 1; i <= num; ++i) {
	
		if (check_num(i)) {
			count++;
		}
	}
	cout<< count;
	return 0;
}
