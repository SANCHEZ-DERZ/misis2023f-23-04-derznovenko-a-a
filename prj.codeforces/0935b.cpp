#include <iostream>
#include <string>
int main() {
	int count_of_moves = 0;
	std::string moves;
	std::cin >> count_of_moves >> moves;
	int x = 0;
	int y = 0;
	int answ = 0;
	for (int i = 0; i < count_of_moves - 1; i++) {
		if (moves[i] == 'U') {
			y += 1;
		}
		else {
			x += 1;
		}
		if (x == y) {
			if (moves[i] == moves[i + 1]) {
				answ += 1;
			}
		}
	}
	std::cout << answ;
}