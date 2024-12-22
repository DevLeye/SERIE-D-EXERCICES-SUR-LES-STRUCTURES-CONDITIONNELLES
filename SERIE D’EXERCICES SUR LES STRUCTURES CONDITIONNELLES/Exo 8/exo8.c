#include <stdio.h>
#include <math.h>

int main()
{
	
//	Declaration des Variables
    float a, b, c;
    float discri, rac1, rac2, realPart, imaginaryPart;

    // Demande à l'utilisateur de saisir les coefficients
    printf("\n\t Veuillez Saisir les coefficients a, b et c : ");
    scanf("%f %f %f", &a, &b, &c);

    // Calcul du discriminant
    discri = b * b - 4 * a * c;

    // Vérification de la nature des racines
    if (discri > 0) {
        // Deux racines réelles et distinctes
        rac1 = (-b + sqrt(discri)) / (2 * a);
        rac2 = (-b - sqrt(discri)) / (2 * a);
        printf("Les racines sont réelles et distinctes : %.2f et %.2f\n", rac1, rac2);
    } else if (discri == 0) {
        // Deux racines réelles et égales
        rac1 = rac2 = -b / (2 * a);
        printf("Les racines sont réelles et égales : %.2f et %.2f\n", rac1, rac2);
    } else {
        // Racines complexes et conjuguées
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discri) / (2 * a);
        printf("Les racines sont complexes et conjuguées : %.2f + %.2fi et %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
