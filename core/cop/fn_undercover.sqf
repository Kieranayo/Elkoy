#include "..\script_macros.hpp"
if (license_cop_undercover) then
	{
		[] spawn life_fnc_stripDownPlayer;
		player addUniform "U_C_Poloshirt_blue"; //civ clothing may make random?
		player addWeapon "hgun_P07_snds_F"; //handgun
		player addMagazines ["16Rnd_9x21_Mag", 4]; //4 mags

		//inventory items
		player addItem "ItemMap";
		player assignItem "ItemMap";
		player addItem "ItemCompass";
		player assignItem "ItemCompass";
		player addItem "ItemWatch";
		player assignItem "ItemWatch";
		player addItem "ItemGPS";
		player assignItem "ItemGPS";
	};
[] call life_fnc_saveGear;
