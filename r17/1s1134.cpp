#include <iostream>

int main(void)
{
	char znak;
	int licznik = 0;

	while ((znak = std::cin.get()) != '$')
	{
		std::putchar(znak);
		licznik++;
	}

	std::cout << "\nPodano " << licznik << " znakow!\n";

	std::cin.putback(znak);

	std::cout << "\nW strumieniu znajduje sie: " << (char)std::cin.get();
	

	return 0;
}