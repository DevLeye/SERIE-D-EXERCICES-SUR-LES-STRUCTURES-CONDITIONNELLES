#include <stdio.h>
#include <stdlib.h>

/* Sujet :  Écrire un programme qui demande à l’utilisateur de saisir un nombre entier. 
Le programme l’informe si la valeur saisie est positive ou négative (​on laisse 
de côté le cas 0​).*/ 

int main() {
	//  Declaration de varible nombre
	int nombre;
	
	//	Saisie de la valeur à verifier
	printf("\n\tVeuillez Saisir un Nombre:");
	scanf("%d", &nombre);
	
	if(nombre>0) // nombre positif
	{
		printf(" \t %d est un nombre POSITIF \n",nombre);
	}
	else if(nombre<0) // Nombre negatif
	{
		printf("\t %d est un nombre NEGATIF\n",nombre);
	}
	
   return 0; 
}	