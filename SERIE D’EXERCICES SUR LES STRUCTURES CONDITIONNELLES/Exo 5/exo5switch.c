#include <stdio.h>

/* Sujet: Avec des IF puis avec SWITCH, écrire un programme qui permet de saisir un 
entier. 
Le programme doit afficher selon la valeur saisie : 
	 0 : NUL 
	 1 ou 2 : PETIT 
	 3 : MOYEN 
	 4 ou 5 : GRAND 
	 au delà de 5 : HORS NORME */  // CAS SWITCH

int main() {
	// Declaration de Variable	
    int nombre;

    // Demande à l'utilisateur de saisir un entier
    printf("Entrez un entier : ");
    scanf("%d", &nombre);

    // Vérifie la valeur saisie et affiche le message correspondant
    switch (nombre) {
        case 0:
            printf("NUL\n");
            break;
        case 1:
        case 2:
            printf("PETIT\n");
            break;
        case 3:
            printf("MOYEN\n");
            break;
        case 4:
        case 5:
            printf("GRAND\n");
            break;
        default:
            if (nombre > 5) {
                printf("HORS NORME\n");
            } else {
                printf("Valeur non prise en charge\n");
            }
            break;
    }

    return 0;
}
