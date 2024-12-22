#include <stdio.h>
#include <stdbool.h>

/*Sujet :  Écrire un programme qui permet de saisir un indice de mois et une année. Le 
programme affiche le nombre de jours du mois. (en utilisant SWITCH)*/
int main() 
{
//	Declaration des Variables
    int mois, annee;
    int jours;

    // Demande à l'utilisateur de saisir un indice de mois et une année
    printf("\n\t Veuillez Entrez un indice de mois (1-12) et une année : ");
    scanf("%d %d", &mois, &annee);

    // Détermine le nombre de jours du mois
    switch (mois) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            jours = 31;
            break;
        case 4: case 6: case 9: case 11:
            jours = 30;
            break;
        case 2:
            if (annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0) {
                jours = 29;
            } else {
                jours = 28;
            }
            break;
        default:
            printf("\n\t Mois invalide.\n");
            return 1;
    }

    // Affiche le nombre de jours du mois
    printf("\n\tLe mois %d de l'année %d a %d jours.\n", mois, annee, jours);

    return 0;
}
