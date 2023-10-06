#include <iostream>
#include <vector>
int main() {
	int t;
	int n;
	int count;
	int d;
	int g;
	std::cin >> t;
	std::vector<int> m(t);
	for (int i = 0; i < t; i++) {
		std::cin >> n;
		m[i] = n;
	}
	for (int j = 0; j < t; j++) {
		count = 0;
		d = 1;
		g = m[j];
		while (g > 0) {
			if (g % 10 != 0) {
				count += 1;
			}
			g = g / 10;
		}
		std::cout << count << std::endl;
		while (m[j] > 0) {
			if (m[j] % 10 != 0) {
				std::cout << (m[j] % 10) * d << " ";
			}
			d *= 10;
			m[j] = m[j] / 10;
		}
		std::cout << std::endl;
	}
}
