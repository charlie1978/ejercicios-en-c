#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
srand(time(NULL));
double test = rand()%100; 
double A = test/10;      
test = rand()%100;       
double B = test/10;      
test = rand()%100;       
double C = test/10;      
printf ("El numero A vale %lf\n", A);
printf ("El numero B vale %lf\n", B);
printf ("El numero C vale %lf\n", C);
return 0;
}
