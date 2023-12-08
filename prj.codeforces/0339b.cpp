#include <iostream>
#include <vector>
int main() {
	int count_of_houses = 0;
	int deals = 0;
	long long count = 0;
	int number = 1;
	std::cin >> count_of_houses >> deals;
	std::vector<int> houses(deals);
	for (int i = 0; i < deals; i++) {
		std::cin >> houses[i];
	}
	count += houses[0] - number;
	for (int i = 0; i < deals-1; i++) {
		if (houses[i] < houses[i + 1]) {
			count += houses[i + 1] - houses[i];
		}
		else if (houses[i] == houses[i + 1]) {
			continue;
		}
		else {
			count += count_of_houses - houses[i] + 1 + houses[i + 1] - number;
		}
	}
	std::cout << count;
}
