#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
// ========= DO NOT CHANGE THE INPUT CODE BELOW ==================
int length, width, radius;
cout << "Enter length of Rectangle : ";
cin >> length;
cout << "Enter width of Rectangle : ";
cin >> width;
cout << "Enter radius of Circle : ";
cin >> radius;
// ======== DO NOT CHANGE THE CODE GIVEN ABOVE ====================

Rectangle *r;
r = new Rectangle(length, width);

Circle *c;
c = new Circle(radius);

r->display();
c->display();

delete r;
delete c;

// ============ DO NOT CHANGE THE CODE BELOW ===================
cout << "End of Program" << endl;

}