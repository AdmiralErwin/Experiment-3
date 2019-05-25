#include <iostream>
#include <conio.h>
#include <iomanip>


using namespace std;

int main()
{
	int provinceA[7], provinceB[7], provinceC[7];

	for(int u=0; u < 7; u++)
	{
		cout << " Province A, Day " << u+1 << endl; 
		cin >> provinceA[u];
	}
	
	for(int u = 0; u < 7; u++)
	{
		cout << " Province B, Day " << u+1 << endl; 
		cin >> provinceB[u];
	}
	
	for(int u = 0; u < 7; u++)
	{
		cout << "Province C, Day " << u+1 << endl; 
		cin >> provinceC[u];
	}
	
	for(int u = 0; u < 7; u++)
		for (int i = 0; i < 7; i++)
	{
		cout << "Province A, Day " << i+1 << endl;
		cout << provinceA[u] << endl;
	}
	
	for(int u = 0; u < 7; u++)
		for (int i = 0; i < 7; i++)
	{
		cout << "Province B, Day " << i+1 << endl;
		cout << provinceB[u] << endl;
	}
	
	for(int u = 0; u < 7; u++)
		for (int i = 0; i < 7; i++)
	{
		cout << "Province C, Day " << i+1 << endl;
		cout << provinceC[u] << endl;
	}

	return 0;
}
