#ifndef _GOLF_H_
#define _GOLF_H_

class golf
{
private:
	static const int Len = 40;

	char m_fullname[Len];
	int m_handicap;

public:
	golf(const char *name = "", int hc = 0);
	~golf(void);

	bool setgolf(void);
	void handicap(int hc);
	void showgolf(void) const;
};

#endif