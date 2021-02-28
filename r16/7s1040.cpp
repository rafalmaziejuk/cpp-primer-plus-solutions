#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> Lotto(int liczbaPol, int liczbaLosowychNumerow);

int main(void)
{
	std::vector<int> winners;
	int pola, losoweNumery;

	std::cout << "Podaj po spacji liczbe pol na kuponie oraz liczbe losowo wybieranych numerow: ";
	std::cin >> pola >> losoweNumery;
	
	winners = Lotto(pola, losoweNumery);

	std::cout << "Zwycieskie numery to: " << std::endl;
	for (int i = 0; i < winners.size(); i++)
		std::cout << winners[i] << " ";

	std::cout.put('\n');

	return 0;
}

std::vector<int> Lotto(int liczbaPol, int liczbaLosowychNumerow)
{
	std::vector<int> temp;

	for (int i = 1; i <= liczbaPol; i++)
		temp.push_back(i);

	std::random_shuffle(temp.begin(), temp.end());
	temp.resize(liczbaLosowychNumerow);

	return temp;
}