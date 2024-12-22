#include <stdio.h>

/* Sujet : Écrire un programme qui permet de saisir une heure (h : min : s). Le 
programme affiche l’heure qu’il fera après une (1) seconde.*/


int main() 
{
	//	Declaration des variables
    int heures, minutes, secondes;

    // Demande à l'utilisateur de saisir l'heure
    printf("Entrez l'heure (hh mm ss) : ");
    scanf("%d %d %d", &heures, &minutes, &secondes);

    // Ajoute une seconde
    secondes++;

    // Gère le dépassement des secondes
    if (secondes == 60)
	 {
        secondes = 0;
        minutes++;
     }

    // Gère le dépassement des minutes
    if (minutes == 60) 
	 {
        minutes = 0;
        heures++;
     }

    // Gère le dépassement des heures
    if (heures == 24) 
	 {
        heures = 0;
     }

    // Affiche l'heure après une seconde
    printf("L'heure après une seconde sera : %02d:%02d:%02d\n", heures, minutes, secondes);

    return 0;
}
