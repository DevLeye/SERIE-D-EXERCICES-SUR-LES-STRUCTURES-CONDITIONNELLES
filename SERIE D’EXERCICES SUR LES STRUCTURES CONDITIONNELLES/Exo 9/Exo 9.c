#include <stdio.h>
#include <ctype.h>

/*Sujet : Écrire un programme qui permet de saisir une lettre alphabétique.
Le programme inverse la casse de la lettre saisie.*/

int main() 
{
	//	Delaration de variable
    char lettre;

    // Demande à l'utilisateur de saisir une lettre alphabétique
    printf("Entrez une lettre alphabétique : ");
    scanf("%c", &lettre);

    // Vérifie si la lettre est en majuscule ou en minuscule et inverse la casse
    if (isalpha(lettre)) 
	 {
        if (islower(lettre))
		 {
            lettre = toupper(lettre);
         } 
		 else
		 {
            lettre = tolower(lettre);
         }
        printf("La lettre inversée est : %c\n", lettre);
    }
	else 
	{
        printf("Le caractère saisi n'est pas une lettre alphabétique.\n");
    }

    return 0;
}
