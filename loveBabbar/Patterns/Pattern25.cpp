#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	// Outer loop
	int i = 1;
	while(i <= n) {

		// 1st Triangle:
		int j = n;
		while(j >= i) {
			// Use formula: `n - j + 1` for j++
			cout << n - j + 1 << " ";
			j = j - 1;
		}
		j = n;

		// 2nd Triangle
		int stars = 1;
		while(stars <= 2 * i - 2) {
			// Use formula: `2 * i - 2` for stars++ by 2
			cout << "*" << " ";
			stars = stars + 1;
		}

		// 3rd Triangle
		while(j >= i) {
			// Use formula: `j - i + 1` for j++ again!
			cout << j - i + 1 << " ";
			j = j - 1;
		}

		cout << endl;
		i = i + 1;
	}
}
