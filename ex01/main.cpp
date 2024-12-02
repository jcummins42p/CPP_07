/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:44:48 by jcummins          #+#    #+#             */
/*   Updated: 2024/12/02 12:43:48 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	populateArray(int arr[], int arrsize)
{
	for (int i = 0; i < arrsize; i++) {
		arr[i] = i;
	}
}

void	printArray(int arr[], int arrsize)
{
	std::cout << "Printing array of size " << arrsize << std::endl;
	for (int i = 0; i < arrsize; i++) {
		std::cout << "\t" << arr[i] << std::endl;
	}
}

int main(int, char**)
{
	int	arr[10];

	populateArray(arr, 10);

	std::cout << "Printing initial 0 - 9 array" << std::endl;
	iter(arr, 10, &printItem);
	std::cout << "Using iter to increment values in array" << std::endl;
	iter(arr, 10, &incrementValue);
	iter(arr, 10, &printItem);
	std::cout << "Using iter to decrement values in array" << std::endl;
	iter(arr, 10, &decrementValue);
	iter(arr, 10, &printItem);
	std::cout << "Using iter to double values in array" << std::endl;
	iter(arr, 10, &doubleValue);
	iter(arr, 10, &printItem);
	std::cout << "Using iter to half values in array" << std::endl;
	iter(arr, 10, &halfValue);
	iter(arr, 10, &printItem);
	std::cout << "Using iter to half values in array" << std::endl;
	iter(arr, 10, &halfValue);
	iter(arr, 10, &printItem);
	std::cout << "Using iter to half values in array" << std::endl;
	iter(arr, 10, &halfValue);
	iter(arr, 10, &printItem);
	return (0);
}
