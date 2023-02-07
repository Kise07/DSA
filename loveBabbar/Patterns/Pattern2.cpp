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
			// print i like 1 2 3 4 5
			cout << i;
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}
}
			
