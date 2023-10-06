#include <iostream>
int main() {
	int n, a1, a2, a3, count;
	int c = 0;
	std::cin >> n;
	while (n > 0) {
		count = 0;
		n -= 1;
		std::cin >> a1 >> a2 >> a3;
		if (a1 == 1) {
			count += 1;
		}
		if (a2 == 1) {
			count += 1;
		}
		if (a3 == 1) {
			count += 1;
		}
		if (count >= 2) {
			c += 1;
		}
	}
	std::cout << c;
}
