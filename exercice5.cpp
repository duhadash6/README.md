#include <iostream>
using namespace std;

int main() {
    // 1. Déclare un entier a
    int a = 10;
    
    // 2. Déclare une référence vers cet entier ref_a
    int& ref_a = a;
    
    // 3. Déclare un pointeur vers cet entier p_a
    int* p_a = &a;
    
    // 4. Affiche les variables, leurs adresses, la valeur pointée
    cout << "Variable a:" << endl;
    cout << "  Valeur: " << a << endl;
    cout << "  Adresse: " << &a << endl << endl;
    
    cout << "Référence ref_a:" << endl;
    cout << "  Valeur: " << ref_a << endl;
    cout << "  Adresse: " << &ref_a << endl << endl;
    
    cout << "Pointeur p_a:" << endl;
    cout << "  Valeur (adresse stockée): " << p_a << endl;
    cout << "  Adresse du pointeur: " << &p_a << endl;
    cout << "  Valeur pointée: " << *p_a << endl;
    
    return 0;
}