#include <iostream>
#include <vector>
int main() {
	int n = 0;
	int a = 0;
	int count = 0;
	std::cin >> n;
	std::vector<int> l(n);
	for (int i = 0; i < n; i++) {
		std::cin >> a;
		l[i] = a;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (l[i] == l[j]) {
				l[i] = 0;
				count += 1;
			}
		}
	}
	std::cout << l.size() - count << std::endl;
	for (int i = 0; i < n; i++) {
		if (l[i] != 0) {
			std::cout << l[i] << " ";
		}
	}
}
