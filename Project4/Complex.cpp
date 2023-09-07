#include "Complex.h"




void Complex::increment()
{
	re++;
}

void Complex::discrement()
{
	re--;
}

Complex Complex::prefix_inc()
{
	increment();
	return *this;
}

Complex Complex::postfix_inc()
{
	Complex old = *this;
	increment();
	return old;
}

Complex Complex::prefix_dis()
{
	discrement();
	return *this;
}

Complex Complex::postfix_dis()
{
	Complex old = *this;
	discrement();
	return old;
}

Complex Complex::sum(Complex& other)
{
	Complex result;
	result.re = re + other.re;
	result.im = im + other.im;

	return result;
}

Complex Complex::dif(Complex& other)
{
	Complex result;
	result.re = re + other.re;
	result.im = im + other.im;

	return result;
}

Complex Complex::mov(Complex& other)
{
	Complex result;
	result.re = (re * other.re) - (im * other.im);
	result.im = (re * other.im) + (im * other.re);

	return result;
}

Complex Complex::divv(Complex& other)
{
	Complex result;
	double denominator = (other.im * other.im) + (other.im * other.im);
	result.re = ((re * other.re) + (im * other.im)) / denominator;
	result.im = ((im * other.re) - (re * other.im)) / denominator;
	return result;
}

Complex Complex::operator+(Complex& other)
{
	return sum(other);
}

Complex Complex::operator-(Complex& other)
{
	return dif(other);
}

Complex Complex::operator*(Complex& other)
{
	return mov(other);
}

Complex Complex::operator/(Complex& other)
{
	return divv(other);
}

Complex Complex::operator++()
{
	return prefix_inc();
}

Complex Complex::operator++(int)
{
	return postfix_inc();
}

Complex Complex::operator--()
{
	return prefix_dis();
}

Complex Complex::operator--(int)
{
	return postfix_dis();
}

Complex Complex::operator~()
{
	re = std::sqrt(re * re);
	im = std::sqrt(im * im);
	return *this;
}

Complex Complex::negate()
{
	re = -re;
	im = -im;
	return *this;
}

std::string Complex::to_string()
{
	std::ostringstream out;
	if (im > 0)
		out << re << "+" << im << "i";
	else if (im == 0)
		out << re;
	else
		out << re << im << "i";
	return out.str();

}

void Complex::display()
{
	std::cout << to_string() << std::endl;
}

