#include <cmath>
#include <iostream>
using namespace std;

double exp(double x, int n, int *fakt, double *xpot) {
   if (n == 0)
      return 1;
   return *(xpot + n) / *(fakt + n) + exp(x, n - 1, fakt, xpot);
}

int main() {
   int n;
   cin >> n;
   double *A = new double[n];
   int *fakt = new int[n + 1];
   double *xpot = new double[n + 1];
   double x;
   cin >> x;
   fakt[0] = 1;
   xpot[0] = 1;

   for (int i = 1; i < n + 1; i++) {
      xpot[i] = pow(x, i);
      fakt[i] = i * fakt[i - 1];
   }

   cout << exp(x, n, fakt, xpot);
   return 0;
}