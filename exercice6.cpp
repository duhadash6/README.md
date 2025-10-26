#include <iostream>
using namespace std;

// Version avec pointeurs (méthode C)
void incrementer(int* ptr) {
    (*ptr)++;
}

void permuter(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Version avec références (méthode C++)
void incrementer(int& ref) {
    ref++;
}

void permuter(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    //  pointeurs
    cout << "=== Version avec pointeurs ===" << endl;
    int x = 5, y = 10;
    cout << "Avant: x = " << x << ", y = " << y << endl;
    
    incrementer(&x);
    cout << "Après incrementer(&x): x = " << x << endl;
    
    permuter(&x, &y);
    cout << "Après permuter(&x, &y): x = " << x << ", y = " << y << endl;
    
    // références
    cout << "\n=== Version avec références ===" << endl;
    int a = 5, b = 10;
    cout << "Avant: a = " << a << ", b = " << b << endl;
    
    incrementer(a);
    cout << "Après incrementer(a): a = " << a << endl;
    
    permuter(a, b);
    cout << "Après permuter(a, b): a = " << a << ", b = " << b << endl;
    
    return 0;
}