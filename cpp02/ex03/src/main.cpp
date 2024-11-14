/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:39:40 by eahn              #+#    #+#             */
/*   Updated: 2024/11/14 23:40:22 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include "../inc/Point.hpp"


int main() {

    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);

    Point insidePoint(5, 5);
    Point outsidePoint(15, 5);
    Point edgePoint(5, 0);
    Point vertexPoint(0, 0);

    std::cout << "Testing point inside the triangle:" << std::endl;
    if (bsp(a, b, c, insidePoint))
        std::cout << "Point (5, 5) is inside the triangle." << std::endl;
    else
        std::cout << "Point (5, 5) is outside the triangle." << std::endl;

    std::cout << "\nTesting point outside the triangle:" << std::endl;
    if (bsp(a, b, c, outsidePoint))
        std::cout << "Point (15, 5) is inside the triangle." << std::endl;
    else
        std::cout << "Point (15, 5) is outside the triangle." << std::endl;

    std::cout << "\nTesting point on the edge of the triangle:" << std::endl;
    if (bsp(a, b, c, edgePoint))
        std::cout << "Point (5, 0) is inside the triangle." << std::endl;
    else
        std::cout << "Point (5, 0) is outside the triangle." << std::endl;

    std::cout << "\nTesting point on the vertex of the triangle:" << std::endl;
    if (bsp(a, b, c, vertexPoint))
        std::cout << "Point (0, 0) is inside the triangle." << std::endl;
    else
        std::cout << "Point (0, 0) is outside the triangle." << std::endl;

    return 0;
}
