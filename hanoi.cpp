#include <iostream> 
#include <string> 
using namespace std; 

void hanoi(int towerHeight, string left, string right, string middle) { 
    if(towerHeight > 0) { 
        hanoi(towerHeight - 1, left, middle, right); 
        cout << left << " -> " << right << "\n"; 
        hanoi(towerHeight - 1, middle, right, left); 
    } 
} 

int main() { 
    int towerHeight; 
    cin >> towerHeight; 
    cout << "tower height : " << towerHeight << "\n"; 

    hanoi(towerHeight, "L", "R", "M"); 

    return 0; 
}