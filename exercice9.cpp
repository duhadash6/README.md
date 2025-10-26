#include <iostream>
#include <cmath>
using namespace std;

class vecteur3d {
private:
    float x, y, z;

public:
    // Constructeur avec valeurs par défaut
    vecteur3d(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

    // Fonction d'affichage
    void afficher() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    // GETTERS pour accéder aux composantes
    float getX() const { return x; }
    float getY() const { return y; }
    float getZ() const { return z; }

    // 1. Somme de 2 vecteurs - retour par valeur
    vecteur3d somme(const vecteur3d& v) const {
        return vecteur3d(x + v.x, y + v.y, z + v.z);
    }

    // 2. Produit scalaire
    float produitScalaire(const vecteur3d& v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    // 3. Vérifier si deux vecteurs coïncident
    bool coincide(const vecteur3d& v) const {
        return (x == v.x && y == v.y && z == v.z);
    }

    // 4. Norme du vecteur
    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }

    // 5. normax - Version retour par valeur
    static vecteur3d normaxValeur(const vecteur3d& v1, const vecteur3d& v2) {
        return (v1.norme() > v2.norme()) ? v1 : v2;
    }

    // 5. normax - Version retour par adresse
    static vecteur3d* normaxAdresse(vecteur3d* v1, vecteur3d* v2) {
        return (v1->norme() > v2->norme()) ? v1 : v2;
    }

    // 5. normax - Version retour par référence
    static vecteur3d& normaxReference(vecteur3d& v1, vecteur3d& v2) {
        return (v1.norme() > v2.norme()) ? v1 : v2;
    }
};

// Programme de test
int main() {
    cout << "=== TEST DE LA CLASSE VECTEUR3D ===" << endl;

    // Création de vecteurs
    vecteur3d v1(1, 2, 3);
    vecteur3d v2(4, 5, 6);
    vecteur3d v3(1, 2, 3); // Identique à v1

    cout << "\nVecteur 1: ";
    v1.afficher();
    cout << "Vecteur 2: ";
    v2.afficher();
    cout << "Vecteur 3: ";
    v3.afficher();

    // Test somme
    cout << "\n--- SOMME ---" << endl;
    vecteur3d somme = v1.somme(v2);
    cout << "v1 + v2 = ";
    somme.afficher();

    // Test produit scalaire
    cout << "\n--- PRODUIT SCALAIRE ---" << endl;
    float ps = v1.produitScalaire(v2);
    cout << "v1 . v2 = " << ps << endl;

    // Test coïncidence
    cout << "\n--- COÏNCIDENCE ---" << endl;
    cout << "v1 et v2 coïncident: " << (v1.coincide(v2) ? "OUI" : "NON") << endl;
    cout << "v1 et v3 coïncident: " << (v1.coincide(v3) ? "OUI" : "NON") << endl;

    // Test norme
    cout << "\n--- NORME ---" << endl;
    cout << "Norme de v1: " << v1.norme() << endl;
    cout << "Norme de v2: " << v2.norme() << endl;

    // Test normax - les 3 versions
    cout << "\n--- NORMAX ---" << endl;
    
    // Version valeur
    vecteur3d maxValeur = vecteur3d::normaxValeur(v1, v2);
    cout << "Version valeur - Vecteur avec plus grande norme: ";
    maxValeur.afficher();
    
    // Version adresse
    vecteur3d* maxAdresse = vecteur3d::normaxAdresse(&v1, &v2);
    cout << "Version adresse - Vecteur avec plus grande norme: ";
    maxAdresse->afficher();
    
    // Version référence
    vecteur3d& maxReference = vecteur3d::normaxReference(v1, v2);
    cout << "Version référence - Vecteur avec plus grande norme: ";
    maxReference.afficher();

    return 0;
}