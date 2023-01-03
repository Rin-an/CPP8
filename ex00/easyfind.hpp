/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 22:49:23 by ssadiki           #+#    #+#             */
/*   Updated: 2023/01/03 01:04:55 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
//The first occurrence of the second parameter in the first parameter
class NoOccurenceException : public std::exception
{
	public:
		virtual const char*	what() const throw()
		{
			return ("No occurence found!");
		}
};

template<typename T>
int	easyfind(T& x, int i)
{
	typename T::iterator	it = std::find(x.begin(), x.end(), i);

	if (it == x.end())
		throw std::out_of_range("No occurence found!");
	return (*it);
}
#endif
