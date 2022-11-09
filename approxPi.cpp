#include <cmath>
#include <iostream>
using namespace std;

double pi(int n) {
   if (n == 1) {
      return 1;
   }
   return (pow(-1, n - 1) / (2 * n - 1)) + pi(n - 1);
}

int main() {
   int n;
   cin >> n;
   double *A = new double[n];
   for (int i = 0; i < n; i++) {
      A[i] = 4 * pi(i + 1);
   }
   for (int i = 0; i < n; i++) {
      cout << A[i] << " , ";
   }
   return 0;
}