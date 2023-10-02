#include <iostream>
#include <vector>
#include <algorithm>
int main() {
	int enter_data = 0;
	int num_of_places = 0;
	int comp = 0;
	int place = 0;
	bool check = false;
	std::vector<int> places;
	std::cin >> enter_data;
	for (int i = 0; i < enter_data; i++) {
		check = false;
		std::cin >> num_of_places >> comp;
		places.resize(num_of_places);
		for (int j = 0; j < num_of_places; j++) {
			std::cin >> places[j];
		}
		std::sort(places.begin(), places.end());
		if (places[0] != 1) {
			places.push_back(1);
			std::sort(places.begin(), places.end());
			comp -= 1;
		}
		if (comp == 0) {
			for (int j = 0; j < places.size()-1; j++) {
				if (places[j] != places[j + 1] - 1 && places[j] != places[j + 1]) {
					std::cout << places[j] << '\n';
					check = true;
				}
			}
			if (check == false) {
				std::cout << places.back() << '\n';
			}
		}
		for (int j = 0; j < places.size()-1; j++) {
			if (comp > 0) {
				if (places[j] != places[j + 1] - 1 && places[j] != places[j + 1]) {
					places.push_back(places[j] + 1);
					std::sort(places.begin(), places.end());
					comp -= 1;
				}
				if (comp == 0) {
					if (places[j] + 1 != places[j + 1]) {
						std::cout << places[j] + 1 << '\n';
					}
					else {
						std::cout << places[j + 2] << '\n';
					}
				}
			}
		}
		while (comp > 0) {
			places.push_back(places.back() + 1);
			comp -= 1;
			if (comp == 0) {
				std::cout << places.back() << '\n';
			}
		}
	}
}
