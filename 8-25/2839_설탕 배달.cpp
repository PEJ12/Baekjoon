#include <iostream>
using namespace std;

int main(void) {
	int n, a, b;
	cin >> n;
	int max = n / 5, cnt=0;
	while (max >= 0) {
		if ((n - max * 5)%3 == 0) {
			cout << max + (n - max * 5) / 3 ;
			cnt = 1;
			break;
		}
		max--;
	}
	if (cnt == 0) {
		cout << -1;
	}
	return 0;
}
