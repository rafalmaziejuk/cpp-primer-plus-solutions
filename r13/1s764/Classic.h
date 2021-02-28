#ifndef _CLASSIC_H_
#define _CLASSIC_H_

#include "Cd.h"

class Classic : public Cd
{
private:
	char glownyUtwor[50];

public:
	Classic(void);
	Classic(const char *utwor, const char *s1, const char *s2, int n, double x);
	virtual ~Classic(void);

	virtual void Report(void) const;
};

#endif