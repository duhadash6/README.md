#include <iostream>
#include <cmath>
using namespace std;

class Complexe {
private:
    double reel, imaginaire;

public:
    // Constructeurs
    Complexe(double r = 0, double i = 0) : reel(r), imaginaire(i) {}

    // Getters
    double getReel() const { return reel; }
    double getImaginaire() const { return imaginaire; }

    // Setteurs
    void setReel(double r) { reel = r; }
    void setImaginaire(double i) { imaginaire = i; }

    // Affichage
    void afficher() const {
        if (imaginaire >= 0)
            cout << reel << " + " << imaginaire << "i";
        else
            cout << reel << " - " << -imaginaire << "i";
    }

    // Opérations
    bool egal(const Complexe& c) const {
        return (reel == c.reel && imaginaire == c.imaginaire);
    }

    Complexe addition(const Complexe& c) const {
        return Complexe(reel + c.reel, imaginaire + c.imaginaire);
    }

    Complexe soustraction(const Complexe& c) const {
        return Complexe(reel - c.reel, imaginaire - c.imaginaire);
    }

    Complexe multiplication(const Complexe& c) const {
        return Complexe(reel * c.reel - imaginaire * c.imaginaire,
                       reel * c.imaginaire + imaginaire * c.reel);
    }

    Complexe division(const Complexe& c) const {
        double denominateur = c.reel * c.reel + c.imaginaire * c.imaginaire;
        if (denominateur == 0) {
            cout << "Erreur: Division par zéro!" << endl;
            return Complexe(0, 0);
        }
        return Complexe((reel * c.reel + imaginaire * c.imaginaire) / denominateur,
                       (imaginaire * c.reel - reel * c.imaginaire) / denominateur);
    }
};

// Fonction pour afficher le menu
void afficherMenu() {
    cout << "\n=== CALCULATRICE DE NOMBRES COMPLEXES ===" << endl;
    cout << "1. Égalité" << endl;
    cout << "2. Addition" << endl;
    cout << "3. Soustraction" << endl;
    cout << "4. Multiplication" << endl;
    cout << "5. Division" << endl;
    cout << "6. Quitter" << endl;
    cout << "Choix: ";
}

int main() {
    Complexe c1, c2, resultat;
    double re, im;
    int choix;

    do {
        // Saisie des nombres complexes
        cout << "\n--- Saisie du premier nombre complexe ---" << endl;
        cout << "Partie réelle: ";
        cin >> re;
        cout << "Partie imaginaire: ";
        cin >> im;
        c1 = Complexe(re, im);

        cout << "\n--- Saisie du deuxième nombre complexe ---" << endl;
        cout << "Partie réelle: ";
        cin >> re;
        cout << "Partie imaginaire: ";
        cin >> im;
        c2 = Complexe(re, im);

        // Affichage des nombres saisis
        cout << "\nNombres saisis:" << endl;
        cout << "c1 = "; c1.afficher(); cout << endl;
        cout << "c2 = "; c2.afficher(); cout << endl;

        afficherMenu();
        cin >> choix;

        switch (choix) {
            case 1: // Égalité
                cout << "\n--- ÉGALITÉ ---" << endl;
                cout << "c1 = "; c1.afficher(); 
                cout << " et c2 = "; c2.afficher();
                cout << " sont " << (c1.egal(c2) ? "ÉGAUX" : "DIFFÉRENTS") << endl;
                break;

            case 2: // Addition
                cout << "\n--- ADDITION ---" << endl;
                resultat = c1.addition(c2);
                c1.afficher(); cout << " + "; c2.afficher(); 
                cout << " = "; resultat.afficher(); cout << endl;
                break;

            case 3: // Soustraction
                cout << "\n--- SOUSTRACTION ---" << endl;
                resultat = c1.soustraction(c2);
                c1.afficher(); cout << " - "; c2.afficher(); 
                cout << " = "; resultat.afficher(); cout << endl;
                break;

            case 4: // Multiplication
                cout << "\n--- MULTIPLICATION ---" << endl;
                resultat = c1.multiplication(c2);
                c1.afficher(); cout << " * "; c2.afficher(); 
                cout << " = "; resultat.afficher(); cout << endl;
                break;

            case 5: // Division
                cout << "\n--- DIVISION ---" << endl;
                resultat = c1.division(c2);
                c1.afficher(); cout << " / "; c2.afficher(); 
                cout << " = "; resultat.afficher(); cout << endl;
                break;

            case 6:
                cout << "Au revoir!" << endl;
                break;

            default:
                cout << "Choix invalide!" << endl;
        }

        if (choix != 6) {
            cout << "\nAppuyez sur Entrée pour continuer...";
            cin.ignore();
            cin.get();
        }

    } while (choix != 6);

    return 0;
}