/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 15:24:31 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/08 16:09:09 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* a, b를 벡터로 간주하고 두 벡터의 외적을 구함.
 * 외적의 z-value가 양수이면 a->b는 반시계방향, 음수이면 a->b는 시계방향
*/
static int cross_sign(Point a, Point b) {
	Fixed z = a.getx() * b.gety() - a.gety() * b.getx();

	if (z > 0)
		return 1;
	else if (z < 0)
		return -1;
	else
		return 0;
}

bool bsp(Point const A, Point const B, Point const C, Point const P) {
	Point PA = A - P;
	Point PB = B - P;
	Point PC = C - P;

	int ab_direction = cross_sign(PA, PB);
	int bc_direction = cross_sign(PB, PC);
	int ca_direction = cross_sign(PC, PA);

	if (ab_direction > 0 && bc_direction > 0 && ca_direction > 0)
		return true;
	if (ab_direction < 0 && bc_direction < 0 && ca_direction < 0)
		return true;
	return false;
}
