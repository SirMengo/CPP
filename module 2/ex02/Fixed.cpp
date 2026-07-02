/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 11:46:25 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/02 04:33:33 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}
Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_value = value << _bits;
}
Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(value * (1 << _bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	if(this == &copy)
		return *this;
	std::cout << "Copy assignment operator called" << std::endl;
	_value = copy.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

bool Fixed::operator>(const Fixed &fixed) const
{
	if(this->_value > fixed._value)
		return true;
	return false;
}

bool Fixed::operator<(const Fixed &fixed) const
{
	if(this->_value < fixed._value)
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	if(this->_value >= fixed._value)
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	if(this->_value >= fixed._value)
		return true;
	return false;
}

bool Fixed::operator==(const Fixed &fixed) const
{
	if(this->_value == fixed._value)
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	if(this->_value != fixed._value)
		return true;
	return false;
}

Fixed Fixed::operator+(const Fixed &fixed)
{
	return fixed.toFloat() + this->toFloat();
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	return fixed.toFloat() - this->toFloat();
}

Fixed Fixed::operator*(const Fixed &fixed)
{
	return fixed.toFloat() * this->toFloat();
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	return fixed.toFloat() / this->toFloat();
}

Fixed Fixed::operator++()
{
	return _value++;
}

Fixed Fixed::operator++(int qqlr)
{
	qqlr = this->_value;
	_value++;
	return qqlr;
}

Fixed Fixed::operator--()
{
	return --_value;
}

Fixed Fixed::operator--(int qqlr)
{
	qqlr = this->_value;
	_value--;
	return qqlr;
}

Fixed Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if(fixed1.toFloat() < fixed2.toFloat())
		return fixed1;
	else
		return fixed2;
}

const Fixed Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if(fixed1.toFloat() < fixed2.toFloat())
		return fixed1;
	else
		return fixed2;
}

Fixed Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if(fixed1.toFloat() > fixed2.toFloat())
		return fixed1;
	else
		return fixed2;
}

const Fixed Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if(fixed1.toFloat() > fixed2.toFloat())
		return fixed1;
	else
		return fixed2;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;	
}

float Fixed::toFloat(void) const
{
	return (float)_value / (1 << _bits);
}

int Fixed::toInt(void) const
{
	return _value >> _bits;
}




