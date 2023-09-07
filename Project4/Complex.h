#pragma once
#include <iostream>
#include <math.h>
#include <sstream>
class Complex
{
private:
	double im; //������
	double re; //�������������� �����
public:
	//������������
	Complex() : im{ 0 }, re{ 0 } { }
	Complex(double re) : im{ 0 }, re{ re } { }
	Complex(double re, double im) : re{ re }, im{ im } { }

	//getter/setter
	double& Re() { return re; }
	double& Im() { return im; }

	//�������� � ������
	void increment();					//���������
	void discrement();					//���������
	Complex negate();					//��������� �����
	Complex prefix_inc();				//����������  ���������
	Complex postfix_inc();				//����������� ���������
	Complex prefix_dis();				//���������� ���������
	Complex postfix_dis();				//����������� ���������
	Complex sum(Complex& other);		//�����
	Complex dif(Complex& other);		//��������
	Complex mov(Complex& other);		//������������
	Complex divv(Complex& other);		//�������

	//����������
	Complex operator+(Complex& other);	//�����
	Complex operator-(Complex& other);	//��������
	Complex operator*(Complex& other);	//������������
	Complex operator/(Complex& other);	//�������
	Complex operator++();				//����������  ���������
	Complex operator++(int);			//����������� ���������
	Complex operator--();				//���������� ���������
	Complex operator--(int);			//����������� ���������
	Complex operator~();				//������

	//����� ������������ �����
	std::string to_string();
	void display();
};

