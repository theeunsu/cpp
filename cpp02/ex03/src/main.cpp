/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:39:40 by eahn              #+#    #+#             */
/*   Updated: 2024/11/15 00:13:21 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include "../inc/Point.hpp"


void testPoint(const Point& a, const Point& b, const Point& c, const Point& point, const std::string& description) {
    std::cout << "Testing " << description << ": ";
    if (bsp(a, b, c, point)) {
        std::cout << "INSIDE" << std::endl;
    } else {
        std::cout << "OUTSIDE" << std::endl;
    }
}

int main() {
    // Define the triangle vertices
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);

    // Define test points
    Point insidePoint(5, 5);     // Inside the triangle
    Point outsidePoint(15, 5);   // Outside the triangle
    Point edgePoint(5, 0);       // On the edge of the triangle
    Point vertexPoint(0, 0);     // On the vertex of the triangle

    // Test each point
    testPoint(a, b, c, insidePoint, "point inside the triangle (5, 5)");
    testPoint(a, b, c, outsidePoint, "point outside the triangle (15, 5)");
    testPoint(a, b, c, edgePoint, "point on the edge of the triangle (5, 0)");
    testPoint(a, b, c, vertexPoint, "point on the vertex of the triangle (0, 0)");

    return 0;
}
