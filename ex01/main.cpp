/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:58:58 by akyoshid          #+#    #+#             */
/*   Updated: 2025/09/05 15:17:01 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void increment_int(int& i) {
    ++i;
}

void print_int(const int& i) {
    std::cout << i;
}

void increment_char(char& c) {
    ++c;
}

void print_char(const char& c) {
    std::cout << c;
}

int main() {
    int array[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    iter(array, 8, print_int);
    std::cout << std::endl;
    iter(array, 8, increment_int);
    iter(array, 8, print_int);
    std::cout << std::endl;
    int const const_array[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    iter(const_array, 8, print_int);
    std::cout << std::endl;
    char str[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    iter(str, 8, print_char);
    std::cout << std::endl;
    iter(str, 8, increment_char);
    iter(str, 8, print_char);
    std::cout << std::endl;
    const char const_str[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    iter(const_str, 8, print_char);
    std::cout << std::endl;
    return 0;
}
