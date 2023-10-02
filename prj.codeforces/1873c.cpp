#include <iostream>
#include <string>
int main() {
	int input_data = 0;
	std::string line;
	std::cin >> input_data;
	int sum = 0;
	for (int g = 0; g < input_data; g++) {
		sum = 0;
		for (int i = 0; i < 10; i++) {
			std::cin >> line;
			for (int j = 0; j < line.size(); j++) {
				if (line[j] == 'X') {
					if (i == 0 || j == 0 || i == 9 || j == 9) {
						sum += 1;
					}
					if ((i == 1 && j > 0 && j < 9) || (i == 8 && j > 0 && j < 9) || (j == 1 && i > 0 && i < 9) || (j == 8 && i > 0 && i < 9)) {
						sum += 2;
					}
					if ((i == 2 && j > 1 && j < 8) || (i == 7 && j > 1 && j < 8) || (j == 2 && i > 1 && i < 8) || (j == 7 && i > 1 && i < 8)) {
						sum += 3;
					}
					if ((i == 3 && j > 2 && j < 7) || (i == 6 && j > 2 && j < 7) || (j == 3 && i > 2 && i < 7) || (j == 6 && i > 2 && i < 7)) {
						sum += 4;
					}
					if ((i == 4 && j > 3 && j < 6) || (i == 5 && j > 3 && j < 6) || (j == 4 && i > 3 && i < 6) || (j == 5 && i > 3 && i < 6)) {
						sum += 5;
					}
				}
			}
		}
		std::cout << sum << '\n';
	}
}
