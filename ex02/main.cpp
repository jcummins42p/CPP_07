/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:43:14 by jcummins          #+#    #+#             */
/*   Updated: 2024/12/02 13:25:14 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(int, char**)
{
	int arry[5] = {1, 2, 3, 4, 5};

	if (isSorted(arry, 5))
		std::cout << "Sorted already" << std::endl;
	else
		std::cout << "Not sorted" << std::endl;
    //Array<int> numbers(MAX_VAL);
    //int* mirror = new int[MAX_VAL];

    //srand(time(NULL));
    //for (int i = 0; i < MAX_VAL; i++)
    //{
        //const int value = rand();
        //numbers[i] = value;
        //mirror[i] = value;
    //}
    ////SCOPE
    //{
        //Array<int> tmp = numbers;
        //Array<int> test(tmp);
    //}

    //for (int i = 0; i < MAX_VAL; i++)
    //{
        //if (mirror[i] != numbers[i])
        //{
            //std::cerr << "didn't save the same value!!" << std::endl;
            //return 1;
        //}
    //}
    //try
    //{
        //numbers[-2] = 0;
    //}
    //catch(const std::exception& e)
    //{
        //std::cerr << e.what() << '\n';
    //}
    //try
    //{
        //numbers[MAX_VAL] = 0;
    //}
    //catch(const std::exception& e)
    //{
        //std::cerr << e.what() << '\n';
    //}

    //for (int i = 0; i < MAX_VAL; i++)
    //{
        //numbers[i] = rand();
    //}
    //delete [] mirror;//
    return 0;
}