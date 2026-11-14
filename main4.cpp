
#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Contact {
private:
    string nom;
    string telephone;
    string email;

public:
    // Constructeur
    Contact(string n, string t, string e) {
        nom = n;
        telephone = t;
        email = e;
    }

    // Getter du nom
    string getNom() {
        return nom;
    }

    // Afficher les informations
    void afficher() {
        cout << "Nom : " << nom << endl;
        cout << "Telephone : " << telephone << endl;
        cout << "Email : " << email << endl;
    }
};

// Ajouter un contact
void ajouterContact(Contact** carnet, int& nbContacts, int capacite) {
    if (nbContacts >= capacite) {
        cout << "Le carnet est plein !" << endl;
        return;
    }

    string nom, telephone, email;

    cout << "Donner le nom : ";
    getline(cin, nom);

    cout << "Donner le telephone : ";
    getline(cin, telephone);

    cout << "Donner l'email : ";
    getline(cin, email);

    carnet[nbContacts] = new Contact(nom, telephone, email);
    nbContacts++;

    cout << "Contact ajoute avec succes !" << endl;
}

// Afficher tous les contacts
void afficherContacts(Contact** carnet, int nbContacts) {
    if (nbContacts == 0) {
        cout << "Le carnet est vide !" << endl;
        return;
    }

    cout << "\n===== Liste des contacts =====" << endl;

    for (int i = 0; i < nbContacts; i++) {
        cout << "\nContact " << i + 1 << " :" << endl;
        carnet[i]->afficher();
    }
}

// Supprimer un contact par son nom
void supprimerContact(Contact** carnet, int& nbContacts, string nom) {
    for (int i = 0; i < nbContacts; i++) {
        if (carnet[i]->getNom() == nom) {

            delete carnet[i];

            // Decaler les contacts suivants
            for (int j = i; j < nbContacts - 1; j++) {
                carnet[j] = carnet[j + 1];
            }

            nbContacts--;
            carnet[nbContacts] = nullptr;

            cout << "Contact supprime avec succes !" << endl;
            return;
        }
    }

    cout << "Contact introuvable !" << endl;
}

int main() {
    int capacite;

    cout << "Donner la capacite du carnet : ";
    cin >> capacite;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (capacite <= 0) {
        cout << "Capacite invalide !" << endl;
        return 1;
    }

    // Allocation dynamique du tableau de pointeurs
    Contact** carnet = new Contact*[capacite]();

    int nbContacts = 0;
    int choix;

    do {
        cout << "\n===== MENU CARNET D'ADRESSES =====" << endl;
        cout << "1. Ajouter un contact" << endl;
        cout << "2. Afficher les contacts" << endl;
        cout << "3. Supprimer un contact" << endl;
        cout << "0. Quitter" << endl;
        cout << "Votre choix : ";

        cin >> choix;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choix) {
            case 1:
                ajouterContact(carnet, nbContacts, capacite);
                break;

            case 2:
                afficherContacts(carnet, nbContacts);
                break;

            case 3: {
                string nom;
                cout << "Donner le nom du contact a supprimer : ";
                getline(cin, nom);

                supprimerContact(carnet, nbContacts, nom);
                break;
            }

            case 0:
                cout << "Fermeture du carnet..." << endl;
                break;

            default:
                cout << "Choix invalide !" << endl;
        }

    } while (choix != 0);

    // Liberer les objets Contact restants
    for (int i = 0; i < nbContacts; i++) {
        delete carnet[i];
    }

    // Liberer le tableau de pointeurs
    delete[] carnet;
    carnet = nullptr;

    cout << "Toute la memoire a ete liberee !" << endl;

    return 0;
}


