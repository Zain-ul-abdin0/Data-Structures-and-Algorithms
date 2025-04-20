#include <iostream>
#include <unordered_set>
using namespace std;
int findDuplicate(vector<int>& nums) {
	unordered_set<int> seen;
	for (int num : nums) {
		if (seen.count(num)) {
			return num;
		}
		seen.insert(num);
	}
	return -1;
}
int main() {
	vector<int> numbers = { 12,3,4,5,6 ,12};
	if (findDuplicate(numbers) == -1) {
		cout << "No Duplicate" << endl;
	}
	else {
		cout << "Found Duplicate" << endl;
	}
	return 0;
}

