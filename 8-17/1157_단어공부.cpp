#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string word;
	cin >> word;
	for (int i = 0; i < word.size(); i++) {
		word[i] = toupper(word[i]);
	}
	int alpha[26] = {};
	for (int i = 0; i < word.size(); i++) {
		alpha[word[i] - 65]++;
	}

	int max=0, maxindex = 0, cnt =0;
	for (int i = 0; i < 26; i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			maxindex = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == alpha[i]) {
			cnt++;
		}
	}

	if (cnt > 1) {
		cout << "?";
	}
	else {
		cout <<(char)(maxindex + 65);
	}
	return 0;
}
