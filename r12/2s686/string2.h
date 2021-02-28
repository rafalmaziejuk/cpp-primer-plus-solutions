#ifndef _STRING2_H_
#define _STRING2_H_

#include <iostream>

using std::ostream;
using std::istream;

class String
{
private:
	static const int CINLIM = 80;
	static int num_strings;

	char *str;
	int len;

public:
	String(void);
	String(const char *s);
	String(const String &s);
	~String(void);

	int length(void) const { return len; }
	void stringlow(void);
	void stringup(void);
	int has(char letter) const;
	
	String & operator=(const String &s);
	String & operator=(const char *s);
	char & operator[](int i);
	const char & operator[](int i) const;
	
	friend String operator+(const String &st1, const String &st2);
	friend bool operator<(const String &st1, const String &st2);
	friend bool operator>(const String &st1, const String &st2);
	friend bool operator==(const String &st1, const String &st2);
	friend ostream & operator<<(ostream &os, const String &st);
	friend istream & operator>>(istream &is, String &st);
	
	static int HowMany(void);
};

#endif