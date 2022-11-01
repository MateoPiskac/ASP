#include <stdio.h>

int main(void) {

   float b[3];
   float c[3];
   unsigned int n;

   printf("Upisite nenegativan cijeli broj > ");
   scanf("%u", &n);

   printf("Unesite vrijednost broja b_0: ");
   scanf("%f", &b[0]);
   printf("Unesite vrijednost broja b_1: ");
   scanf("%f", &b[1]);
   printf("Unesite vrijednost broja b_2: ");
   scanf("%f", &b[2]);
   printf("Unesite vrijednost broja c_0: ");
   scanf("%f", &c[0]);
   printf("Unesite vrijednost broja c_1: ");
   scanf("%f", &c[1]);
   printf("Unesite vrijednost broja c_2: ");
   scanf("%f", &c[2]);

   float lambda1, lambda2;
   lambda1 = (c[0] * b[2] - b[0] * c[2]) / (b[1] * c[0] - b[0] * c[1]);
   lambda2 = (b[1] * c[2] - c[1] * b[2]) / (b[1] * c[0] - b[0] * c[1]);

   printf("Lambdas are: %f %f, ", lambda1, lambda2);

   for (int i = 2; i <= n; i++) {
      b[2] = lambda1 * b[1] + lambda2 * b[0];
      b[0] = b[1];
      b[1] = b[2];
   }
   printf("The %uth member of the b series is: %f", n, b[2]);

   return 0;
}