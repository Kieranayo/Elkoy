/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_C_ConstructionCoverall_Red_F", "Construction Coverall (Red)", 5000, { "", "", -1 } },
			{ "U_C_ConstructionCoverall_Vrana_F", "Construction Coverall (Vrana)", 5000, { "", "", -1 } },
			{ "U_C_ConstructionCoverall_Black_F", "Construction Coverall (Black)", 5000, { "", "", -1 } },
			{ "U_C_ConstructionCoverall_Blue_F", "Construction Coverall (Blue)", 5000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_yellow_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_white_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_orange_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_red_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_vrana_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_black_F", "", 425, { "", "", -1 } },
			{ "H_PASGT_basic_blue_press_F", "", 425, { "", "", -1 } },
			{ "H_Construction_basic_yellow_F", "", 650, "" },
            { "H_Construction_basic_black_F", "", 650, "" },
            { "H_Construction_earprot_yellow_F", "", 650, "" },
            { "H_Construction_earprot_black_F", "", 650, "" },
            { "H_EarProtectors_white_F", "", 650, "" },
            { "H_EarProtectors_black_F", "", 650, "" },
            { "H_HeadSet_white_F", "", 650, "" },
            { "H_HeadSet_black_F", "", 650, "" },
            { "H_PASGT_basic_blue_press_F", "", 650, "" },
            { "H_PASGT_neckprot_blue_press_F", "", 650, "" },
            { "H_PASGT_basic_white_F", "", 650, "" },
            { "H_PASGT_basic_olive_F", "", 650, "" },
            { "H_Cap_White_IDAP_F", "", 650, "" },
            { "H_Cap_Black_IDAP_F", "", 650, "" },
            { "H_WirelessEarpiece_F", "", 650, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 25, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Safety_yellow_F", "", 5000, { "", "", -1 } },
			{ "V_Safety_orange_F", "", 5000, { "", "", -1 } },
            { "V_Safety_blue_F", "", 5000, { "", "", -1 } },
	        { "V_Press_F", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };
	
	   class anvil {
        title = "STR_Shops_C_anvil";
        license = "anvil";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam_tshirt", "", "", {"", "", -1} }, 
			{ "U_B_CombatUniform_mcam_worn", "", "", {"", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_HelmetB_light_desert", "", 0, { "", "", -1 } },
			{ "H_Beret_blk", "", 0, { "", "", -1 } },
			{ "H_Beret_02", "", 0, { "", "", -1 } },
			{ "H_Beret_Colonel", "", 0, { "", "", -1 } },
			{ "H_Watchcap_blk", "", 0, { "", "", -1 } }
        };
        goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Bandanna_aviator", "", 0, { "", "", -1 } },
			{ "G_Bandanna_blk", "", 0, { "", "", -1 } }
        };
        vests[] = {
			{ "V_PlateCarrierL_CTRG", "", 0, { "", "", -1 } },
            { "V_PlateCarrierH_CTRG", "", 0, { "", "", -1 } },
            { "V_TacVest_khk", "", , { "", 0, -1 } }     
		};
			backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
	
	class aff {
        title = "STR_Shops_C_aff";
        license = "aff";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_F", "", "", {"", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_HelmetB_camo", "", 0, { "", "", -1 } }
        };
        goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Bandanna_aviator", "", 0, { "", "", -1 } },
			{ "G_Bandanna_blk", "", 0, { "", "", -1 } }
        };
        vests[] = {
			{ "V_PlateCarrier2_tna_F", "", 50000, { "", "", -1 } }   
		};
			backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_CombatUniform_mcam", "Regular Cop Uniform", 0, { "life_coplevel", "SCALAR", 1 } },
            { "U_B_CombatUniform_mcam_vest", "Special Operations Uniform", 0, { "life_coplevel", "SCALAR", 2 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "", 5, { "", "", -1 } },
            { "H_Beret_blk_POLICE", "", 0, { "life_coplevel", "SCALAR", 2 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Squares", "", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 0, { "", "", -1 } },
            { "G_Sport_Blackred", "", 0, { "", "", -1 } },
            { "G_Sport_Checkered", "", 0, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 0, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 0, { "", "", -1 } },
            { "G_Lowprofile", "", 0, { "", "", -1 } },
            { "G_Combat", "", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } },
            { "G_Lady_Mirror", "", 0, { "", "", -1 } },
            { "G_Lady_Dark", "", 0, { "", "", -1 } },
            { "G_Lady_Blue", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVestIR_blk", "", 0, { "life_coplevel", "SCALAR", 1 } },
            { "V_PlateCarrier2_blk", "", 0, { "life_coplevel", "SCALAR", 2 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Carryall_cbr", "", 0, { "", "", -1 } }
        };
    };
	
	    class SCO19 {
        title = "STR_Shops_SCO19";
        license = "SCO19";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_CombatUniform_mcam", "Regular Cop Uniform", 0, { "life_coplevel", "SCALAR", 1 } },
            { "U_B_CombatUniform_mcam_vest", "Special Operations Uniform", 0, { "life_coplevel", "SCALAR", 2 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "", 0, { "", "", -1 } },
            { "H_Beret_blk_POLICE", "", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "H_HelmetSpecB_blk", "", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Balaclava_combat", "", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVestIR_blk", "", 0, { "life_coplevel", "SCALAR", 1 } },
            { "V_PlateCarrier2_blk", "", 0, { "life_coplevel", "SCALAR", 2 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Carryall_cbr", "", 0, { "", "", -1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_CombatUniform_mcam_worn", "HV Uniform", 0, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam", "BROKEN", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oli", "EMS Backpack", 0, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
			{ "U_IG_Guerilla2_1", "", 5000, {"", "", -1} },
			{ "U_IG_Guerilla2_2", "", 5000, {"", "", -1} },
			{ "U_IG_Guerilla2_3", "", 5000, {"", "", -1} },
			{ "U_IG_Guerilla3_1", "", 5000, {"", "", -1} },
			{ "U_IG_Guerilla3_2", "", 5000, {"", "", -1} },
			{ "U_BG_Guerilla2_1", "", 5000, {"", "", -1} },
			{ "U_BG_Guerilla2_2", "", 5000, {"", "", -1} },
			{ "U_BG_Guerilla2_3", "", 5000, {"", "", -1} },
			{ "U_BG_Guerilla3_1", "", 5000, {"", "", -1} },
			{ "U_BG_Guerilla3_2", "", 5000, {"", "", -1} },
			{ "U_I_C_Soldier_Bandit_1_F", "", 5000, {"", "", -1} },
			{ "U_I_C_Soldier_Bandit_2_F", "", 5000, {"", "", -1} },
			{ "U_I_C_Soldier_Bandit_3_F", "", 5000, {"", "", -1} },
			{ "U_I_C_Soldier_Bandit_4_F", "", 5000, {"", "", -1} },
			{ "U_I_C_Soldier_Bandit_5_F", "", 5000, {"", "", -1} },
			{ "U_I_C_Soldier_Para_1_F", "", 5000, {"", "", -1} },
			{ "U_I_C_Soldier_Para_2_F", "", 5000, {"", "", -1} },
			{ "U_I_C_Soldier_Para_3_F", "", 5000, {"", "", -1} },
			{ "U_I_C_Soldier_Para_4_F", "", 5000, {"", "", -1} },
			{ "U_I_C_Soldier_Para_5_F", "", 5000, {"", "", -1} },
			{ "U_OG_leader", "", 5000, {"", "", -1} },
			{ "U_B_survival_uniform", "", 5000, {"", "", -1} },
			{ "U_B_CTRG_1", "", 5000, {"", "", -1} },
			{ "U_B_CTRG_2", "", 5000, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 5000, {"", "", -1} },
			{ "U_I_G_resistanceLeader_F", "", 5000, {"", "", -1} },
			{ "U_O_PilotCoveralls", "", 5000, {"", "", -1} },
			{ "U_B_FullGhillie_ard", "", 200000, {"", "", -1} },
			{ "U_B_FullGhillie_lsh", "", 200000, {"", "", -1} },
			{ "U_B_FullGhillie_sard", "", 200000, {"", "", -1} },
			{ "U_O_FullGhillie_ard", "", 200000, {"", "", -1} },
			{ "U_O_FullGhillie_lsh", "", 200000, {"", "", -1} },
			{ "U_O_FullGhillie_sard", "", 200000, {"", "", -1} },
			{ "U_I_FullGhillie_ard", "", 200000, {"", "", -1} },
			{ "U_I_FullGhillie_lsh", "", 200000, {"", "", -1} },
			{ "U_I_FullGhillie_sard", "", 200000, {"", "", -1} },
			{ "U_B_CTRG_Soldier_F", "", 75000, {"", "", -1} }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Cap_headphones", "", 3000, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 4000, { "", "", -1 } },
			{ "H_Shemag_olive", "", 4000, { "", "", -1 } },
			{ "H_Shemag_khk", "", 4000, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 4000, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 3000, { "", "", -1 } },
			{ "H_Bandanna_khk", "", 3000, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 3000, { "", "", -1 } },
			{ "H_MilCap_mcamo", "", 3000, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 3000, { "", "", -1 } },
			{ "H_MilCap_gry", "", 3000, { "", "", -1 } },
			{ "H_Booniehat_dirty", "", 3000, { "", "", -1 } },
			{ "H_Booniehat_mcamo", "", 3000, { "", "", -1 } },
			{ "H_TurbanO_blk", "", 3000, { "", "", -1 } },
			{ "H_Booniehat_indp", "", 3000, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 6000, { "", "", -1 } },
			{ "H_HelmetIA_camo", "", 6000, { "", "", -1 } },
			{ "H_HelmetB", "", 6000, { "", "", -1 } },
			{ "H_HelmetB_paint", "", 6000, { "", "", -1 } },
			{ "H_HelmetB_light", "", 6000, { "", "", -1 } },			
			{ "H_HelmetB_camo", "", 6000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 250, { "", "", -1 } },
            { "G_Shades_Blue", "", 250, { "", "", -1 } },
            { "G_Sport_Blackred", "", 250, { "", "", -1 } },
            { "G_Sport_Checkered", "", 250, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 250, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 250, { "", "", -1 } },
            { "G_Squares", "", 250, { "", "", -1 } },
            { "G_Lowprofile", "", 250, { "", "", -1 } },
            { "G_Combat", "", 250, { "", "", -1 } },
            // BI
            { "G_Balaclava_blk", "", 2500, { "", "", -1 } },
            { "G_Balaclava_combat", "", 2500, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 2500, { "", "", -1 } },
            { "G_Balaclava_oli", "", 2500, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 2500, { "", "", -1 } },
            { "G_Bandanna_beast", "", 2500, { "", "", -1 } },
            { "G_Bandanna_blk", "", 2500, { "", "", -1 } },
            { "G_Bandanna_khk", "", 2500, { "", "", -1 } },
            { "G_Bandanna_oli", "", 2500, { "", "", -1 } },
            { "G_Bandanna_shades", "", 2500, { "", "", -1 } },
            { "G_Bandanna_sport", "", 2500, { "", "", -1 } },
            { "G_Bandanna_tan", "", 2500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 2500, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
			{ "V_BandollierB_oli", "", 4500, { "", "", -1 } },
			{ "V_BandollierB_blk", "", 4500, { "", "", -1 } },
			{ "V_Chestrig_oli", "", 5000, { "", "", -1 } },
			{ "V_Chestrig_blk", "", 5000, { "", "", -1 } },
			{ "V_Chestrig_rgr", "", 5000, { "", "", -1 } },
			{ "V_Chestrig_khk", "", 5000, { "", "", -1 } },
            { "V_HarnessO_brn", "", 7500, { "", "", -1 } },
			{ "V_Chestrig_rgr", "", 8500, { "", "", -1 } },
			{ "V_TacVest_oli", "", 9500, { "", "", -1 } },
			{ "V_TacVest_brn", "", 9500, { "", "", -1 } },
			{ "V_TacVest_khk", "", 9500, { "", "", -1 } },
			{ "V_TacVest_camo", "", 9500, { "", "", -1 } },
			{ "V_PlateCarrierIA1_dgtl", "", 50000, { "", "", -1 } },
			{ "V_PlateCarrier1_rgr", "", 50000, { "", "", -1 } },
			{ "V_PlateCarrierIA2_dgtl", "", 50000, { "", "", -1 } },
			{ "V_HarnessOGL_gry", "", 5000000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            {"B_AssaultPack_cbr", "", 3000, { "", "", -1 }},
			{"B_AssaultPack_tna_F", "", 3000, { "", "", -1 }},
            { "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 7500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 10000, { "", "", -1 } },
            { "B_Carryall_khk", "", 10000, { "", "", -1 } },
			{ "B_Carryall_ghex_F", "", 10000, { "", "", -1 } },
			{ "B_Bergen_dgtl_F", "", 50000, { "", "", -1 } },
			{ "B_Bergen_mcamo_F", "", 50000, { "", "", -1 } },
			{ "B_Bergen_tna_F", "", 50000, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};

#
