/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:44:19 by jcummins          #+#    #+#             */
/*   Updated: 2024/12/02 13:23:00 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# define MAX_VAL 255

//template <typename T>
//class Array
//{
	//public:
		//Array ( void );
		//Array ( unsigned int n );
		//Array ( const Array &other );
		//Array &operator= ( const Array &other );
		//~Array ( void );

		////Array &operator[] ( void );

		//unsigned int size ( void ) const;
	//private:
		//T items[];
//} ;

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
bool isSorted(T *arr, size_t arrlen)
{
	if (!arr || arrlen > MAX_VAL)
		throw( std::exception() ) ;
	for (size_t i = 0; i + 1 < arrlen; i++) {
		if (arr[i] != arr[i + 1] && max(arr[i], arr[i + 1]) == arr[i])
			return (false);
	}
	return (true);
}

template <typename T>
void bubbleSort(T *arr, size_t arrlen)
{
	(void) arr;
	(void) arrlen;
}

template <typename T>
void iter(T *arr, size_t arrlen, void (*func)(T *x))
{
	if (!arr || !func || arrlen > MAX_VAL)
		throw( std::exception() ) ;
	for (size_t i = 0; i < arrlen; i++) {
		if (! &arr[i])
			throw( std::exception() );
		(*func)(&arr[i]);
	}
}

#endif
