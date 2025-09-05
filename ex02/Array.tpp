/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 16:19:03 by akyoshid          #+#    #+#             */
/*   Updated: 2025/09/05 18:22:34 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include "Array.hpp"

template <typename T>
Array<T>::Array() : array_(NULL), len_(0) {
}

template <typename T>
Array<T>::Array(unsigned int n) : array_(new T[n]()), len_(n) {
}

template <typename T>
Array<T>::Array(const Array& src) : array_(NULL), len_(0) {
    if (src.len_ > 0) {
        array_ = new T[src.len_];
        for (unsigned int i = 0; i < src.len_; ++i)
            array_[i] = src.array_[i];
        len_ = src.len_;
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& src) {
    if (this != &src) {
        delete[] array_;
        array_ = NULL;
        len_ = 0;
        if (src.len_ > 0) {
            array_ = new T[src.len_];
            for (unsigned int i = 0; i < src.len_; ++i)
                array_[i] = src.array_[i];
            len_ = src.len_;
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] array_;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= len_)
        throw std::exception();
    return array_[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= len_)
        throw std::exception();
    return array_[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return len_;
}
