#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	// Outer loop
	int i = 1;
	while(i <= n) {

		// 1st Triangle: Space print
		int space = n - i;
		while(space) {

			cout << "  ";
			space = space - 1;
		}

		// 2nd Triangle
		int j = 1;
		while(j <= i) {

			cout << j << " ";
			j = j + 1;
		}

		// 3rd Triangle
		int k = i - 1;
		while(k) {

			cout << k << " ";
			k = k - 1;
		}

		cout << endl;
		i = i + 1;
	}
} 
