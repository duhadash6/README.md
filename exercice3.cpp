#include <iostream>
using namespace std;

int main() {
    int tab[10];
    cout << "Entrez 10 nombres entiers : " << endl;

    for (int i = 0; i < 10; i++)
        cin >> tab[i];

    int max = tab[0];
    int min = tab[0];

    for (int i = 1; i < 10; i++) {
        if (tab[i] > max) max = tab[i];
        if (tab[i] < min) min = tab[i];
    }

    cout << "Le plus grand nombre est : " << max << endl;
    cout << "Le plus petit nombre est : " << min << endl;

    return 0;
}
// avec les pointeurs 

#include <iostream>
using namespace std;

int main() {
    int tab[10];
    cout << "Entrez 10 nombres entiers : " << endl;

    for (int i = 0; i < 10; i++)
        cin >> *(tab + i); // équivaut à tab[i]

    int *p = tab;
    int max = *p;
    int min = *p;

    for (int i = 1; i < 10; i++) {
        if (*(p + i) > max) max = *(p + i);
        if (*(p + i) < min) min = *(p + i);
    }

    cout << "Le plus grand nombre est : " << max << endl;
    cout << "Le plus petit nombre est : " << min << endl;

    return 0;
}
