#include <iostream>
#include <vector>
#include <algorithm>
int main() {
	int input_data = 0;
	int len_of_vec = 0;
    std::vector <int> mas;
	int answ = 0;
	std::cin >> input_data;
	for (int i = 0; i < input_data; i++) {
		answ = 0;
		std::cin >> len_of_vec;
		mas.resize(len_of_vec);
		for (int j = 0; j < len_of_vec; j++) {
			std::cin >> mas[j];
		}
		for (int g = 0; g < 100; g++) {
			for (int j = 1; j < mas.size(); j++) {
				mas[j - 1] = mas[j - 1] & mas[j];
			}
		}
		std::sort(mas.begin(), mas.end());
		std::cout << mas.front() << '\n';
	}
}
