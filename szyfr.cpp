// szyfr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string tekst;
int i, litera, out, encrypted, pause;

int main()
{
	cout << "Witaj w programie szyfrujacym tekst" << endl;
	cin >> tekst;
	for (i = 0; i < tekst.length(); i++) {
		litera = (int)tekst[i];
		encrypted = floor( ( ( litera * 3.14 ) * 64 ) * 7.43 );
		out = (char)encrypted;
		tekst[i] = out;
	}
	cout << tekst;
	cin >> pause;
    return 0;
}

