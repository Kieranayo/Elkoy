scriptName "functions_home_1";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: mav_ttm_var_canRepairn_1.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "functions_home_1.sqf"


_ownsDependency1 = [life_currentExpPerks, "functions_home_1"] call mav_ttm_fnc_hasPerk;

if (_ownsDependency1) then {
    mav_ttm_var_home = 1;
};
