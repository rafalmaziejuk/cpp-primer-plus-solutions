#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>

namespace VECTOR
{
	class Vector
	{
	private:
		double x;
		double y;
		double mag;
		double ang;
		char mode;

		void set_mag(void);
		void set_ang(void);
		void set_x(void);
		void set_y(void);

	public:
		Vector(void);
		Vector(double n1, double n2, char form = 'r');
		~Vector();

		void set(double n1, double n2, char form = 'r');
		double xval(void) const { return x; }
		double yval(void) const { return y; }
		double magval(void) const { return mag; }
		double angval(void) const { return ang; }
		void polar_mode(void);
		void rect_mode(void);

		Vector operator+(const Vector &b) const;
		Vector operator-(const Vector &b) const;
		Vector operator-(void) const;
		Vector operator*(double n) const;

		friend Vector operator*(double n, const Vector &a);
		friend std::ostream & operator<<(std::ostream &os, const Vector &v);
	};
}

#endif