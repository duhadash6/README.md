#include <iostream>
using namespace std;

// Fonction récursive pour générer toutes les permutations
void permutations(char* chaine, int debut, int fin) {
    // Cas de base : quand il ne reste qu'un caractère
    if (debut == fin) {
        cout << chaine << endl;
    } else {
        // Pour chaque position dans la sous-chaîne
        for (int i = debut; i <= fin; i++) {
            // Échange le caractère courant avec celui à la position début
            char temp = chaine[debut];
            chaine[debut] = chaine[i];
            chaine[i] = temp;
            
            // Appel récursif pour le reste de la chaîne
            permutations(chaine, debut + 1, fin);
            
            // Retour à l'état précédent (backtracking)
            temp = chaine[debut];
            chaine[debut] = chaine[i];
            chaine[i] = temp;
        }
    }
}

// Fonction wrapper pour faciliter l'utilisation
void afficherPermutations(char* chaine) {
    // Calcul de la longueur de la chaîne
    int longueur = 0;
    while (chaine[longueur] != '\0') {
        longueur++;
    }
    
    if (longueur > 0) {
        permutations(chaine, 0, longueur - 1);
    }
}

int main() {
    char chaine1[] = "ABC";
    cout << "Permutations de \"" << chaine1 << "\":" << endl;
    afficherPermutations(chaine1);
    
    cout << "\nPermutations de \"12\":" << endl;
    char chaine2[] = "12";
    afficherPermutations(chaine2);
    
    return 0;
}