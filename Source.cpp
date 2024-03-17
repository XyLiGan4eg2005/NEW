#include <iostream>
using namespace std;

int isPali(string str) {
	for (int i = 0; i < str.length() / 2; i++) {
		if (tolower(str[i]) != tolower(str[str.length() - i - 1])) {
			return 0;
		}
	}
	return 1;
}

int main() {
	string str = "Heyehhe";
	cout << isPali(str);
}