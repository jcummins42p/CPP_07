/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:44:19 by jcummins          #+#    #+#             */
/*   Updated: 2024/12/04 18:55:16 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# define MAX_VAL 255

# include <iostream>

template <typename T>
class Array
{
	public:
		Array ( void ) : _size(0) {};
		Array ( unsigned int n ) : _size(n), _items(new T[n]) {};
		Array ( const Array &other ) : _size(other.size()), _items(new T[other.size()])
		{
			for (unsigned int i = 0; i < other.size(); i++) {
				_items[i] = other[i];
			}
		};
		Array &operator= ( const Array &other )
		{
			for (unsigned int i = 0; i < other.size(); i++) {
				_items[i] = other[i];
			}
		};
		~Array ( void ) { delete [] _items; };

		T &operator[] ( const unsigned int &i ) {
			if (i >= _size)
				throw OutOfBoundsException();
			return _items[i];
		};
		const T &operator[] ( const unsigned int &i ) const {
			if (i >= _size)
				throw OutOfBoundsException();
			return _items[i];
		};

		unsigned int size ( void ) const { return _size; };

		class OutOfBoundsException : public std::exception {
			public:
				const char * what( void ) const throw() {
					return ("Index out of bounds");
				}
		} ;
	private:
		unsigned int _size;
		T 			*_items;
} ;

template <typename T>
T	max(const T &x, const T &y) {
	return (x > y ? x : y);
}

template <typename T>
T	min(const T &x, const T &y) {
	return (x < y ? x : y);
}

template <typename T>
void decrementValue(T *x) {
	(*x)--;
}

template <typename T>
void incrementValue(T *x) {
	(*x)++;
}

template <typename T>
void doubleValue(T *x) {
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
