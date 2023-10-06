#include <iostream>
#include <string>
int main() {
	int input_data = 0;
	int len = 0;
	int under_st = 0;
	int count = 0;
	std::string colors;
	std::cin >> input_data;
	for (int i = 0; i < input_data; i++) {
		count = 0;
		std::cin >> len >> under_st >> colors;
		for (int j = 0; j < colors.size(); j++) {
			if (colors[j] == 'B') {
				count += 1;
				j += under_st - 1;
			}
		}
		std::cout << count << '\n';
	}
}
