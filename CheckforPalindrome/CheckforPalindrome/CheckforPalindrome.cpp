#include <iostream>
#include <string>
using namespace std;

bool CheckforPalindrome(string str) {
	int left = 0, right = str.length() - 1;
	while (left < right) {
		if (str[left++] != str[right--]) {
			return false;
		}
	}
	return true;
}
int main() {

	string str = "LLLA";
	bool check = CheckforPalindrome(str);
	if (check) {
		cout << "Palindrome String";
	}
	else {
		cout << "Not Palindrome String";
	}
	return 0;
}