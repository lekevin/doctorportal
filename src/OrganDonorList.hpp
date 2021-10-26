/*
 * OrganDonorList.hpp
 *
 *  Created on: Oct 19, 2021
 *      Author: Kevin Le
 */

#include <string>

using std::string;

#ifndef ORGANDONORLIST_HPP_
#define ORGANDONORLIST_HPP_

struct OrganDonorList {

	string organ;
    int quantity;

	OrganDonorList():
    organ(""), quantity(){};

	OrganDonorList(string o, int q):
    organ(o), quantity(q){};

};


#endif /* ORGANDONORLIST_HPP_ */
