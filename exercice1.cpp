#include <iostream>
using namespace std;

void compteurAppel() {
    static int compteur = 0; // garde la valeur entre les appels
    compteur++;
    cout << "appel numero " << compteur << endl;
}

int main() {
    compteurAppel();
    compteurAppel();
    compteurAppel();
    compteurAppel();
    return 0;
}
