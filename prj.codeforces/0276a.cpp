#include <iostream>
int main() {
 
	int n, k, f, t, i;
	int max = -9999999999;
	std::cin >> n >> k;
	while (n > 0) {
		n -= 1;
		std::cin >> f >> t;
		if (k >= t) {
			if (max < f) {
				max = f;
			}
		}
		else {
			i = f - (t - k);
			if (max < i) {
				max = i;
			}
		}
	}
	std::cout << max;
 
}
