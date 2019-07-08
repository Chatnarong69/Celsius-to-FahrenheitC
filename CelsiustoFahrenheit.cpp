#include<iostream>
using namespace std;
int main()
{
	float c,f;
	cout <<"Enter Celsius temperature : ";
	cin>> c;
	f = (c * 9.0) / 5.0 + 32;
	cout << "Fahrenheit = " << f << endl;
	cout << "Now weather in Thailand is ";
	cout << (f>= 70 ? "Hot" : "Cool") << endl;	
 	
	return 0;
}