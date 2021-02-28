#include <iostream> 
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

class Store
{
private:
	std::ofstream *pfout;

public:
	Store(std::ofstream &fout) { pfout = &fout; }
	~Store(void) { }

	Store & operator()(const std::string &str)
	{
		size_t len = str.length();

		pfout->write((char *)&len, sizeof(size_t));
		pfout->write(str.data(), len);

		return *this;
	}
};

namespace
{
	void ShowStr(const std::string &str);
	void GetStrs(std::ifstream &fin, std::vector<std::string> &vistr);
}

int main(void)
{
	using namespace std;
	vector<string> vostr;
	string temp;

	cout << "Podaj lancuchy (aby zakonczyc, wprowadz pusty wiersz):\n";
	while (getline(cin, temp) && temp[0] != '\0')
		vostr.push_back(temp);
	cout << "Oto Twoje dane wejsciowe.\n";
	for_each(vostr.begin(), vostr.end(), ShowStr);

	ofstream fout("lancuchy.dat", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();

	vector<string> vistr;
	ifstream fin("lancuchy.dat", ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cerr << "Nie mozna otworzyc pliku do odczytu.\n";
		exit(EXIT_FAILURE);
	}
	GetStrs(fin, vistr);
	cout << "\nOto lancuchy odczytane z pliku:\n";
	for_each(vistr.begin(), vistr.end(), ShowStr);

	return 0;
}

namespace
{
	void ShowStr(const std::string &str)
	{
		std::cout << str << std::endl;
	}

	void GetStrs(std::ifstream &fin, std::vector<std::string> &vistr)
	{
		size_t len;
		std::string str;
		char ch;

		while (fin.peek() && !fin.eof())
		{
			fin.read((char *)&len, sizeof(size_t));

			for (size_t i = 0; i < len; i++)
			{
				fin.read(&ch, sizeof(char));
				str.push_back(ch);
			}

			vistr.push_back(str);
			str.clear();
		}
	}
}