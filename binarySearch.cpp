#include <iostream>
using namespace std;

template <typename T> int binarnoTrazi(T polje[], int n, T x) {
   if (polje[n] == x) {
      return n - 1;
   }
}

int main() {
   int n;
   cin >> n;
   float x;
   cin >> x;
   float *A = (float *)malloc(n * sizeof(float));
   for (int i = 0; i < n; i++) {
      A[i] = i * 1.1;
      cout << A[i] << " ";
   }

   return 0;
}