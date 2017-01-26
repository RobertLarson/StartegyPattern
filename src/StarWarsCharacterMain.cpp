/*
 * StarWarsCharacterMain.cpp
 *
 *  Created on: Jan 24, 2017
 *      Author: Robert Larson
 */

#include <string>

#include "BlasterBehavior.h"
#include "CrossBowBehavior.h"
#include "LightSaberBehavior.h"

#include "StarWarsCharacter.h"

int main()
{
	WeaponBehavior * blasterBehavior    = new BlasterBehavior();
	WeaponBehavior * lightSaberBehavior = new LightSaberBehavior();
	WeaponBehavior * crossBowBehavior   = new CrossBowBehavior();

	StarWarsCharacter * hanSolo       = new StarWarsCharacter(std::string("Han Solo"), blasterBehavior);
	StarWarsCharacter * lukeSkywalker = new StarWarsCharacter(std::string("Luke Skywalker"), lightSaberBehavior);
	StarWarsCharacter * chewy         = new StarWarsCharacter(std::string("Chewy"), crossBowBehavior);


	hanSolo->SetWeaponBehavior(blasterBehavior);
	lukeSkywalker->SetWeaponBehavior(lightSaberBehavior);
	chewy->SetWeaponBehavior(crossBowBehavior);

	hanSolo->Fight();
    lukeSkywalker->Fight();
    chewy->Fight();

	hanSolo->SetWeaponBehavior(lightSaberBehavior);
	lukeSkywalker->SetWeaponBehavior(crossBowBehavior);
	chewy->SetWeaponBehavior(blasterBehavior);

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
