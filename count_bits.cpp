#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int count = 0;

	while(n > 0) {
		n &= n-1;
		count++;
	}

	cout << "count = " << count << "\n";

	return 0;
}