#ifndef _DMA_H_
#define _DMA_H_

#include <iostream>

class Port
{
private:
	char *brand;
	char style[20];
	int bottles;

public:
	Port(const char *br = "Brak", const char *st = "Brak", int b = 0);
	Port(const Port &p);
	virtual ~Port(void);

	int BottleCount(void) const;
	virtual void Show(void) const;

	Port & operator=(const Port &p);
	Port & operator+=(int b);
	Port & operator-=(int b);

	friend std::ostream & operator<<(std::ostream &os, const Port &p);
};

class VintagePort : public Port
{
private:
	char *nickname;
	int year;

public:
	VintagePort(void);
	VintagePort(const char *br, int b, const char *nn, int y);
	VintagePort(const VintagePort &vp);
	~VintagePort(void);

	void Show(void) const;

	VintagePort & operator=(const VintagePort &vp);

	friend std::ostream & operator<<(std::ostream &os, const VintagePort &vp);
};

#endif