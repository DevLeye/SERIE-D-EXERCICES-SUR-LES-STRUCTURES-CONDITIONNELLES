#include <stdio.h>

/* Sujet : Écrire un programme qui permet de saisir un entier. Le programme détermine 
et affiche la valeur absolue. */

int main() {
	//	Declaration de variable
    int nombre;
    // Demande à l'utilisateur de saisir un entier
    printf("\n\aVeuillez Saisir un entier : ");
    scanf("%d", &nombre);

    // Vérifie et affiche la valeur absolue
    if (nombre < 0) {
        printf("\n\tLa valeur absolue de %d est %d\n", nombre, -nombre);
    } 
	else
	{
        printf("\n\tLa valeur absolue de %d est %d\n", nombre, nombre);
    }

    return 0;
}
