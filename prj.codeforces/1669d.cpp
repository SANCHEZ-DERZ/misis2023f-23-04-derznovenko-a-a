#include <iostream>
#include <string>
int main() {
	int input_data = 0;
	std::cin >> input_data;
	int len = 0;
	int count_r = 0;
	int count_b = 0;
	int count_w = 0;
	int flag = 0;
	std::string picture;
	for (int g = 0; g < input_data; g++) {
		count_b = 0;
		count_r = 0;
		count_w = 0;
		flag = 0;
		std::cin >> len >> picture;
		for (int i = 0; i < len; i++) {
			if (picture[i] == 'R') {
				count_r += 1;
			}
			if (picture[i] == 'B') {
				count_b += 1;
			}
			//std::cout << count_b << ' ' << count_r << '\n';
			if (picture[i] == 'W' || i == len - 1) {
				//std::cout << i << '\n';
				if ((count_b == 0 || count_r == 0) && count_b != count_r) {
					flag = 1;
					//std::cout << "ASS" << '\n';
				}
				count_b = 0;
				count_r = 0;
			}
		}
		if (flag == 0) {
			std::cout << "YES\n";
		}
		else {
			std::cout << "NO\n";
		}
	}
}