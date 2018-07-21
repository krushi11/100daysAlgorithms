#include <bits/stdc++.h>
using namespace std;

int main() {
	string input;
	int len;
	int pivot_pos;
	char pivot;

	cin >> input;
	cout << "input : " << input << "\n";
	
	len = input.length();

	for(int i = len - 2; i >= 0; i--) {
		if(input[i] < input[i + 1]) {
			pivot = input[i];
			pivot_pos = i;
			break;
		}
	}

	cout << "pivot : " << pivot << "\n";
	cout << "pivot_pos : " << pivot_pos << "\n";

	for(int i = len - 1; i > pivot_pos; i--) {
		if(pivot < input[i]) {
			swap(input[pivot_pos], input[i]);
			break;
		}
	}

	cout << "after swapping pivot : " << input << "\n";
	string transformed = input.substr(pivot_pos + 1, len - 1);

	reverse(transformed.begin(), transformed.end());
	input.replace(pivot_pos + 1, transformed.length(), transformed);

	cout << "reversed transformed input : " << input << "\n";

	return 0;
}