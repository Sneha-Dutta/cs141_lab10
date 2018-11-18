//First include library
#include <iostream>
using namespace std;
//creating class Rectangle
class Rectangle
{
   public:
   float length;
   float breadth;
   Rectangle( float l, float b) {
           //stores the length and breadth of rectangle
           length= l;
	   breadth= b;
   }
   //function for area
   double area() {
	   return length*breadth;
   }
   //function for perimeter
   double perimeter() {
	   return 2*(length+breadth);
   }
};
//Write the main function
int main() {
   //declare two variables for length and breadth
   float l,b;
   cout << "For 1st rectangle:" << endl;
   cout << "Enter length" << endl;
   cin >> l;
   cout << "Enter breadth " << endl;
   cin >> b;
   Rectangle r1(l,b);
   cout << "Area of first rectangle = " << r1.area() << "square units" << endl;
   cout << "For 2nd rectangle:" << endl;
   cout << "Enter length " << endl;
   cin >> l;
   cout<<"Enter breadth " << endl;
   cin >> b;
   Rectangle r2(l,b);
   cout << "Area of second rectangle = " << r2.area() << "square units" << endl;
   //compare areas of two rectangles
   if (r1.area() > r2.area())
   cout << "Area of first reactangle is greater than the second one" << endl;
   else if (r1.area() < r2.area())
   cout << "Area of the second reactangle is greater than the first one" << endl;
   else 
   cout << "Both rectangles have same area" << endl;
   //compare perimeters of two rectangles
   cout << "Perimeter of the first rectangle = " << r1.perimeter() << "units" << endl;
   cout << "Perimeter of the second rectangle = " << r2.perimeter() << "units" << endl;
   if (r1.perimeter() > r2.perimeter())
   cout << "Perimeter of the first reactangle is greater than the second one" << endl;
   else if (r1.perimeter() < r2.perimeter())
   cout << "Perimeter of the second reactangle is greater than the first one" << endl;
   else 
   cout << "Both rectangles have the same perimeter" << endl;
   return 0;
}
