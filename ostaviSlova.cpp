#include <iostream>
#include <string.h>
using namespace std;
char *ostaviSlova(string ulaz) {
   int counter = 0;
   for (int i = 0; i < ulaz.length(); i++) {
      if (isalpha(ulaz.at(i)))
         counter++;
   }
   char *izlaz = (char *)calloc(counter, sizeof(char));
   counter = 0;
   for (int i = 0; i < ulaz.length(); i++) {
      if (isalpha(ulaz.at(i))) {
         izlaz[counter] = ulaz.at(i);
         counter++;
      }
   }
   izlaz[counter] = '\0';
   return izlaz;
}

int main() {
   string ulaz = "asp12_i_ASP13";
   cout << ulaz << endl;
   cout << ostaviSlova(ulaz);

   return 0;
}