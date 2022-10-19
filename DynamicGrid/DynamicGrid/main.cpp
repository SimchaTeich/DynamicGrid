#include <iostream>

using std::cout;
using std::endl;
using std::cin;


void printGrid(const unsigned int height, const unsigned int width);


int main()
{
	printGrid(10, 10);

	system("PAUSE");
	return 0;
}


void printGrid(const unsigned int height, const unsigned int width)
{
	for (int i = 0; i < height; i++)
	{
		cout << "+";
		for (int j = 0; j < width; j++)
		{
			cout << "---+";
		}
		cout << endl;
		
		for (int j = 0; j <= width; j++)
		{
			cout << "|   ";
		}
		cout << endl;
	}

	// print the bottom line of the frame.
	cout << "+";
	for (int j = 0; j < width; j++)
	{
		cout << "---+";
	}
	cout << endl;
}
