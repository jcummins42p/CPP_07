/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:44:19 by jcummins          #+#    #+#             */
/*   Updated: 2024/12/16 13:44:59 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# define MAX_VAL 255

template <typename T>
const T	&max(const T &x, const T &y)
{
	return (x > y ? x : y);
}

template <typename T>
const T	&min(const T &x, const T &y)
{
	return (x < y ? x : y);
}

template <typename T>
void decrementValue(T *x)
{
	(*x)--;
}

template <typename T>
void incrementValue(T *x)
{
	(*x)++;
}

template <typename T>
void doubleValue(T *x)
{
	*x = *x * 2;
}

template <typename T>
void halfValue(T *x)
{
	*x = *x / 2;
}

template <typename T>
void printItem( T *x )
{
	std::cout << *x << std::endl;
}

template <typename T>
void printItem( const T *x )
{
	std::cout << *x << std::endl;
}

template <typename T>
bool isSorted(T *arr, size_t arrlen)
{
	if (!arr || arrlen > MAX_VAL)
		throw( std::exception() ) ;
	for (size_t i = 0; i + 1 < arrlen; i++) {
		if (arr[i] != arr[i + 1] && max(arr[i], arr[i + 1]) == arr[i]) {
			std::cout << "Not Sorted" << std::endl;
			return (false);
		}
	}
	std::cout << "Already Sorted" << std::endl;
	return (true);
}

template <typename T>
void reverseArray(T *arr, size_t arrlen)
{
	size_t i = 0;
	size_t j = arrlen - 1;

	while (i < j)
	{
		T tmp = arr[i];
		arr[i++] = arr[j];
		arr[j--] = tmp;
	}
}

template <typename T>
void iter(T *arr, size_t arrlen, void (*func)(T *x))
{
	if (!arr || !func)
		throw( std::exception() ) ;
	if (arrlen > MAX_VAL)
		throw( std::exception() ) ;
	for (size_t i = 0; i < arrlen; i++) {
		if (! &arr[i])
			throw( std::exception() );
		(*func)(&arr[i]);
	}
}

template <typename T>
void iter(T *arr, size_t arrlen, void (*func)(const T &x))
{
	if (!arr || !func)
		throw( std::exception() ) ;
	if (arrlen > MAX_VAL)
		throw( std::exception() ) ;
	for (size_t i = 0; i < arrlen; i++) {
		if (! &arr[i])
			throw( std::exception() );
		(*func)(arr[i]);
	}
}

#endif
