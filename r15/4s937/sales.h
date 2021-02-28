#ifndef _SALES_H_
#define _SALES_H_

#include <stdexcept>
#include <cstring>

class Sales
{
public:
	enum { MONTHS = 12 };

	class bad_index : public std::logic_error
	{
	private:
		int bi;

	public:
		explicit bad_index(int ix, const char *s = "Niepoprawny indeks w obiekcie klasy Sales\n");

		int bi_val(void) const { return bi; }
	};

	explicit Sales(int yy = 0);
	Sales(int yy, const double *gr, int n);
	virtual ~Sales(void) { }

	int Year(void) const { return year; }
	virtual double operator[](int i) const;
	virtual double & operator[](int i);

private:
	double gross[MONTHS];
	int year;
};

class LabeledSales : public Sales
{
public:
	static const int STRLEN = 50;

	class nbad_index : public Sales::bad_index
	{
	private:
		char lbl[STRLEN];

	public:
		nbad_index(const char *lb, int ix, const char *s = "Niepoprawny indeks w obiekcie klasy LabeledSales\n");
		const char * label_val() { return lbl; }
	};

	explicit LabeledSales(const char *lb = "brak", int yy = 0);
	LabeledSales(const char *lb, int yy, const double *gr, int n);
	virtual ~LabeledSales(void) { }

	const char * Label(void) const { return label; }
	virtual double operator[](int i) const;
	virtual double & operator[](int i);

private:
	char label[STRLEN];
};

#endif