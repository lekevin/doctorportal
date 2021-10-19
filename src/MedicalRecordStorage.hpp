/*
 * MedicalRecordStorage.hpp
 *
 *  Created on: Oct 19, 2021
 *      Author: Trong
 */

#ifndef MEDICALRECORDSTORAGE_HPP_
#define MEDICALRECORDSTORAGE_HPP_

#include "MedicalRecord.hpp"
#include <vector>


class MedicalRecordStorage {
private:
	std::vector<MedicalRecord> record;
public:
	MedicalRecordStorage();
	void addRecord(MedicalRecord record);
	void removeRecord(MedicalRecord record);
	void printRecord(std::string name, int birthday);
	void modifyRecord(MedicalRecord record);

};


#endif /* MEDICALRECORDSTORAGE_HPP_ */
