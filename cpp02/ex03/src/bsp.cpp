/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:10:58 by eahn              #+#    #+#             */
/*   Updated: 2024/11/14 23:32:38 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

// Helper function to calculate the area of a triangle using the cross product
static Fixed calculateArea(const Point& p1, const Point& p2, const Point& p3)
{
	Fixed x1 = p1.getX();
	Fixed y1 = p1.getY();
	Fixed x2 = p2.getX();
	Fixed y2 = p2.getY();
	Fixed x3 = p3.getX();
	Fixed y3 = p3.getY();

	Fixed area = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);

	if (area < Fixed(0))
		return -area / Fixed(2);
	return area / Fixed(2);
}

// Function to determine if a point lies inside a triangle
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed totalArea = calculateArea(a, b, c);

	Fixed area1 = calculateArea(point, a, b);
	Fixed area2 = calculateArea(point, b, c);
	Fixed area3 = calculateArea(point, c, a);

	// Check if the sum of sub-triangle areas is equal to the total area
	return (totalArea == (area1 + area2 + area3));
}

/**
Vector cross product
A(x1, y1)
B(x2, y2)
C(x3, y3)

vector AB = (x2 - x1, y2 - y1)
vector AC = (x3 - x1, y3 - y1)

AB x AC = (x2 - x1)*(y3 - y1) - (y2 - y1)*(x3 - x1)	
= |AB * AC| = area of parallelogram
area of triangle = 1/2 * |AB * AC|

(simplified)
Triangle area = 1/2 * |x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)|
 */
