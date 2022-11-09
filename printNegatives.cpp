#include <iostream>
using namespace std;

void ispis(float polje[], int n) {
   if (n == 0)
      return;
   else {
      ispis(polje, n - 1);
      if (polje[n - 1] < 0) {
         cout << polje[n - 1] << ",";
      }
   }
}

int main() {
   int n;
   cin >> n;
   float *A = new float[n];
   for (int i = 0; i < n; i++) {
      cin >> A[i];
   }
   ispis(A, n);
   return 0;
}
