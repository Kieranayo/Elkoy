#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
params [
    ["_unit",objNull,[objNull]],
    ["_part","",[""]],
    ["_damage",0,[0]],
    ["_source",objNull,[objNull]],
    ["_projectile","",[""]],
    ["_index",0,[0]]
];

//VDM Report And ADD
if ((isPlayer _source) && (vehicle _source != _source)) then {
if(_part == "body" && (player getVariable["limit",true]) && (side _source == civilian)) then {
player setVariable ["limit",false];
[_source] spawn {
_driver = _this select 0;
[0,format["%1 just ran over %2!", name _driver, name player]] remoteExec ["life_fnc_broadcast",0];
sleep(10);
player setVariable ["limit",true];
	};
};				
_damage = getDammage player;
};

//Handle the tazer first (Top-Priority).
if (!isNull _source && {_source != _unit}) then
{
	if (currentWeapon _source in ["arifle_Mk20_plain_F","hgun_P07_snds_F"]) then
	{
		if (alive player && !life_istazed && !life_isknocked && !(_unit getVariable["restrained",false]) && _unit distance _source < 100) then
		{
			[_unit, _source] spawn life_fnc_tazed;
			_damage = damage player;
        };
    };
};

_damage;