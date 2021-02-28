#ifndef _DMA_H_
#define _DMA_H_

#include <iostream>

class Base
{
private:
	char *label;
	int rating;

protected: 
	const char * get_label(void) const;
	int get_rating(void) const;

public:
	Base(const char *l = "null", int r = 0);
	Base(const Base &rs);
	virtual ~Base(void);

	virtual void View(void) const = 0;

	Base & operator=(const Base &rs);
};

class baseDMA : public Base
{
public:
	baseDMA(const char *l = "null", int r = 0);

	virtual void View(void) const;
};

class lacksDMA : public Base
{
private:
	enum { COL_LEN = 40 };

	char color[COL_LEN];

public:
	lacksDMA(const char *c = "brak", const char *l = "brak", int r = 0);
	lacksDMA(const char *c, const Base &rs);

	virtual void View(void) const;
};

class hasDMA : public Base
{
private:
	char *style;

public:
	hasDMA(const char *s = "brak", const char *l = "brak", int r = 0);
	hasDMA(const char *s, const Base &rs);
	hasDMA(const hasDMA &hs);
	~hasDMA(void);

	virtual void View(void) const;

	hasDMA & operator=(const hasDMA &rs);
};

#endif