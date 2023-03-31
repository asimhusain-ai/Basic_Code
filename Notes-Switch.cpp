#include <iostream>
using namespace std;

int main()
{
	int amount;
	int a, b, c, d, e, f, g, h;
	cout << "Enter Amount ";
	cin >> amount;

	switch (amount >= 2000)
	{
	case 1:
		a = amount / 2000;
		amount = amount % 2000;
		cout << "2000 :- " << a;
		break;
	}
	switch (amount >= 500)
	{
	case 1:
		b = amount / 500;
		amount = amount % 500;
		cout << "500 :- " << b << endl;
		break;
	}
	switch (amount >= 200)
	{
	case 1:
		c = amount / 200;
		amount = amount % 200;
		cout << "200 :- " << c << endl;
		break;
	}
	switch (amount >= 100)
	{
	case 1:
		d = amount / 100;
		amount = amount % 100;
		cout << "100 :- " << d << endl;
		break;
	}
	switch (amount >= 50)
	{
	case 1:
		e = amount / 50;
		amount = amount % 50;
		cout << "50 :- " << e << endl;
		break;
	}
	switch (amount >= 20)
	{
	case 1:
		f = amount / 20;
		amount = amount % 20;
		cout << "20 :- " << f << endl;
		break;
	}
	switch (amount >= 10)
	{
	case 1:
		g = amount / 10;
		amount = amount % 10;
		cout << "10 :- " << g << endl;
		break;
	}
	switch (amount >= 5)
	{
	case 1:
		h = amount / 5;
		amount = amount % 5;
		cout << "5 :- " << h << endl;
		break;
	}
}