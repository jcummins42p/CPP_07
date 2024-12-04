/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:44:48 by jcummins          #+#    #+#             */
/*   Updated: 2024/12/04 18:55:51 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.tpp"

void	populateArray(int arr[], int arrsize)
{
	for (int i = 0; i < arrsize; i++) {
		arr[i] = i;
	}
}

int main(int, char**)
{
	size_t arrlen = 10;
	int	arr[10];

	populateArray(arr, arrlen);

	std::cout << "Printing initial 1 - 9 array" << std::endl;
	isSorted(arr, arrlen);
	reverseArray(arr, arrlen);
	iter(arr, arrlen, &printItem);
	//std::cout << "Using iter to increment values in array" << std::endl;
	//iter(arr, arrlen, &incrementValue);
	//iter(arr, arrlen, &printItem);
	//std::cout << "Using iter to decrement values in array" << std::endl;
	//iter(arr, arrlen, &decrementValue);
	//iter(arr, arrlen, &printItem);
	//std::cout << "Using iter to double values in array" << std::endl;
	//iter(arr, arrlen, &doubleValue);
	//iter(arr, arrlen, &printItem);
	//std::cout << "Using iter to half values in array" << std::endl;
	//iter(arr, arrlen, &halfValue);
	//iter(arr, arrlen, &printItem);
	//std::cout << "Using iter to half values in array" << std::endl;
	//iter(arr, arrlen, &halfValue);
	//iter(arr, arrlen, &printItem);
	//std::cout << "Using iter to half values in array" << std::endl;
	//iter(arr, arrlen, &halfValue);
	//iter(arr, arrlen, &printItem);
	return (0);
}
