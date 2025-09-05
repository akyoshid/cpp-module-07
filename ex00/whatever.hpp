/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 21:41:07 by akyoshid          #+#    #+#             */
/*   Updated: 2025/09/05 12:33:41 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_WHATEVER_HPP_
# define EX00_WHATEVER_HPP_

template <typename T>
void swap(T& a, T& b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
T& min(T& a, T& b) {
    if (a < b)
        return a;
    else
        return b;
}

template <typename T>
T& max(T& a, T& b) {
    if (a > b)
        return a;
    else
        return b;
}

#endif
