/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:44:19 by jcummins          #+#    #+#             */
/*   Updated: 2024/12/02 12:47:12 by jcummins         ###   ########.fr       */
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

#endif
