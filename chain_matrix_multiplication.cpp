#include <iostream> 
#include <limits> 
using namespace std; 

int min(int a, int b) { 
    return a > b ? b : a; 
} 

int main() { 
    int n; 
    cin >> n; 
    int a[n][2]; 
    int m[n][n]; 

    for(int i = 0; i < n; i++) { 
        cin >> a[i][0] >> a[i][1]; 
    }
    
    for(int i = 0; i < n; i++) {
        m[i][i] = 0;
    }

    for(int l = 1; l < n; l++) { 
        for(int i = 0; i < n-l+1; i++) {
            int j = i+l;
            m[i][j] = numeric_limits<int>::max(); 

            for(int k = i; k < j; k++) { 
                m[i][j] = min(m[i][j], m[i][k] + m[k+1][j] + a[i][0]*a[k][1]*a[j][1]); 
            } 
        } 
    }

    cout << "Minimum cost is " << m[0][n-1] << "\n";
    
    return 0; 
}