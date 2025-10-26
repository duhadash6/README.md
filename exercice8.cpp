#include <iostream>
#include <string>
using namespace std;

class Voiture {
private:
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    // 1. Constructeur par défaut
    Voiture() {
        marque = "Inconnue";
        modele = "Inconnu";
        annee = 2000;
        kilometrage = 0.0f;
        vitesse = 0.0f;
        cout << "Voiture créée avec le constructeur par défaut" << endl;
    }

    // 2. Constructeur avec paramètres
    Voiture(string m, string mod, int a, float km, float v) {
        marque = m;
        modele = mod;
        annee = a;
        kilometrage = km;
        vitesse = v;
        cout << "Voiture créée avec le constructeur paramétré" << endl;
    }

    // 3. Méthode accelérer
    void accelérer(float valeur) {
        vitesse += valeur;
        cout << "Accélération de " << valeur << " km/h. Vitesse actuelle: " << vitesse << " km/h" << endl;
    }

    // 4. Méthode freiner
    void freiner(float valeur) {
        vitesse -= valeur;
        // Empêcher la vitesse de devenir négative
        if (vitesse < 0) {
            vitesse = 0;
        }
        cout << "Freinage de " << valeur << " km/h. Vitesse actuelle: " << vitesse << " km/h" << endl;
    }

    // 5. Méthode afficherInfo
    void afficherInfo() {
        cout << "\n=== Informations de la voiture ===" << endl;
        cout << "Marque: " << marque << endl;
        cout << "Modèle: " << modele << endl;
        cout << "Année: " << annee << endl;
        cout << "Kilométrage: " << kilometrage << " km" << endl;
        cout << "Vitesse: " << vitesse << " km/h" << endl;
        cout << "==================================" << endl;
    }

    // 6. Méthode avancer
    void avancer(float distance) {
        kilometrage += distance;
        cout << "La voiture a avancé de " << distance << " km. Kilométrage total: " << kilometrage << " km" << endl;
    }

    // 7. Destructeur
    ~Voiture() {
        cout << "La voiture " << marque << " " << modele << " est détruite." << endl;
    }
};