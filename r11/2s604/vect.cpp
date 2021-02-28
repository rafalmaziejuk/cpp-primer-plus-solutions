#include <cmath>
#include "vect.h"

using std::cout;

namespace VECTOR
{
    const double Rad_to_deg = 57.2957795130823;
    
    double Vector::get_mag(void) const
    {
        return sqrt(x * x + y * y);
    }

	double Vector::get_ang(void) const
    {
        if (x == 0.0 && y == 0.0)
			return 0.0;
        else
			return atan2(y, x);
    }

    void Vector::set_x(double mag, double ang)
    {
        x = mag * cos(ang);
    }

    void Vector::set_y(double mag, double ang)
    {
        y = mag * sin(ang);
    }

    Vector::Vector(void)
    {
        x = y = 0.0;
        mode = 'r';
    }

    Vector::Vector(double n1, double n2, char form)
    {
        mode = form;

        if (form == 'r')
        {
            x = n1;
            y = n2;
        }
        else if (form == 'p')
        {
            set_x(n1, n2 / Rad_to_deg);
            set_y(n1, n2 / Rad_to_deg);
        }
        else
        {
            cout << "Niepoprawna wartoœæ trzeciego argumentu Vector() -- ";
            cout << "zerujê wektor\n";

            x = y = 0.0;
            mode = 'r';
        }
    }

    void Vector::set(double n1, double n2, char form)
    {
        mode = form;

        if (form == 'r')
        {
            x = n1;
            y = n2;
        }
        else if (form == 'p')
        {
			set_x(n1, n2 / Rad_to_deg);
			set_y(n1, n2 / Rad_to_deg);
        }
        else
        {
            cout << "Niepoprawny trzeci argument set() -- ";
            cout << "zerujê wektor\n";

            x = y = 0.0;
            mode = 'r';
        }
    }

    Vector::~Vector()
    {
    }

    void Vector::polar_mode(void)
    {
        mode = 'p';
    }

    void Vector::rect_mode(void)
    {
        mode = 'r';
    }

    Vector Vector::operator+(const Vector &b) const
    {
        return Vector(x + b.x, y + b.y);
    }

    Vector Vector::operator-(const Vector &b) const
    {
        return Vector(x - b.x, y - b.y);
    }

    Vector Vector::operator-(void) const
    {
        return Vector(-x, -y);
    }

    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }

    Vector operator*(double n, const Vector &a)
    {
        return a * n;
    }

    std::ostream & operator<<(std::ostream &os, const Vector &v)
    {
        if (v.mode == 'r')
            os << "(x,y) = (" << v.x << ", " << v.y << ")";
        else if (v.mode == 'p')
        {
            os << "(m,a) = (" << v.get_mag() << ", " << v.get_ang() * Rad_to_deg << ")";
        }
        else
            os << "Niepoprawny tryb reprezentacji obiektu wektora";

        return os;
    }
}