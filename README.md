# Jeu de devinette de nombre en C++

Petit jeu console développé en C++ dans lequel le joueur doit retrouver un nombre choisi aléatoirement par l'ordinateur.

## Fonctionnalités

- Génération aléatoire d'un nombre entre 1 et 100
- Saisie des tentatives du joueur
- Indications :
  - Trop bas
  - Trop haut
  - Bonne réponse
- Compteur du nombre d'essais

## Exemple d'utilisation

```
Bienvenue dans le jeu de la devinette de nombre !

J'ai choisi un nombre entre 1 et 100 (63 ici par exemple). Pouvez-vous le deviner ?

Entrez votre tentative : 50

Trop bas ! Essayez encore.

Entrez votre tentative : 75

Trop haut ! Essayez encore.

Entrez votre tentative : 63

Félicitations ! Vous avez deviné le nombre 63 en 3 essais.
```

## Règles

- L'ordinateur choisit un nombre aléatoire entre 1 et 100.
- Le joueur propose un nombre.
- Le programme indique si le nombre recherché est plus grand ou plus petit.
- La partie continue jusqu'à trouver le bon nombre.

## Compilation

Avec g++ :

```bash
g++ devinette.cpp -o devinette
```

Lancer le programme :

Windows :

```bash
devinette.exe
```

Linux/macOS :

```bash
./devinette
```

## Concepts C++ utilisés

Ce projet permet de pratiquer :

- Les variables
- Les boucles `do while`
- Les conditions `if / else`
- Les nombres aléatoires avec `rand()`
- Les compteurs
- Les entrées utilisateur avec `cin`
- Les sorties avec `cout`

## Structure du projet

```
JeuDevinette/
│
├── devinette.cpp
└── README.md
```

## Objectif du projet

Projet réalisé pour apprendre les bases de la logique de programmation en C++.

Il introduit les premières mécaniques utilisées dans les jeux :
- boucle principale
- interaction utilisateur
- règles de victoire
- progression du joueur
