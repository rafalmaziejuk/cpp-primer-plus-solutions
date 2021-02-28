#include <iostream>
#include <cstring>
#include <new>

struct chaff
{
	char dross[20];
	int slag;
};

int main(void)
{
	const int ROZMIAR = 512;

	char bufor1[ROZMIAR];
	char *bufor2 = new char[sizeof(chaff) * 2];
	chaff *chaff1, *chaff2;

	chaff1 = new (bufor1) chaff[2];
	chaff2 = new (bufor2) chaff[2];

	strcpy(chaff1[0].dross, "dross1");
	chaff1[0].slag = 1;
	strcpy(chaff1[1].dross, "dross1");
	chaff1[1].slag = 1;

	std::strcpy(chaff2[0].dross, "dross2");
	chaff2[0].slag = 2;
	strcpy(chaff2[1].dross, "dross2");
	chaff2[1].slag = 2;

	for (int i = 0; i < 2; i++)
	{
		std::cout << chaff1[i].dross << std::endl;
		std::cout << chaff1[i].slag << std::endl;
	}

	std::cout.put('\n');

	for (int i = 0; i < 2; i++)
	{
		std::cout << chaff2[i].dross << std::endl;
		std::cout << chaff2[i].slag << std::endl;
	}

	return 0;
}