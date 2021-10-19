/*
 * MedicalHistory.hpp
 *
 *  Created on: Oct 19, 2021
 *      Author: Trong
 */
#include <string>

using std::string;

#ifndef MEDICALHISTORY_HPP_
#define MEDICALHISTORY_HPP_

struct MedicalHistory {
	string illnesses,
	vaccination,
	allergies;
	MedicalHistory() : illnesses(""), vaccination(""), allergies(""){};
	MedicalHistory(string i, string v, string a): illnesses(i), vaccination(v), allergies(a){};
};

#endif /* MEDICALHISTORY_HPP_ */
