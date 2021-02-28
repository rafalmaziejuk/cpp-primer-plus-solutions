#include "dma.h"
#include <cstring>

Base::Base(const char *l, int r)
{
	label = new char[std::strlen(l) + 1];
	std::strncpy(label, l, std::strlen(l));
	label[std::strlen(l)] = '\0';

	rating = r;
}

Base::Base(const Base &rs)
{
	label = new char[std::strlen(rs.label) + 1];
	std::strncpy(label, rs.label, std::strlen(rs.label));
	label[std::strlen(rs.label)] = '\0';

	rating = rs.rating;
}

Base::~Base(void)
{
	delete[] label;
}

const char * Base::get_label(void) const
{
	return label;
}

int Base::get_rating(void) const
{
	return rating;
}

void Base::View(void) const
{
	std::cout << "Etykietka: " << label << std::endl;
	std::cout << "Klasa: " << rating << std::endl;
}

Base & Base::operator=(const Base &rs)
{
	if (this == &rs)
		return *this;

	delete[] label;
	label = new char[strlen(rs.label) + 1];
	strcpy(label, rs.label);

	rating = rs.rating;

	return *this;
}

baseDMA::baseDMA(const char *l, int r) : Base(l, r)
{

}

void baseDMA::View(void) const
{
	Base::View();
}

lacksDMA::lacksDMA(const char *c, const char *l, int r) : Base(l, r)
{
	strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char *c, const Base &rs) : Base(rs)
{
	strncpy(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}

void lacksDMA::View(void) const
{
	Base::View();

	std::cout << "Kolor: " << color << std::endl;
}

hasDMA::hasDMA(const char *s, const char *l, int r) : Base(l, r)
{
	style = new char[strlen(s) + 1];
	strcpy(style, s);
}

hasDMA::hasDMA(const char *s, const Base &rs) : Base(rs)
{
	style = new char[strlen(s) + 1];
	strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &hs) : Base(hs)
{
	style = new char[strlen(hs.style) + 1];
	strcpy(style, hs.style);
}

hasDMA::~hasDMA(void)
{
	delete[] style;
}

void hasDMA::View(void) const
{
	Base::View();

	std::cout << "Styl: " << style << std::endl;
}

hasDMA & hasDMA::operator=(const hasDMA &hs)
{
	if (this == &hs)
		return *this;

	Base::operator=(hs);

	style = new char[strlen(hs.style) + 1];
	strcpy(style, hs.style);

	return *this;
}