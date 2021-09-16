#include<iostream>
#include <string>
#include <algorithm>
#include<math.h>
#include<vector>
#include <iomanip> 
using namespace std;
#define S(a,b,c) (a+b+c)/2;
#define area(S,a,b,c) S*(S-a)*(S-b)*(S-c);
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	double q = S(a, b, c);
	double x = area(q, a, b, c);
	double area = sqrt(x);

	cout << fixed << setprecision(3) << area << endl;


	return 0;
}

