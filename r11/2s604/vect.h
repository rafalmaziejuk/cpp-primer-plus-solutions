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
		char mode;

		double get_mag(void) const;
		double get_ang(void) const;
		void set_x(double mag = 0.0, double ang = 0.0);
		void set_y(double mag = 0.0, double ang = 0.0);

	public:
		Vector(void);
		Vector(double n1, double n2, char form = 'r');
		~Vector();

		void set(double n1, double n2, char form = 'r');
		double xval(void) const { return x; }
		double yval(void) const { return y; }
		double magval(void) const { return get_mag(); }
		double angval(void) const { return get_ang(); }
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