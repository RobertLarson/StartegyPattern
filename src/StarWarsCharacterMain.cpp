/*
 * StarWarsCharacterMain.cpp
 *
 *  Created on: Jan 24, 2017
 *      Author: Robert Larson
 */

#include "HanSolo.h"
#include "LukeSkywalker.h"
#include "Chewy.h"

#include "BlasterBehavior.h"
#include "CrossBowBehavior.h"
#include "LightSaberBehavior.h"

int main()
{
	StarWarsCharacter * hanSolo       = new HanSolo();
	StarWarsCharacter * lukeSkywalker = new LukeSkywalker();
	StarWarsCharacter * chewy         = new Chewy();

	WeaponBehavior * blasterBehavior    = new BlasterBehavior();
	WeaponBehavior * lightSaberBehavior = new LightSaberBehavior();
	WeaponBehavior * crossBowBehavior   = new CrossBowBehavior();

	hanSolo->SetWeaponBehavior(blasterBehavior);
	lukeSkywalker->SetWeaponBehavior(lightSaberBehavior);
	chewy->SetWeaponBehavior(crossBowBehavior);

	hanSolo->Fight();
    lukeSkywalker->Fight();
    chewy->Fight();

    delete hanSolo;
    delete lukeSkywalker;
    delete chewy;

    delete blasterBehavior;
    delete lightSaberBehavior;
    delete crossBowBehavior;

	return 0;
}
