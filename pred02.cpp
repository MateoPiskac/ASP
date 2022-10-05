#include <iostream>
#include <stdio.h>
using namespace std;

class Point {
   int a;

 public:
   double x, y;

   void println() { cout << "{" << x << ", " << y << "}" << endl; }

   Point() : x(0), y(0) {}
   Point(double x, double y) : x(x), y(y) {}

   int getA() { return a; }
   void setA(int val) { this->a = val; }
};

int main(void) {
   Point p;
   cout << p.x << endl;
   Point q(3, 4);
   q.println();
   Point q1(1, 2);
   Point q2;
   // Point q3();
   Point *pptr;
   pptr = &p;
   cout << (*pptr).x << endl;

   Point &pref = p;
   cout << pref.x << endl;

   return 0;
}
