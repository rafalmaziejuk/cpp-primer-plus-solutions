#ifndef _COW_H_
#define _COW_H_

class Cow
{
private:
	char name[20];
	char *hobby;
	double weight;

public:
	Cow(void);
	Cow(const char *nm, const char *ho, double wt);
	Cow(const Cow &c);
	~Cow(void);

	Cow & operator=(const Cow &c);
	void ShowCow(void) const;
};

#endif