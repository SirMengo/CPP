/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 11:45:59 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/02 04:30:32 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <cfloat>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int value);
		Fixed(const float value);
		Fixed &operator=(const Fixed &copy);
		bool operator>(const Fixed &fixed) const;
		bool operator<(const Fixed &fixed) const;
		bool operator>=(const Fixed &fixed) const;
		bool operator<=(const Fixed &fixed) const;
		bool operator==(const Fixed &fixed) const;
		bool operator!=(const Fixed &fixed) const;
		Fixed operator+(const Fixed &fixed);
		Fixed operator-(const Fixed &fixed);
		Fixed operator*(const Fixed &fixed);
		Fixed operator/(const Fixed &fixed);
		Fixed operator++();
		Fixed operator++(int qqlr);
		Fixed operator--();
		Fixed operator--(int qqlr);
		static Fixed min(Fixed &fixed1, Fixed &fixed2);
		static Fixed const min(const Fixed &fixed1, const Fixed &fixed2);
		static Fixed max(Fixed &fixed1, Fixed &fixed2);
		static Fixed const max(const Fixed &fixed1, const Fixed &fixed2);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
	private:
		int _value;
		static const int _bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
