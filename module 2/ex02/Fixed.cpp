/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 11:46:25 by msimoes           #+#    #+#             */
/*   Updated: 2026/10/19 11:52:17 by msimoes          ###   ########.fr       */
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
	_value = copy._value;
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
	if (this == &copy)
		return *this;
	std::cout << "Copy assignment operator called" << std::endl;
	_value = copy._value;
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return this->_value > fixed._value;
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return this->_value < fixed._value;
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return this->_value >= fixed._value;
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return this->_value <= fixed._value;
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return this->_value == fixed._value;
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return this->_value != fixed._value;
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	if (fixed._value == 0)
	{
		std::cerr << "Error: division by zero" << std::endl;
		return Fixed(0);
	}
	return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++()
{
	++_value;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp;

	tmp.setRawBits(this->_value);
	++_value;
	return tmp;
}

Fixed &Fixed::operator--()
{
	--_value;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp;

	tmp.setRawBits(this->_value);
	--_value;
	return tmp;
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return fixed1;
	return fixed2;
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return fixed1;
	return fixed2;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return fixed1;
	return fixed2;
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return fixed1;
	return fixed2;
}

int Fixed::getRawBits(void) const
{
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
