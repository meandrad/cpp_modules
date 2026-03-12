/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:21:00 by meandrad          #+#    #+#             */
/*   Updated: 2026/03/11 18:19:32 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _value;
		static const int _fracBits  = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& other);
		Fixed &operator=(const Fixed& other);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif