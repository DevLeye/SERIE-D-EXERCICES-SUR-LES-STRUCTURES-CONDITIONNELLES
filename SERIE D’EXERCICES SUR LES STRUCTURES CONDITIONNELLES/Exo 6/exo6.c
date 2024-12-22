#include <stdio.h>

/* Sujet : Écrire un programme qui permet la saisie de trois valeurs entières. Le 
programme détermine et affiche les valeurs maximale, moyenne et minimale. (2 
méthodes)
        
*/
int main()
{
	//	Declaration des Variables 
    int a, b, c;
    int max, min, mid;

    // Demande à l'utilisateur de saisir trois valeurs entières
    printf("Entrez trois valeurs entiéres : ");
    scanf("%d %d %d", &a, &b, &c);

    // Détermine la valeur maximale
    if (a > b && a > c) 
	 {
        max = a;
     } 
	 else if (b > a && b > c) 
	 {
        max = b;
     }
	 else 
	 {
        max = c;
     }

    // Détermine la valeur minimale
    if (a < b && a < c) 
	 {
        min = a;
     }
	 else if (b < a && b < c) 
	 {
        min = b;
     } 
	else 
	{
        min = c;
    }

    // Détermine la valeur moyenne
    mid = a + b + c - max - min;

    // Affiche les valeurs maximale, moyenne et minimale
    printf("Maximale : %d\n", max);
    printf("Moyenne : %d\n", mid);
    printf("Minimale : %d\n", min);

    return 0;
}
