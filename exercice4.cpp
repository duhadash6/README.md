#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    
    int* tab = new int[n];

    cout << "Entrez " << n << " entiers : " << endl;
    for (int i = 0; i < n; i++)
        cin >> tab[i];

 
    int* carres = new int[n];
    for (int i = 0; i < n; i++)
        carres[i] = tab[i] * tab[i];

   
    delete[] tab;

    cout << "Valeurs du tableau des carrés : " << endl;
    for (int i = 0; i < n; i++)
        cout << carres[i] << " ";

   
    delete[] carres;

    return 0;
}
