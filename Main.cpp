#include <iostream>
#include <cmath>
using namespace std; 

int main() {
	int nombreMystere = rand() % 100 + 1; // Nombre aléatoire entre 1 et 10
	int tentative;
	int essais = 0;
	cout << "Bienvenue dans le jeu de la devinette de nombre !" << endl;
	cout << "J'ai choisi un nombre entre 1 et 100. Pouvez-vous le deviner ?" << endl;
	do {
		cout << "Entrez votre tentative: ";
		cin >> tentative;
		essais++;
		if (tentative < nombreMystere) {
			cout << "Trop bas ! Essayez encore." << endl;
		} else if (tentative > nombreMystere) {
			cout << "Trop haut ! Essayez encore." << endl;
		} else {
			cout << "Félicitations ! Vous avez deviné le nombre " << nombreMystere << " en " << essais << " essais." << endl;
		}
		setlocale(LC_ALL, "");
	} while (tentative != nombreMystere);
	return 0;
}