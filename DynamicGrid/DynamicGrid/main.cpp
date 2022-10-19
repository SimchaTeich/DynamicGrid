#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

void printGrid(const unsigned int height, const unsigned int width);
unsigned int getValue(string nameOfValue);


int main()
{
	string input;
	unsigned int h = getValue("height");
	unsigned int w = getValue("width");

	
	// print the grid.
	system("CLS");
	printGrid(h, w);

	system("PAUSE");
	return 0;
}


/*
* function returns an integer value from user.
* if input is worng, try again.
* Input - name of the value (for represent it)
* Output - the valid value from user type int.
*/
unsigned int getValue(string nameOfValue)
{
	string input;
	unsigned int value;

	while (true)
	{
		cout << "Enter "<< nameOfValue << " (as integer) : ";
		cin >> input;

		// protect from malicious input.
		try
		{
			value = std::stoi(input);
		}
		catch (...)
		{
			continue;
		}

		break;
	}

	return value;
}


/*
* prints the grid
* Input - height & width
* Output - None.
*/
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
