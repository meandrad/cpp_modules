/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:36:14 by meandrad          #+#    #+#             */
/*   Updated: 2026/03/13 12:51:41 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructors
Fixed::Fixed() : _value(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed::Fixed(int int_num)
{
	_value = int_num << _fracBits;
}

Fixed::Fixed(float float_num)
{
	_value = roundf(float_num * (1 << _fracBits));
}

//Getters and Setters
int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int Fixed::toInt(void) const
{
	return (this->_value >> _fracBits);
}

float Fixed::toFloat(void) const
{
	return((float)this->_value / float(1 << _fracBits));
}

Fixed &Fixed::operator=(const Fixed& other)
{
	if (this != &other)
	{
		this->_value = other.getRawBits();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}

//comparison functions
bool Fixed::operator>(const Fixed &other) const
{
	return(this->_value > other._value);
}

bool Fixed::operator<(const Fixed &other) const
{
	return(this->_value < other._value);
}

bool Fixed::operator>=(const Fixed &other) const
{
	return(this->_value >= other._value);
}

bool Fixed::operator<=(const Fixed &other) const
{
	return(this->_value <= other._value);
}

bool Fixed::operator==(const Fixed &other) const
{
	return(this->_value == other._value);
}

bool Fixed::operator!=(const Fixed &other) const
{
	return(this->_value != other._value);
}

//Arithmetic functions
Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;
	result.setRawBits(this->_value + other._value);
	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;
	result.setRawBits(this->_value - other._value);
	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;
	result.setRawBits((this->_value * other._value) >> _fracBits);
	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;
	result.setRawBits((this->_value << _fracBits) / other._value);
	return (result);
}

//Increment and decrement operators
Fixed &Fixed::operator++()
{
	this->_value += 1;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->_value += 1;
	return(temp);
}

Fixed &Fixed::operator--()
{
	this->_value -= 1;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->_value -= 1;
	return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return(a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return(a < b ? a: b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return(a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return(a > b ? a: b);
}