

#include "..\..\script_macros.hpp"
/*
 File: fn_craftCfg.sqf
 Author: EdgeKiller
 Description:
 Master configuration file for the crafting menu.
*/
private["_craft","_return"];
_craft = param [0,"",[""]];

if(_craft == "") exitWith {closeDialog 0}; //Bad shop type passed.
switch(_craft) do {
    case "weapon": {
        _return = [
            [Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]
            ["hgun_Pistol_01_F", ["diamond_cut",2,"copper_refined",1]],
            ["SMG_01_F", ["gunbarrel",2,"copper_refined",5,"cloth",3,"diamond_uncut",2]],
            ["SMG_05_F", ["gunbarrel",1,"cloth",2,"copper_refined",4,"diamond_uncut",1]],
            ["hgun_PDW2000_F", ["gunbarrel",1,"cloth",1,"copper_refined",3]],
            ["optic_Aco", ["diamond_cut",2,"glass",2,"iron_refined",1]],
            ["optic_ACO_grn", ["diamond_cut",2,"glass",2,"iron_refined",1]],
            ["optic_Holosight", ["diamond_cut",3,"glass",3,"iron_refined",2]]
        ];
    };
    case "uniform": {
        _return = [
            //[Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]
            ["U_BG_leader", ["diamond_cut",5,"cloth",5,"iron_refined",8]]
        ];
    };
    case "backpack": {
        _return = [
            //[Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]
            ["B_Carryall_mcamo", ["diamond_cut",1,"cloth",4,"kevlar",2]]
        ];
    };
    case "item": {
        _return = [
            //[Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]
            ["spikeStrip", ["copper_refined",2]],
            ["lockpick", ["copper_refined",1]]
        ];
    };
};
_return;
