#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    const double Pi = 3.141593; // declaro phi como constante
    double D, H, R, V;

    printf ("Introduzca el diametro, en metros: "); scanf ("%lf", &D);
    printf ("Introduzca la altura, en metros: "); scanf ("%lf", &H);

    R = D/2; V = Pi * pow(R, 2) * H;
    printf ("El volumen del cilindro es de %lf metros cubicos", V);
   return 0;
}
