#include <stdio.h>

/* Sujet: Avec des IF puis avec SWITCH, écrire un programme qui permet de saisir un 
entier. 
Le programme doit afficher selon la valeur saisie : 
	 0 : NUL 
	 1 ou 2 : PETIT 
	 3 : MOYEN 
	 4 ou 5 : GRAND 
	 au delà de 5 : HORS NORME */  // CAS IF

int main() {
    int nombre;

    // Demande à l'utilisateur de saisir un entier
    printf("Entrez un entier : ");
    scanf("%d", &nombre);

    // Vérifie la valeur saisie et affiche le message correspondant
    if (nombre == 0)
	{
        printf("NUL\n");
    }
	else if (nombre == 1 || nombre == 2)
	{
        printf("PETIT\n");
    }
	else if (nombre == 3) 
	{
        printf("MOYEN\n");
    } 
	else if (nombre == 4 || nombre == 5) 
	{
        printf("GRAND\n");
    } 
	else if (nombre > 5) 
	{
        printf("HORS NORME\n");
    } 
	else 
	{
        printf("Valeur non prise en charge\n");
    }

    return 0;
}
