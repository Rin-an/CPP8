/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 01:21:54 by ssadiki           #+#    #+#             */
/*   Updated: 2023/01/03 03:15:16 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0)
{
//	std::cout << "Constructor called!" << std::endl;
}

Span::Span(unsigned int n) : _n(n)
{
//	std::cout << "Constructor with arguments called!" << std::endl;
}

Span::Span(const Span& a)
{
	*this = a;
//	std::cout << "Copy constructor called!" << std::endl;
}

Span&	Span::operator=(const Span& a)
{
	if (this != &a)
	{
		this->_n = a._n;
		this->_sp = a._sp;
	}
	return (*this);
}

Span::~Span()
{
//	std::cout << "Destructor called!" << std::endl;
}

void	Span::addNumber(int n)
{
	if (_sp.size() > this->_n)
		throw std::out_of_range("Limit reached!");
	_sp.push_back(n);
}

int	Span::shortestSpan()
{
	if (_sp.size() < 2)
		throw EmptyException();
	std::sort(_sp.begin(), _sp.end());
	int	min = _sp[1] - _sp[0];
	int	tmp;
	for(unsigned int i=1; i < _sp.size() - 1; i++)
	{
		tmp = _sp[i + 1] - _sp[i];
		if (tmp < min)
			min = tmp;
	}
	return (min);
}

int	Span::longestSpan()
{
	if (_sp.size() < 2)
		throw EmptyException();
	return (*std::max_element(_sp.begin(), _sp.end()) - *std::min_element(_sp.begin(), _sp.end()));
}

std::vector<int>	Span::getContainer() const
{
	return (this->_sp);
}
