#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int num;
	cin >> num;
	int cnt = 0;
	
	for (int i = 0; i < num; i++) {
		string word;
		cin >> word;
		int arr[26] = {}, index=0;

		for (int i = 0; i < word.size(); i++) {
			index = word[i] - 97;
			arr[index]++;

			while (word[i] == word[i + 1]) {
				i++;
			}
		}
		for (int i = 0; i < 26; i++) {
			if (arr[i] > 1) {
				cnt++;
				break;
			}
		}
			
	}
	cout << num - cnt;
	
	return 0;
}
