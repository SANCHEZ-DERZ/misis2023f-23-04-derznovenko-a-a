#include <iostream>
#include <vector>
int main() {
	int t = 0;
	int n = 0;
	int m = 0;
	int sx = 0;
	int sy = 0;
	int d = 0;
	std::cin >> t;
	std::vector <int> l(t);
	for (int i = 0; i < t; i++) {
		std::cin >> n >> m >> sx >> sy >> d;
		//if (1 + d >= n || 1 + d >= m || ((m/2+1) == sx && (n/2+1) == sy && sy + d >= n && sx + d >= m)) {
		if (((sx + d >= n) && (sx - d <= 1)) || ((sy + d >= m) && (sy - d <= 1)) || ((sx + d >= n) && (sy + d >= m)) || ((sy - d <= 1) && (sx - d <= 1))) {
			l[i] = -1;
		}
		else {
			l[i] = n + m - 2;
		}
	}
	for (int i = 0; i < t; i++) {
		std::cout << l[i] << '\n';
	}
}
