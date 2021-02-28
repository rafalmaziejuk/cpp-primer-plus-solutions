#ifndef WORKERMI_H_
#define WORKERMI_H_

#include <string>

class Worker
{
private:
	std::string fullname;
	long id;

protected:
	virtual void Data(void) const;
	virtual void Get(void);

public:
	Worker() : fullname("brak"), id(0L) { }
	Worker(const std::string &s, long n) : fullname(s), id(n) {}
	virtual ~Worker(void) = 0;

	virtual void Set(void) = 0;
	virtual void Show(void) const = 0;
};

class Waiter : virtual public Worker
{
private:
	int panache;

protected:
	void Data(void) const;
	void Get(void);

public:
	Waiter(void) : Worker(), panache(0) { }
	Waiter(const std::string &s, long n, int p = 0) : Worker(s, n), panache(p) { }
	Waiter(const Worker &wk, int p = 0) : Worker(wk), panache(p) { }

	void Set(void);
	void Show(void) const;
};

class Singer : virtual public Worker
{
protected:
	enum
	{
		inna, alt, kontralt, sopran,
		bas, baryton, tenor
	};
	enum { Vtypes = 7 };

	void Data(void) const;
	void Get(void);

private:
	static const char *pv[Vtypes];
	int voice;

public:
	Singer(void) : Worker(), voice(inna) { }
	Singer(const std::string &s, long n, int v = inna) : Worker(s, n), voice(v) { }
	Singer(const Worker &wk, int v = inna) : Worker(wk), voice(v) { }
	void Set(void);
	void Show(void) const;
};

class SingingWaiter : public Singer, public Waiter
{
protected:
	void Data(void) const;
	void Get(void);

public:
	SingingWaiter(void) { }
	SingingWaiter(const std::string &s, long n, int p = 0, int v = inna) : Worker(s, n), Waiter(s, n, p), Singer(s, n, v) { }
	SingingWaiter(const Worker &wk, int p = 0, int v = inna) : Worker(wk), Waiter(wk, p), Singer(wk, v) { }
	SingingWaiter(const Waiter &wt, int v = inna) : Worker(wt), Waiter(wt), Singer(wt, v) { }
	SingingWaiter(const Singer &wt, int p = 0) : Worker(wt), Waiter(wt, p), Singer(wt) { }
	
	void Set(void);
	void Show(void) const;
};

#endif