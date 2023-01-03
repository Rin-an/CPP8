/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 03:37:40 by ssadiki           #+#    #+#             */
/*   Updated: 2023/01/03 05:29:59 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP
# include <iostream>
# include <stack>
# include <deque>

template<class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename Container::iterator	iterator;
		MutantStack() : MutantStack<T, Container>::stack(){};
		MutantStack(const MutantStack<T, Container>& a) : MutantStack<T, Container>::stack(a){};
		MutantStack&	operator=(const MutantStack& a) { 
			return (MutantStack<T, Container>::stack.operator=(a));
		};
		~MutantStack(){};
		iterator	begin() { return this->c.begin();};
		iterator	end() { return this->c.end();};
};
#endif
