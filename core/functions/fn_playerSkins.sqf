#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Bailey
	Description: Well this is obvious you nonce
*/

switch (playerSide) do {
    case west: {
			if (uniform player isEqualTo "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) isEqualTo 1)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_pcsouniform.paa"];
            };	
			if (uniform player isEqualTo "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) isEqualTo 2)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_hvuniform.paa"];
            };	
			if (uniform player isEqualTo "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) isEqualTo 3)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_hvuniform.paa"];
            };		
			if (uniform player isEqualTo "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) isEqualTo 4)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_hvuniform.paa"];
            };		
			if (uniform player isEqualTo "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) isEqualTo 5)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_hvuniform.paa"];
            };			
			if (uniform player isEqualTo "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) isEqualTo 6)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_hvuniform.paa"];
            };			
			if (uniform player isEqualTo "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) isEqualTo 7)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_hvuniform.paa"];
            };			
			if (uniform player isEqualTo "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) isEqualTo 8)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_hvuniform.paa"];
            };			
			if (uniform player isEqualTo "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) isEqualTo 9)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_hvuniform.paa"];
            };			
			if (uniform player isEqualTo "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) isEqualTo 10)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_hvuniform.paa"];
            };		
			if (uniform player isEqualTo "U_B_CombatUniform_mcam_vest" && (FETCH_CONST(life_coplevel) isEqualTo 1)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_blackuniform.paa"];
            };	
			if (uniform player isEqualTo "U_B_CombatUniform_mcam_vest" && (FETCH_CONST(life_coplevel) isEqualTo 2)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_blackuniform.paa"];
            };	
			if (uniform player isEqualTo "U_B_CombatUniform_mcam_vest" && (FETCH_CONST(life_coplevel) isEqualTo 3)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_blackuniform.paa"];
            };		
			if (uniform player isEqualTo "U_B_CombatUniform_mcam_vest" && (FETCH_CONST(life_coplevel) isEqualTo 4)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_blackuniform.paa"];
            };		
			if (uniform player isEqualTo "U_B_CombatUniform_mcam_vest" && (FETCH_CONST(life_coplevel) isEqualTo 5)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_blackuniform.paa"];
            };			
			if (uniform player isEqualTo "U_B_CombatUniform_mcam_vest" && (FETCH_CONST(life_coplevel) isEqualTo 6)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_blackuniform.paa"];
            };			
			if (uniform player isEqualTo "U_B_CombatUniform_mcam_vest" && (FETCH_CONST(life_coplevel) isEqualTo 7)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_blackuniform.paa"];
            };			
			if (uniform player isEqualTo "U_B_CombatUniform_mcam_vest" && (FETCH_CONST(life_coplevel) isEqualTo 8)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_blackuniform.paa"];
            };			
			if (uniform player isEqualTo "U_B_CombatUniform_mcam_vest" && (FETCH_CONST(life_coplevel) isEqualTo 9)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_blackuniform.paa"];
            };			
			if (uniform player isEqualTo "U_B_CombatUniform_mcam_vest" && (FETCH_CONST(life_coplevel) isEqualTo 10)) then {
				player setObjectTextureGlobal [0, "textures\scotpol_blackuniform.paa"];
            };
			if (uniform player isEqualTo "U_B_CombatUniform_mcam_vest" && (FETCH_CONST(life_coplevel) > 1)) then {
				unitbackpack player setObjectTextureGlobal [0, ""];
            };		
			if (uniform player isEqualTo "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) > 1)) then {
				unitbackpack player setObjectTextureGlobal [0, ""];
            };
        };
	
    case independent: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"];
        };
    };
};