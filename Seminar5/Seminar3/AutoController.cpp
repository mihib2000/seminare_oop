#include "AutoController.h"

AutoController* AutoController::instance = NULL;


AutoController::AutoController() {
	AutoInMemoryRepository a;

	a.save(Auto(1, "BMW", "M4"));
	a.save(Auto(2, "AUDI", "RS7"));
	a.save(Auto(3, "VW", "CC"));
	a.save(Auto(4, "MERCEDES", "C63"));
	//repo = a;
	//instance.repo = a;
}

AutoController*  AutoController::return_instance()
{
	if (!instance)
		instance = new AutoController();

	return instance;
}

void AutoController::set_repo(AutoInMemoryRepository a)
{
	instance->repo = a;
}




Auto AutoController::findAutoById(int id)
{
	return instance->repo.findOne(id);
}

std::vector<Auto> AutoController::findAll()
{
	return instance->repo.findAll();
}

Auto AutoController::saveAuto(Auto a)
{
	return instance->repo.save(a);
}

Auto AutoController::updateAuto(Auto a)
{
	return instance->repo.update(a);
}

Auto AutoController::deleteAuto(int id)
{
	return instance->repo.del(id);
}

void AutoController::sort_autos()
{
	for (int i = 0; i < instance->repo.size(); ++i)
	{
		for (int j = 0; j < instance->repo.size(); ++j)
		{
			if (instance->repo.autos[i].getMarke() < instance->repo.autos[j].getMarke())
			{
				swap(instance->repo.autos[i], instance->repo.autos[j]);
				
			}
		}
	}
}
