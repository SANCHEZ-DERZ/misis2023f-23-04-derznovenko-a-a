#include <iostream>
#include <string>
#include <vector>
int main() {
	int include_data = 0;
	std::cin >> include_data;
	int count_w = 0;
	int min_w = 0;
	int len = 0;
	int under_str = 0;
	std::string str;
	for (int g = 0; g < include_data; g++) {
		min_w = 0;
		count_w = 0;
		std::cin >> len >> under_str >> str;
		for (int i = 0; i < under_str; i++) {
			if (str[i] == 'W') {
				count_w += 1;
			}
		}
		min_w = count_w;
		for (int i = under_str; i < len; i++) {
			if (str[i] != str[i - under_str]) {
				if (str[i] == 'W') {
					count_w += 1;
				}
				else {
					count_w -= 1;
				}
			}
			if (min_w > count_w) {
				min_w = count_w;
			}
		}
		if (min_w == 0) {
			std::cout << 0 << '\n';
		}
		else {
			std::cout << min_w << '\n';
		}
	}
}