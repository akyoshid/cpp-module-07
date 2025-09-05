/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 16:18:46 by akyoshid          #+#    #+#             */
/*   Updated: 2025/09/05 17:13:31 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_ARRAY_HPP_
# define EX02_ARRAY_HPP_

# include <cstdlib>

template <typename T>
class Array {
 public:
    Array();
    Array(unsigned int n);
    Array(const Array& src);
    Array& operator=(const Array& src);
    ~Array();
    T& operator[](int index);
    const T& operator[](int index) const;
    unsigned int size() const;
 private:
    T *array;
    unsigned int len;
};

# include "Array.tpp"

#endif
