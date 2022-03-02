#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto x = vector<int>(4);
	for (int i = 0; i < 4; ++i) {
		cin >> x[i];
	}

	sort(x.begin(), x.end());
	cout << x[0] * x[2];

	return 0;
}