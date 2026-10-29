#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void printticTacWaarg(std::vector < std::vector<int>> ork)
{
	const int WIDEST_COLUMN = 10;

	for (int row = 0; row < ork.size(); ++row)
	{
		
		for (int column = 0; column < ork[row].size(); ++column)
		{
			std::cout << std::setw(WIDEST_COLUMN);
			std::cout << std::left;
			std::cout << ork[row][column] << " ";
		}
		std::cout << std::endl;
	}
}
int main()
{
	std::vector < std::vector <int>> ticTacWaarg =
	{
		{1, 2, 1},
		{1, 2, 2},
		{1, 2, 2},
	};

	printticTacWaarg(ticTacWaarg);
}