#include <stdio.h>
#include <ctype.h>

/* Sujet : Écrire un programme qui permet de saisir un caractère. Le programme 
détermine si le caractère est une lettre (dans ce cas s’il est minuscule ou 
majuscule), un chiffre ou un caractère spécial.*/

int main()
{
	//	Declaration de variable
    char caractere;

    // Demande à l'utilisateur de saisir un caractère
    printf("\n\tVeuillez Saisir un caractère : ");
    scanf("%c", &caractere);

    // Vérifie si le caractère est une lettre
    if (isalpha(caractere))
	 {
        if (islower(caractere)) 
		{
            printf("\n\tLe caractère '%c' est une lettre minuscule.\n", caractere);
        } 
		else 
		{
            printf("\n\tLe caractère '%c' est une lettre majuscule.\n", caractere);
        }
     }
    // Vérifie si le caractère est un chiffre
    else if (isdigit(caractere)) 
	{
        printf("\n\tLe caractère '%c' est un chiffre.\n", caractere);
    }
    // Si ce n'est ni une lettre ni un chiffre, c'est un caractère spécial
    else 
	{
        printf("Le caractère '%c' est un caractère spécial.\n", caractere);
    }

    return 0;
}
