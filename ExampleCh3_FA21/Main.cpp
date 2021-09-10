#include <iostream>

using namespace std;

float Calculate(float r_, float h_);

int main()
{
	float r = 3.5;
	float h = 5;

	cout << "The volume of your cylinder with r=" << r << " and h=" << h;
	cout << " is: " << Calculate(r, h) << endl << endl;

	return 0;
}

float Calculate(float r_, float h_)
{
	const float pi = 3.1415926536;

	return pi * r_ * r_ * h_;
}