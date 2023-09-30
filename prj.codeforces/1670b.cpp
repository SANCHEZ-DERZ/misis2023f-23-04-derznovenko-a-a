#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int main() {
	int count_data = 0;
	int psw_len = 0;
	std::string psw;
	int num_of_symb = 0;
	char symb;
	std::vector<char> list_of_symb;
	std::cin >> count_data;
	std::vector<int> indexes;
	std::vector<int> answ;
	int neighbor_ind = 0;
	int answ_of_one_symb = -1;
	for (int i = 0; i < count_data; i++) {
		indexes.clear();
		answ.clear();
		std::cin >> psw_len >> psw >> num_of_symb;
		list_of_symb.resize(num_of_symb);
		for (int j = 0; j < num_of_symb; j++) {
			std::cin >> list_of_symb[j];
		}
		if (num_of_symb == 1) {
			for (int j = 0; j < psw.size(); j++) {
				if (psw[j] == list_of_symb[0]) {
					answ_of_one_symb = j;
				}
			}
		}
		else {
			for (int j = 0; j < psw.size(); j++) {
				for (int g = 0; g < list_of_symb.size(); g++) {
					if (psw[j] == list_of_symb[g]) {
						indexes.push_back(j);
					}
				}
			}
		}
		if (indexes.size() > 0) {
			for (int j = 0; j < indexes.size() - 1; j++) {
				neighbor_ind = indexes[j + 1] - indexes[j];
				answ.push_back(neighbor_ind);
			}
		}
		std::sort(answ.begin(), answ.end());
		if (num_of_symb == 1 && answ_of_one_symb != -1) {
			std::cout << answ_of_one_symb << '\n';
		}
		else if (num_of_symb == 1 && answ_of_one_symb == -1) {
			std::cout << 0 << '\n';
		}
		else if (num_of_symb > 1 && indexes.size() == 0) {
			std::cout << 0 << '\n';
		}
		else {
			std::cout << answ.back() << '\n';
		}
	}
}
