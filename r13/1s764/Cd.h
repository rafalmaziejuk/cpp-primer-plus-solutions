#ifndef _CD_H_
#define _CD_H_

class Cd
{
private:
	char performers[50];
	char label[20];
	int selections;
	double playtime;

public:
	Cd(void);
	Cd(const char *s1, const char *s2, int n, double x);
	Cd(const Cd &d);
	virtual ~Cd(void);

	virtual void Report(void) const;

	Cd & operator=(const Cd &d);
};

#endif