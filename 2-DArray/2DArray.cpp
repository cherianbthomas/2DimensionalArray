#include <iostream>
#include <memory>
#include <iomanip>
using namespace std;


void fill(int** arrayPtr, const int& rows, const int& columns)
{

	for (int rowIdx = 0; rowIdx < rows; rowIdx++)
	{
		for (int columnIdx = 0; columnIdx < columns; columnIdx++)
		{
			cout << "Enter the Elements for Row [" << rowIdx << "] [" << columnIdx << "]:";
			cin >> arrayPtr[rowIdx][columnIdx];
		}
	}
}

void print(int** arrayPtr, const int& rows, const int& columns)
{
	cout << "Elements of Matrix:" << endl;
	for (int rowIdx = 0; rowIdx < rows; rowIdx++)
	{
		for (int columnIdx = 0; columnIdx < columns; columnIdx++)
		{
			cout << setw(5) << arrayPtr[rowIdx][columnIdx];
		}
		cout << endl;
	}
}



// To execute C++, please define "int main()"
int main() {
	int **dimensional_array = nullptr;
	int rows = 0, columns = 0;
	cout << "Enter The Rows:";
	cin >> rows;
	cout << "Enter The Columns:";
	cin >> columns;

	dimensional_array = new int*[rows];
	for (int idx = 0; idx < rows; idx++)
		dimensional_array[idx] = new int[columns];

	fill(dimensional_array, rows, columns);
	print(dimensional_array, rows, columns);
	system("PAUSE");
}