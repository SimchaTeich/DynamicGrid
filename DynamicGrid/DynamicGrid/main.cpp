#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

void printGrid(const unsigned int height, const unsigned int width);


int main()
{
	string input;
	unsigned int h;
	unsigned int w;

	while(true)
	{
		cout << "Welcome to the Print Grid System." << endl;
		cout << "Enter height (as integer): ";
		cin >> input;

		// protect from malicious input.
		try
		{
			h = std::stoi(input);
		}
		catch (...)
		{
			system("CLS");
			continue;
		}


		cout << "Enter width (as integer): ";
		cin >> input;

		// protect from malicious input.
		try
		{
			w = std::stoi(input);
		}
		catch (...)
		{
			system("CLS");
			continue;
		}

		break;
	}

	// print the grid.
	system("CLS");
	printGrid(h, w);

	system("PAUSE");
	return 0;
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
