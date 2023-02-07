#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	// Outer loop
	int i = 1;
	while(i <= n) {

		// Inner loop
		int j = 1;
		while(j <= n) {

			cout << "*";
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}
}
