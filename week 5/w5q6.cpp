#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], sum[10][10], prod[10][10], r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    
    cout << "Enter Matrix A:\n";
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) cin >> a[i][j];
    
    cout << "Enter Matrix B:\n";
    for(int i=0; i<r; i++) for(int j=0; j<c; j++) cin >> b[i][j];
    
    
    cout << "Matrix Addition:\n";
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    
    
    cout << "Matrix Multiplication:\n"; 
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            prod[i][j] = 0;
            for(int k=0; k<c; k++) {
                prod[i][j] += a[i][k] * b[k][j];
            }
            cout << prod[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
