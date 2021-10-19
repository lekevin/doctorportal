/*
 * MedicalRecord.hpp
 *
 *  Created on: Oct 19, 2021
 *      Author: Trong
 */

#ifndef MEDICALRECORD_HPP_
#define MEDICALRECORD_HPP_

#include "MedicalHistory.hpp"
#include <string>

using std::string;

class MedicalRecord {
private:
	string name;
	int age;
	string birthday;
	MedicalHistory history;
public:
	MedicalRecord() : name(""), age(-1), birthday("") {};
	MedicalRecord(string n, int a, string b, MedicalHistory h)
			: name(n), age(a), birthday(b), MedicalHistory(h) {};
	inline void setName(string name) : name(name) {};
	inline void setAge(int age) : age(age) {};
	inline void setBirthday(string bd) : birthday(bd) {};
	inline void setMedicalHistory(MedicalHistory history) : history(history) {};
	inline string getName() { return name; };
	inline int getAge() { return age; };
	inline string getBirthday() { return birthday; };
	inline MedicalHistory getHistory()  { return history; };
};



#endif /* MEDICALRECORDSTORAGE_HPP_ */
