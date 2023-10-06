#include <iostream>
#include <vector>
int main() {
	int t = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int count = 0;
	std::cin >> t;
	std::vector<int> l(t);
	for (int i = 0; i < t; i++) {
		count = 0;
		std::cin >> a >> b >> c;
		if (a > b) {
			while (a > b) {
				a = a - c;
				b = b + c;
				count += 1;
			}
		}
		else if (a < b){
			while (a < b) {
				a = a + c;
				b = b - c;
				count += 1;
			}
		}
		l[i] = count;
	}
	for (int i = 0; i < t; i++) {
		std::cout << l[i] << std::endl;
	}
}
