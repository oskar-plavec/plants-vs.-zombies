//---------------------------------------------------------------------------
#ifndef tPlantsH
#define tPlantsH
//#include "tZombie.h"
//#include "Unit1.h"
#include "tStructs.h"
//---------------------------------------------------------------------------

using namespace std;


class tPlants : public TImage{
	private:
		String plantType;
		int plantHp = 1;
		int attackPower = 1;
		int attackInterval = 1;
		int cost = 25;
		int cooldownTime = 1;
		bool shooting = false;

	public:
		__fastcall tPlants(TComponent* Owner, String type, int top, int left);
		void eatZombie(nPlant &plant);
		void changePicture(String fileName);
		int getPlantHp();
		int getAttackPower();
		int getAttackInterval();
		int getCost();
		int getCooldownTime();
		bool getShooting();
		bool dealDamageToPlant(int damage);
		String getPlantType();
};

#endif
