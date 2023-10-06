#include <iostream>
int main() {
 
	int j1, j2, j3, j4, j5;
	int i = 0;
	int is = 0;
	int js = 0;
	int steps = 0;
	while (i != 5) {
		i += 1;
		std::cin >> j1 >> j2 >> j3 >> j4 >> j5;
		if ((j1 == 1)) {
			js = 1;
			is = i;
		}
		if ((j2 == 1)) {
			js = 2;
			is = i;
		}
		if ((j3 == 1)) {
			js = 3;
			is = i;
		}
		if ((j4 == 1)) {
			js = 4;
			is = i;
		}
		if ((j5 == 1)) {
			js = 5;
			is = i;
		}
	}
	while (js != 3) {
		if (js > 3) {
			js -= 1;
			steps += 1;
		}
		if (js < 3) {
			js += 1;
			steps += 1;
		}
	}
	while (is != 3) {
		if (is > 3) {
			is -= 1;
			steps += 1;
		}
		if (is < 3) {
			is += 1;
			steps += 1;
		}
	}
	std::cout << steps;
}
