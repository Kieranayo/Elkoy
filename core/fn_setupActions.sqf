/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
    case civilian: {
        //Drop fishing net
        life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
        //Rob person
        life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable["robbed",FALSE]) ']];
		//Gang
life_actions = life_actions + [player addAction["<t color='#FF0000'>Capture Gang Location</t>",life_fnc_areaCapture,"",0,false,false,"",' ((typeOf cursorTarget) == "Flag_Red_F") ']];

//Suicide alahsnackbar
life_actions = life_actions + [player addAction["<t color='#FF0000'>Activate Suicide Vest</t>",life_fnc_suicideBomb,"",0,false,false,"",' vest player == "V_HarnessOGL_gry" && alive player && playerSide == civilian && !life_istazed && !(player getVariable "restrained") && !(player getVariable "Escorting") && !(player getVariable "transporting")']];
    };
	
	case west:
	{
	     player addaction ["Barriers",life_fnc_barrier,[""],0,false,true,"","vehicle player == player and BarrierOpen == 0"];
	};
	//Gang
life_actions = life_actions + [player addAction["<t color='#FF0000'>Capture Gang Location</t>",life_fnc_areaCapture,"",0,false,false,"",' ((typeOf cursorTarget) == "Flag_Red_F") ']];
};

life_actions pushBack (player addAction["<t color = '#D660D6'>Put on Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
life_actions pushBack (player addAction["<t color = '#D660D6'>Remove Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);