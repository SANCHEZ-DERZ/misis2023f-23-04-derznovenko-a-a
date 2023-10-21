#include <iostream>
#include <vector>
int main() {
	int input_data = 0;
	int len = 0;
	std::vector<int> num;
	std::cin >> input_data;
	int hight = 0;
	for (int g = 0; g < input_data; g++) {
		hight = 1;
		std::cin >> len;
		num.resize(len);
		for (int i = 0; i < len; i++) {
			std::cin >> num[i];
		}
		for (int i = 0; i < len; i++) {
			if (num[i] == 1) {
				hight += 1;
			}
		}
		for (int i = 0; i < len - 1; i++) {
			if (num[i] == 1 && num[i + 1] == 1) {
				hight += 4;
			}
			if (num[i] == 0 && num[i + 1] == 0) {
				hight = -1;
				break;
			}
		}
		std::cout << hight << '\n';
	}
}
