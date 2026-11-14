
#include <iostream>
using namespace std;

int main() {
    int n;

    // Saisie de la taille
    cout << "Donner la taille du tableau : ";
    cin >> n;

    if (n <= 0) {
        cout << "Taille invalide !" << endl;
        return 1;
    }

    // Allocation dynamique
    int* tableau = new int[n];

    // Saisie des valeurs
    cout << "\nSaisir les elements du tableau :" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }

    // Affichage des valeurs
    cout << "\nLes elements du tableau sont :" << endl;

    for (int i = 0; i < n; i++) {
        cout << tableau[i] << " ";
    }

    cout << endl;

    // Liberation de la memoire
    delete[] tableau;
    tableau = nullptr;

    cout << "\nMemoire liberee avec succes !" << endl;

    return 0;
}




