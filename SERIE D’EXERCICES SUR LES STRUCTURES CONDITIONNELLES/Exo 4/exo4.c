#include <stdio.h>

/* Sujet : Écrire un programme qui permet de saisir deux nombres entiers. Le 
programme affiche ensuite si leur produit est positif, négatif ou nul.  
Attention : Toutefois le programme ne doit pas calculer le produit des deux 
nombres. */

int main()
{
	//	Declaration des Variables
    int a, b;

    // Demande à l'utilisateur de saisir deux nombres entiers
    printf("\n\t Veuillez Saisir deux nombres entiers : ");
    scanf("%d %d", &a, &b);

    // Vérifie les signes des nombres pour déterminer le signe du produit
    if (a == 0 || b == 0) {
        printf("\n\tLe produit est nul.\n");
    } 
	else if ((a > 0 && b > 0) || (a < 0 && b < 0))
	{
        printf("\n\tLe produit est positif.\n");
    } 
	else
	{
        printf("\n\tLe produit est négatif.\n");
    }

    return 0;
}
