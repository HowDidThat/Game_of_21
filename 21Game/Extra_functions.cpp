#include <iostream>
using namespace std;
//#include "Deck.h"
#include "Extras.h"
void Print_Hearth(int v)
{
	cout << '\n';
	cout << ' ' << ' ' << v << ' ' << ' ' << ' ' << v << ' ' << ' ' << '\n';
	cout << ' ' << v << v << v << ' ' << v << v << v << ' ' << '\n';
	cout << v << v << v << v << v << v << v << v << v << '\n';
	cout << v << v << v << v << v << v << v << v << v << '\n';
	cout << ' ' << v << v << v << v << v << v << v << ' ' << '\n';
	cout << ' ' << ' ' << v << v << v << v << v << ' ' << ' ' << '\n';
	cout << ' ' << ' ' << ' ' << v << v << v << ' ' << ' ' << ' ' << '\n';
	cout << ' ' << ' ' << ' ' << ' ' << v << ' ' << ' ' << ' ' << ' ' << '\n';
}
void Print_Diamond(int v)
{
	cout << ' ' << ' ' << ' ' << ' ' << v << ' ' << ' ' << ' ' << ' ' << '\n';
	cout << ' ' << ' ' << ' ' << v << v << v << ' ' << ' ' << ' ' << '\n';
	cout << ' ' << ' ' << v << v << v << v << v << ' ' << ' ' << '\n';
	cout << ' ' << v << v << v << v << v << v << v << ' ' << '\n';
	cout << v << v << v << v << v << v << v << v << v << '\n';
	cout << ' ' << v << v << v << v << v << v << v << ' ' << '\n';
	cout << ' ' << ' ' << v << v << v << v << v << ' ' << ' ' << '\n';
	cout << ' ' << ' ' << ' ' << v << v << v << ' ' << ' ' << ' ' << '\n';
	cout << ' ' << ' ' << ' ' << ' ' << v << ' ' << ' ' << ' ' << ' ' << '\n';
}
void Print_Spades(int v)
{	
	cout << ' ' << ' ' << ' ' << ' ' << v << ' ' << ' ' << ' ' << ' ' << '\n';
	cout << ' ' << ' ' << ' ' << v << v << v << ' ' << ' ' << ' ' << '\n';
	cout << ' ' << ' ' << v << v << v << v << v << ' ' << ' ' << '\n';
	cout << ' ' << v << v << v << v << v << v << v << ' ' << '\n';
	cout << v << v << v << v << v << v << v << v << v << '\n';
    cout << ' ' << v << v << ' ' << v << ' ' << v << v << ' ' << '\n';
	cout << ' ' << ' ' <<  ' ' << ' ' << v << ' ' << ' ' << ' ' << ' ' << '\n';
	cout << ' ' << ' ' << ' ' << ' ' << v<< ' '  << ' ' << ' ' << ' ' << '\n';
	cout << ' ' << ' ' << ' ' << v << v<< v  << ' ' << ' ' << ' ' << '\n';
}
void Print_Clubs(int v)
{	
	cout << ' ' << ' ' << ' ' << ' ' << v << ' ' << ' ' << ' ' << ' ' << '\n';
	cout << ' ' << ' ' << ' ' << v << v << v << ' ' << ' ' << ' ' << '\n';
	cout << ' ' << ' ' << ' ' << ' ' << v << ' ' << ' ' << ' ' << ' ' << '\n';
	cout << ' ' << v << ' ' << ' ' << v << ' ' << ' ' << v << ' ' << '\n';
	cout << v << v << v << v << v << v << v << v << v << '\n';
	cout << ' ' << v << ' ' << ' ' << v << ' ' << ' ' << v << ' ' << '\n';
	cout << ' ' << ' ' << ' ' << ' ' << v << ' ' << ' ' << ' ' << ' ' << '\n';
	cout << ' ' << ' ' << ' ' << ' ' << v << ' ' << ' ' << ' ' << ' ' << '\n';
	cout << ' ' << ' ' << ' ' << ' ' << v << ' ' << ' ' << ' ' << ' ' << '\n';
}
