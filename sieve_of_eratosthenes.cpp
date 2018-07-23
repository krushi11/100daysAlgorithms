#include <iostream>
using namespace std;

void sieveOfEratosthenes(int n) {
	int isPrime[n+1];

	for(int i = 0; i <= n; i++) {
		isPrime[i] = 1;
	}

	for(int i = 2; i*i <= n; i++) {
		if(isPrime[i] == 1) {
			for(int j = i*2; j <= n; j+=i) {
				isPrime[j] = 0;
			}
		}
	}

	cout << "Prime numbers till " << n << " :\n";

	for(int i = 2; i <= n; i++) {
		if(isPrime[i] == 1) {
			cout << i << " ";
		}
	}

	cout << "\n";
}

int main() {
	int n;
	cin >> n;
	sieveOfEratosthenes(n);
	return 0;
}