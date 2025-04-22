#include <iostream>
#include <vector>
using namespace std;
//1. Maximum Element in an Array/Vector:
int findMax(const vector<int>& nums) {
	if (nums.empty()) {
		throw invalid_argument("Input vector is empty");
	}
	int maxElement = nums[0];
	for (int num : nums) {
		if (maxElement < num) {
			maxElement = num;
		}
	}
	return maxElement;
}
int main() {
	vector<int> numbers = { 3, 7, 1, 9, 4, 9 };
	cout << "Maximum element: " << findMax(numbers) << endl; // Output: 9
	return 0;
}

