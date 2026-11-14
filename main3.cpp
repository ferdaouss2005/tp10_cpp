
#include <iostream>
#include <string>
using namespace std;

class Livre {
private:
    string titre;
    float prix;

public:
    // Constructeur par defaut
    Livre() {
        titre = "";
        prix = 0;
    }

    // Methode pour saisir les informations
    void saisir() {
        cout << "Donner le titre du livre : ";
        getline(cin, titre);

        cout << "Donner le prix du livre : ";
        cin >> prix;
        cin.ignore();
    }

    // Methode pour afficher les informations
    void afficher() {
        cout << "Titre : " << titre << endl;
        cout << "Prix : " << prix << " DH" << endl;
    }
};

int main() {
    int n;

    cout << "Combien de livres voulez-vous creer ? ";
    cin >> n;
    cin.ignore();

    if (n <= 0) {
        cout << "Nombre invalide !" << endl;
        return 1;
    }

    // Allocation dynamique du tableau
    Livre* livres = new Livre[n];

    // Saisie des livres
    for (int i = 0; i < n; i++) {
        cout << "\n--- Livre " << i + 1 << " ---" << endl;
        livres[i].saisir();
    }

    // Affichage des livres
    cout << "\n===== Liste des livres =====" << endl;

    for (int i = 0; i < n; i++) {
        cout << "\nLivre " << i + 1 << " :" << endl;
        livres[i].afficher();
    }

    // Liberation de la memoire
    delete[] livres;
    livres = nullptr;

    cout << "\nMemoire liberee avec succes !" << endl;

    return 0;
}



