#include <stdio.h>
#include <stdbool.h>

/*Sujet :  Écrire un programme qui permet de saisir un indice de mois et une année. Le 
programme affiche le nombre de jours du mois. (en utilisant IF)*/



int main()
{
//	Declaration des Variables 
    int mois, annee;
    int jours;

    // Demande à l'utilisateur de saisir un indice de mois et une année
    printf("\\t Veuillez Entrez un indice de mois (1-12) et une année : ");
    scanf("%d %d", &mois, &annee);

    // Détermine le nombre de jours du mois
    if (mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12) {
        jours = 31;
    } else if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
        jours = 30;
    } else if (mois == 2) {
        if (annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0) {
            jours = 29;
        } else {
            jours = 28;
        }
    } else {
        printf("\n\tMois invalide.\n");
        return 1;
    }

    // Affiche le nombre de jours du mois
    printf("\n\tLe mois %d de l'année %d a %d jours.\n", mois, annee, jours);

    return 0;
}
