#pragma once
#include <iostream>
#include <math.h>
#include <sstream>
class Complex
{
private:
	double im; //мнимая
	double re; //действительная часть
public:
	//конструкторы
	Complex() : im{ 0 }, re{ 0 } { }
	Complex(double re) : im{ 0 }, re{ re } { }
	Complex(double re, double im) : re{ re }, im{ im } { }

	//getter/setter
	double& Re() { return re; }
	double& Im() { return im; }

	//операции с дробью
	void increment();					//инкримент
	void discrement();					//декримент
	Complex negate();					//изменение знака
	Complex prefix_inc();				//префиксный  инкримент
	Complex postfix_inc();				//постфиксный инкримент
	Complex prefix_dis();				//префиксный декремент
	Complex postfix_dis();				//постфиксный декримент
	Complex sum(Complex& other);		//сумма
	Complex dif(Complex& other);		//разность
	Complex mov(Complex& other);		//произведение
	Complex divv(Complex& other);		//частное

	//опрераторы
	Complex operator+(Complex& other);	//сумма
	Complex operator-(Complex& other);	//разность
	Complex operator*(Complex& other);	//произведение
	Complex operator/(Complex& other);	//частное
	Complex operator++();				//префиксный  инкримент
	Complex operator++(int);			//постфиксный инкримент
	Complex operator--();				//префиксный декремент
	Complex operator--(int);			//постфиксный декримент
	Complex operator~();				//модуль

	//вывод комплексного числа
	std::string to_string();
	void display();
};

