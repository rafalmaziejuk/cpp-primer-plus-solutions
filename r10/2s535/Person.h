#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>

class Person
{
private:
	static const int LIMIT = 256;

	std::string lname;
	char fname[LIMIT];

public:
	Person() { lname = ""; fname[0] = '\0'; }
	Person(const std::string &ln, const char *fn = "HejTy");
	~Person(void);

	void Show(void) const;
	void FormalShow(void) const;
};

#endif