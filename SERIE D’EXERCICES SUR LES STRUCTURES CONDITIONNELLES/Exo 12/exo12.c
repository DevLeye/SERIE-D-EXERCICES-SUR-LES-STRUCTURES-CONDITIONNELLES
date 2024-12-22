#include <stdio.h>
#include <stdbool.h>

/* Sujet : Écrire un programme qui permet de saisir une date (jour, mois et année). Le 
programme détermine et affiche s’il s’agit d’une date valide. */

// Fonction pour vérifier si une année est bissextile
bool estBissextile(int annee) {
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

// Fonction pour vérifier si une date est valide
bool dateValide(int jour, int mois, int annee) {
    if (annee < 1 || mois < 1 || mois > 12 || jour < 1) {
        return false;
    }

    int joursParMois[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Ajuster pour les années bissextiles
    if (mois == 2 && estBissextile(annee)) {
        joursParMois[1] = 29;
    }

    if (jour > joursParMois[mois - 1]) {
        return false;
    }

    return true;
}

int main() {
    int jour, mois, annee;

    // Demande à l'utilisateur de saisir une date
    printf("Entrez une date (jour mois annee) : ");
    scanf("%d %d %d", &jour, &mois, &annee);

    // Vérifie si la date est valide
    if (dateValide(jour, mois, annee)) {
        printf("La date %02d/%02d/%04d est valide.\n", jour, mois, annee);
    } else {
        printf("La date %02d/%02d/%04d n'est pas valide.\n", jour, mois, annee);
    }

    return 0;
}
