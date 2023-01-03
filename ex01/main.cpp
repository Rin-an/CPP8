/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 02:16:52 by ssadiki           #+#    #+#             */
/*   Updated: 2023/01/03 03:11:57 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#define MAX_SIZE 20000

int	main()
{
	Span	span(MAX_SIZE);
	std::vector<int>	arr;

	srand(time(NULL));
	for (int i=0; i < MAX_SIZE; i++)
		arr.push_back(rand());
	try{
		span.addNumber(arr.begin(), arr.end());
		std::cout << "Longest span: " << span.longestSpan() << std::endl;
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		span.addNumber(90);
		span.addNumber(10); //It wil throw an error
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	{
		Span sp = Span(5);
		try{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}	
