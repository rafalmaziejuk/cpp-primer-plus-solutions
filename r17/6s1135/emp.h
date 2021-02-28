#ifndef _EMP_H_
#define _EMP_H_

#include <iostream>
#include <string>

class abstr_emp
{
private:
	std::string fname;
	std::string lname;
	std::string job;

public:
	enum classkind { Employee, Manager, Fink, Highfink };

	abstr_emp(void);
	abstr_emp(const std::string &fn, const std::string &ln, const std::string &j);
	virtual ~abstr_emp(void) = 0;

	virtual void ShowAll(void) const;
	virtual void SetAll(void);
	virtual void writeall(std::ofstream &ofs) const;
	virtual void getall(std::ifstream &ifs);

	friend std::ostream & operator<<(std::ostream &os, const abstr_emp &e);
};

class employee : public abstr_emp
{
public:
	employee(void);
	employee(const std::string &fn, const std::string &ln, const std::string &j);

	virtual void ShowAll(void) const;
	virtual void SetAll(void);
	virtual void writeall(std::ofstream &ofs) const;
	virtual void getall(std::ifstream &ifs);
};

class manager : virtual public abstr_emp
{
private:
	int inchargeof;

protected:
	int InChargeOf(void) const { return inchargeof; }
	int & InChargeOf(void) { return inchargeof; }

public:
	manager(void);
	manager(const std::string &fn, const std::string &ln, const std::string &j, int ico = 0);
	manager(const abstr_emp &e, int ico);
	manager(const manager &m);

	virtual void ShowAll(void) const;
	virtual void SetAll(void);
	virtual void writeall(std::ofstream &ofs) const;
	virtual void getall(std::ifstream &ifs);
};

class fink : virtual public abstr_emp
{
private:
	std::string reportsto;

protected:
	const std::string ReportsTo(void) const { return reportsto; }
	std::string & ReportsTo(void) { return reportsto; }

public:
	fink(void);
	fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo);
	fink(const abstr_emp &e, const std::string &rpo);
	fink(const fink &e);

	virtual void ShowAll(void) const;
	virtual void SetAll(void);
	virtual void writeall(std::ofstream &ofs) const;
	virtual void getall(std::ifstream &ifs);
};

class highfink : public manager, public fink
{
public:
	highfink(void);
	highfink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo, int ico);
	highfink(const abstr_emp &e, const std::string &rpo, int ico);
	highfink(const fink &f, int ico);
	highfink(const manager &m, const std::string &rpo);
	highfink(const highfink &h);
	
	virtual void ShowAll(void) const;
	virtual void SetAll(void);
	virtual void writeall(std::ofstream &ofs) const;
	virtual void getall(std::ifstream &ifs);
};

#endif