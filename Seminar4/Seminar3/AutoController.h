#pragma once
#include "CrudRepository.h"
class AutoController
{
private:
	AutoInMemoryRepository repo;
public:
	AutoController(AutoInMemoryRepository a);
	Auto findAutoById(int id);
	std::vector<Auto> findAll();
	Auto saveAuto(Auto a);
	Auto updateAuto(Auto a);
	Auto deleteAuto(int id);

};

