#include <iostream>
using namespace std;
int main()
{
	int a=9,b=2;
	cout << "變換前 a = "<< a << endl;
	cout << "變換前 b = "<< b << endl;
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "變換後 a = "<< a << endl;
	cout << "變換後 b = "<< b << endl;
	system("pause");
}
