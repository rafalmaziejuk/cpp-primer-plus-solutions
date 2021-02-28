#include <cstring>
#include <cctype>
#include "string2.h"

using std::cin;
using std::cout;

int String::num_strings = 0;

String::String(void)
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const char * s)          
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::String(const String & st)
{
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	num_strings++;
}

String::~String(void)
{
	--num_strings;
	delete[] str;
}

void String::stringlow(void)
{
	for (int i = 0; i < std::strlen(str); i++)
		str[i] = tolower(str[i]);
}

void String::stringup(void)
{
	for (int i = 0; i < std::strlen(str); i++)
		str[i] = toupper(str[i]);
}

int String::has(char letter) const
{
	int count = 0;

	for (int i = 0; i < std::strlen(str); i++)
		if (str[i] == letter)
			count++;

	return count;
}

String & String::operator=(const String &st)
{
	if (this == &st)
		return *this;

	delete[] str;

	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);

	return *this;
}

String & String::operator=(const char *s)
{
	delete[] str;

	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);

	return *this;
}

char & String::operator[](int i)
{
	return str[i];
}

const char & String::operator[](int i) const
{
	return str[i];
}

String operator+(const String &st1, const String &st2)
{
	int newStringLength = std::strlen(st1.str) + std::strlen(st2.str);
	char *newString = new char[newStringLength + 1];

	std::strncpy(newString, st1.str, newStringLength);
	std::strncat(newString, st2.str, newStringLength);

	String tempString(newString);

	delete[] newString;

	return tempString;
}

bool operator<(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
	return st2.str < st1.str;
}

bool operator==(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream &os, const String &st)
{
	os << st.str;

	return os;
}

istream & operator>>(istream &is, String &st)
{
	char temp[String::CINLIM];

	is.get(temp, String::CINLIM);
	if (is)
		st = temp;

	while (is && is.get() != '\n')
		continue;

	return is;
}

int String::HowMany(void)
{
	return num_strings;
}