#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int numberElements, smallestNum, largestNum, num[numberElements];
	double averageNum;
	numberElements = 10;
	averageNum = 0.0;
	
	for(int u=0; u<numberElements; u++) 
	{
			cout <<" Please enter a number "<< u+1 << endl;
			cin >> num[u];
		
		if(u == 0)
		{
			smallestNum = num[u];
			largestNum = num[u];
			averageNum += ( num[u]/numberElements );
		}
		else
		{
			if(smallestNum > num[u])
			{
				smallestNum = num[u];
			}
			if(largestNum < num[u] )
			{
				largestNum = num[u];
			}
			averageNum += ( num[u]/numberElements );
		}
	}
	
	cout << "  The smallest number is: " << smallestNum << endl;
	cout << " The largest number is: " << largestNum << endl;
	cout << " The average of all the numbers are: " << averageNum << endl;
	
	_getch ();
	return 0;
}
