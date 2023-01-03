/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 01:16:29 by ssadiki           #+#    #+#             */
/*   Updated: 2023/01/03 03:07:41 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	unsigned int		_n;
	std::vector<int>	_sp;
	public :
		class EmptyException : public std::exception
		{
			public :
				virtual const char*	what() const throw()
				{
					return ("Span empty or has one number.");
				}
		};
		Span();
		Span(unsigned int);
		Span(const Span&);
		Span&	operator=(const Span&);
		~Span();
		std::vector<int>	getContainer() const;
		void	addNumber(int);
		template<typename T>
		void	addNumber(T s, T e)
		{
			if (_sp.size() + e - s > _n)
				throw std::out_of_range("Limite reached!");
			_sp.insert(_sp.end(), s ,e);
		}
		int		shortestSpan();
		int		longestSpan();
};
std::ostream&	operator<<(std::ostream&, const Span&);
#endif
