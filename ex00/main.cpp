/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 23:31:09 by ssadiki           #+#    #+#             */
/*   Updated: 2023/01/03 01:06:07 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <array>
#include "easyfind.hpp"

int	main()
{
	std::array<int, 7> arr = {54,10,48,20,3,4,10};

	try{
		std::cout << easyfind(arr, 3) << " found." << std::endl;
		std::cout << easyfind(arr, 5) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
