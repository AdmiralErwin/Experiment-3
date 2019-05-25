#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	char text[] = 
	{
		 'i'
		,'g'
		,'o'
		,'p'
		,'n'
		,'i'
		,'w'
		,'r'
		,'e'
	};
	
	char reverse[9];
	
	reverse[0] = text[8];
	reverse[1] = text[7];
	reverse[2] = text[6];
	reverse[3] = text[5];
	reverse[4] = text[4];
	reverse[5] = text[3];
	reverse[6] = text[2];
	reverse[7] = text[1];
	reverse[8] = text[0];
	
	cout << reverse << endl;
	cout << " The size of the array is: " << sizeof(reverse) << endl;
	
	return 0;
	
}
