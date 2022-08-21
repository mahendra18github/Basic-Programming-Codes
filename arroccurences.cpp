#include <iostream>
#include <string>
#include <vector>


int count(std::vector<int> &array, int number)
{
	int occ = 0;
	bool flag = false;
	for(int i = 0; i < array.size(); i++)
		if(array[i] == number)
		{
			flag = true;
			occ++;
		}
	return flag ? occ : -1;
}
void multiple_index(std::vector<int> &array, std::vector<int> &result)
{
	for(int i = 0; i < array.size(); i++)
		result.push_back(array[i] * (i + 1));
}


int main(int argc, char *argv[])
{
	std::vector<int> array
	{
		4,
		3,
		8,
		11,
		4,
		3
	};
	std::cout << count(array, 3) << std::endl;
}