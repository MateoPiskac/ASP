#include <iostream>
#include <math.h>
using namespace std;
bool checkSquare(int n) {
   int squareRoot = floor(sqrt(n));
   return squareRoot * squareRoot == n ? true : false;
}
int zbrojKvadrata(int polje[], int n) {
   if (n == 0) {
      return 0;
   } else {
      if (checkSquare(polje[n - 1])) {
         return polje[n - 1] + zbrojKvadrata(polje, n - 1);
      }
      zbrojKvadrata(polje, n - 1);
   }
}

int main() {
   int n;
   cin >> n;
   int *A = new int[n];
   for (int i = 0; i < n; i++) {
      cin >> A[i];
   }
   cout << zbrojKvadrata(A, n);
   return 0;
}
