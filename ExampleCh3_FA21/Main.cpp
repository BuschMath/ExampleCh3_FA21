#include <iostream>

using namespace std;

float r = 3.5;
float h = 5;
const float pi = 3.1415926536;

float Calculate();

int main()
{
	cout << "The volume of your cylinder with r=" << r << " and h=" << h;
	cout << " is: " << Calculate() << endl << endl;

	return 0;
}

float Calculate()
{
	return pi * r * r * h;
}