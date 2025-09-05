/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:59:39 by akyoshid          #+#    #+#             */
/*   Updated: 2025/09/05 14:17:27 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_ITER_HPP_
# define EX01_ITER_HPP_

#include <cstddef>

template <typename T, typename F>
void iter(T* array, size_t len, F func) {
    for (size_t i = 0; i < len; ++i)
        func(array[i]);
}

template <typename T, typename F>
void iter(const T* array, size_t len, F func) {
    for (size_t i = 0; i < len; ++i)
        func(array[i]);
}

#endif
