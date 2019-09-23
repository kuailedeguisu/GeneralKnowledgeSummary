/*
 * sum.hpp
 *
 *  Created on: Sep 22, 2019
 *      Author: chunhongliu
 */

#ifndef SUM_HPP_
#define SUM_HPP_

int sum(int maxNum) {
	int sum = 0;
	for (int i = 1; i <= maxNum; ++i) {
		sum += i;
	}
	return sum;
}

#endif /* SUM_HPP_ */
