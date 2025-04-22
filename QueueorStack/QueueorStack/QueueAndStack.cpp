#include <iostream>
#include <stack>
#include <queue>
#include <map>
using namespace std;
int main() {
	map<int, string> mapper;

	mapper.insert({ 1,"name" });
	mapper.insert({ 1, "age" });
	mapper.insert({ 3, "color" });
	mapper.insert({ 4, "st" });
	mapper.insert({5, "name"});
	mapper.erase(1);
	mapper.emplace(90,"ZAin");
	mapper.emplace(20, "ZAin");
	mapper.emplace(10, "ZAin");
	for (auto pair : mapper) {
		cout << pair.first << endl;
	}

	return 0;
}