#include <stdio.h>

/* Sujet : Écrire un programme qui demande à l’utilisateur de saisir un nombre entier. 
Le programme l’informe si la valeur saisie est positive ou négative (​on laisse 
de côté le cas 0​). 
 Refaire le même programme que précédemment mais cette fois ci on prend en 
compte le cas de 0 */

int main() {
	//	Declaration de variable
    int nombre;

    // Demande à l'utilisateur de saisir un nombre
    printf("\n\t Veuillez saisir un nombre : ");
    scanf("%d", &nombre);

    // Vérifie si le nombre est positif, négatif ou nul
    if (nombre > 0) {
        printf("\n\tLe nombre %d est POSITIF.\n", nombre);
    } else if (nombre < 0) {
        printf("\n\tLe nombre %d est NEGATIF.\n", nombre);
    } else {
        printf("\n\tLe nombre est nul.\n");
    }

    return 0;
}
