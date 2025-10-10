//---------------------------------------------------------------------------

#ifndef tProjectileH
#define tProjectileH

#include "tPlants.h"
#include "tError.h"
#include <vector>
//---------------------------------------------------------------------------

using namespace std;

struct MoveData {
    int stepX;
    int stepY;
    int stepsRemaining;
};

class tProjectile : public TImage {
	private:
		int velocity;
		int damage;
		tPlants* originPlant;

        TTimer* moveTimer;
		void __fastcall OnMoveTimer(TObject *Sender);

	public:
		__fastcall tProjectile(TComponent* Owner, tPlants* shooter);
		void moveProjectile(vector<tProjectile*> &projectile, int i);
		void __fastcall OnProjectileClick(TObject *Sender);
        int getDamage();
};
#endif

