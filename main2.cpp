
#include <iostream>
#include <string>
using namespace std;

class Personne {
private:
    string nom;
    int age;

public:
    // Constructeur
    Personne(string n, int a) {
        nom = n;
        age = a;
    }

    // Methode d'affichage
    void afficher() {
        cout << "Nom : " << nom << endl;
        cout << "Age : " << age << " ans" << endl;
    }
};

int main() {
    // Allocation dynamique avec new
    Personne* p = new Personne("Ferdaouss", 21);

    // Affichage des donnees
    cout << "Informations de la personne :" << endl;
    p->afficher();

    // Liberation de la memoire
    delete p;
    p = nullptr;

    cout << "\nMemoire liberee avec succes !" << endl;

    return 0;
}
