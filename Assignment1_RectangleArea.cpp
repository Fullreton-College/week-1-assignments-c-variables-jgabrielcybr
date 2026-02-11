#include <iostream>


using namespace std;



int main()
{
	// print name of program
	cout << "Rectangle Calculator" << endl << endl;

	// get height and width from user
	double height;
	double width;
	double area;

	cout<<"Enter the height of the rectangle: "<<endl;
	cin>>height;
	cout<<"Enter the width of the rectangle: "<<endl;
	cin>>width;

/* write your code here */
	// calculate area
	area = width * height;


	// write output to console
	cout<<"The area of the rectangle is: "<<area<<endl;

	// return value that indicates normal program exit
    return 0;
}
