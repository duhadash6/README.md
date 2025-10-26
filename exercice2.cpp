#include <iostream>
using namespace std;

int etPair(int n) {
    return (n % 2 == 0);
}

int estMultiple3(int n) {
    return (n % 3 == 0);
}

int main() {
    int n;
    cout << "Donnez un entier : ";
    cin >> n;

    if (etPair(n))
        cout << "Il est pair" << endl;
    if (estMultiple3(n))
        cout << "Il est multiple de 3" << endl;
    if (etPair(n) && estMultiple3(n))
        cout << "Il est divisible par 6" << endl;

    return 0;
}
