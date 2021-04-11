#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int a, b, c;
	float x, y;
	cout << "Enter a b and c values of the quad eqn : "<<endl;
	cin >> a;
	cin >> b;
	cin >> c;
	x = (b + sqrt(b*b - 4*a*c)) / 2*a;
	y = (-b - sqrt(b*b - 4*a*c)) / 2*a;
	cout << "The roots of the quadratic equation : "<<a<<"x2 + "<<b<<"x + "<<c<<" = 0"<<endl;
	cout <<"Are : "<<x<<" and "<<y;
	return 0;
}
