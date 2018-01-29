/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 },
			{ "arifle_Mk20C_F", "", 80000, 65000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
			{ "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "", 200 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 }
        };
    };

    class rebel {
        name = "Elkoy's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
			{ "Rangefinder", "", 8000, 6500 },	
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },		
			{ "hgun_Pistol_01_F", "", 20000, 12500 },
			{ "hgun_Rook40_F", "", 35000, 25000 },
			{ "hgun_ACPC2_F", "", 30000, 20000 },
			{ "hgun_Pistol_heavy_01_F", "", 40000, 30000 },
			{ "hgun_Pistol_heavy_02_F", "", 35000, 25000 },
			{ "arifle_Mk20C_F", "", 80000, 65000 },
			{ "arifle_Mk20_F", "", 90000, 80000 },			
			{ "SMG_05_F", "", 75000, 65000 },
			{ "SMG_01_F", "", 75000, 65000 },
			{ "arifle_AKS_F", "", 90000, 80000 },
			{ "arifle_SPAR_01_khk_F", "", 85000, 60000 },
			{ "arifle_TRG21_F", "", 90000, 80000 },
			{ "arifle_TRG20_F", "", 90000, 80000 },
			{ "arifle_CTAR_GL_ghex_F", "", 100000, 80000 },
			{ "arifle_Katiba_F", "", 110000, 100000 },
			{ "arifle_MXC_F", "", 250000, 100000 },
			{ "arifle_MX_F", "", 250000, 100000 },
			{ "arifle_MXM_F", "", 250000, 100000 },
			{ "srifle_DMR_07_hex_F", "", 135000, 100000 },
			{ "hgun_PDW2000_F", "", 20000, 10000 },
			{ "arifle_ARX_ghex_F", "", 20000, 100000 },			
			{ "arifle_SPAR_02_khk_F", "", 200000, 125000 },
			{ "srifle_DMR_01_F", "", 200000, 100000 },
			{ "srifle_LRR_F", "", 1250000, 1000000 },
			{ "arifle_AKM_F", "", 325000, 120000 },
			{ "arifle_AKM_FL_F", "", 325000, 120000 },
			{ "srifle_GM6_camo_F", "", 2000000, 1750000 }
        };
        mags[] = {
			{ "10Rnd_50BW_Mag_F", "", 1750 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 1750 },
			{ "150Rnd_556x45_Drum_Mag_Tracer_F", "", 750 },
			{ "7Rnd_408_Mag", "", 2000 },
			{ "30Rnd_762x39_Mag_F", "", 1500 },
			{ "30Rnd_762x39_Mag_Green_F", "", 1000 },
			{ "5Rnd_127x108_Mag", "", 6000 },
			{ "5Rnd_127x108_APDS_Mag", "", 9000 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 450 },
			{ "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "", 200 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 450 },
			{ "30Rnd_45ACP_Mag_SMG_01_Tracer_Red", "", 200 },
			{ "30Rnd_545x39_Mag_F", "", 750 },
			{ "30Rnd_545x39_Mag_Green_F", "", 500 },
			{ "30Rnd_580x42_Mag_F", "", 750 },
			{ "30Rnd_580x42_Mag_Tracer_F", "", 500 },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 650 },		
			{ "30Rnd_65x39_caseless_mag", "", 750 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 500 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 750 },
			{ "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_9x21_Red_Mag", "", 100 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
			{ "10Rnd_9x21_Mag", "", 250 },
			{ "16Rnd_9x21_Mag", "", 250 },
			{ "9Rnd_45ACP_Mag", "", 250 },
			{ "11Rnd_45ACP_Mag", "", 250 },
			{ "6Rnd_45ACP_Cylinder", "", 250 },
			{ "30Rnd_556x45_Stanag", "", 2000 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 950 },
			{ "20Rnd_556x45_UW_mag", "", 125 }
        };
        accs[] = {
			{ "acc_pointer_IR", "", 250 },
			{ "bipod_01_F_snd", "", 250 },
			{ "bipod_01_F_blk", "", 250 },
			{ "bipod_01_F_mtp", "", 250 },			
            { "optic_AMS_khk", "", 3500 },
			{ "optic_MRCO", "", 1000 },
			{ "optic_ERCO_khk_F", "", 650 },
			{ "optic_ERCO_blk_F", "", 650 },
			{ "optic_ERCO_snd_F", "", 650 },
			{ "bipod_01_F_khk", "", 100 },
			{ "optic_ACO_grn", "", 850 },
            { "optic_Holosight", "", 750 },
            { "optic_Hamr", "", 350 },
            { "acc_flashlight", "", 150 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };
	
    class anvil {
        name = "Anvil Weapon Shop";
        side = "civ";
        license = "anvil";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "Rook40", 0, -1 },
			{ "arifle_MX_GL_Holo_pointer_snds_F", "MX 3GL", 0,-1},
			{ "arifle_AK12_GL_F", "AK-12 GL", 0, -1},
			{ "arifle_CTARS_blk_F", "CAR-95", 0, -1 },
			{ "arifle_ARX_blk_F", "Type 115", 0, -1},
			{ "MMG_02_black_F", "SPMG .338", 0, -1},
			{ "srifle_DMR_05_blk_F", "Cyrus 9.3", 0, -1},
			{ "srifle_DMR_06_camo_F", "MK14", 0, -1}
			
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Rook 16Rnd", 1500 },
			{ "16Rnd_9x21_red_Mag", "Rook 16Rnd Red Tracers", 1500},
			{ "30Rnd_65x39_caseless_mag", "MX 3GL 30Rnd", 1500},
			{ "30Rnd_65x39_caseless_mag_Tracer", "MX 3GL 30Rnd Tracers", 1500},
			{ "30Rnd_762x39_Mag_F", "AK-12 GL 30Rnd", 1500},
			{ "30Rnd_762x39_Mag_Green_F", "AK-12 30Rnd Green", 1500},
			{ "30Rnd_762x39_Mag_Tracer_F", "AK-12 30Rnd Tracers", 1500},
			{ "30Rnd_762x39_Mag_Tracer_Green_F", "AK-12 30Rnd Green Tracers", 1500},
			{ "100Rnd_580x42_Mag_F", "CAR-95 100Rnd", 1500},
			{ "100Rnd_580x42_Mag_Tracer_F", "CAR-95 100Rnd Tracers", 1500},
			{ "30Rnd_65x39_caseless_green", "Type 115 30Rnd", 1500},
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "Type 115 30Rnd Green Tracers", 1500},
			{ "10Rnd_50BW_Mag_F", "Type 115 10Rnd 50BW", 1500},
			{ "130Rnd_338_Mag", "SMG 130Rnd", 1500},
			{ "10Rnd_93x64_DMR_05_Mag", "Cyrus 9,3 10Rnd", 1500},
			{ "20Rnd_762x51_Mag", "MK14 10Rnd", 1500}
			
        };
        accs[] = {
            { "optic_Arco", "Arco", 1500 },
			{ "optic_DMS", "", 1500 },
			{ "optic_LRPS", "", 1500 },
			{ "optic_SOS", "", 1500 },
			{ "optic_AMS", "", 1500 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
		
    };
	    class SCO19 {
        name = "SCO19 Weapon Shop";
        side = "cop";
        license = "SCO19";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be SCO19 to access this shop!" };
        items[] = {
			{"B_UavTerminal","UAV Controls",0, -1},
		    {"B_UAV_01_backpack_F","Darter Backpack",0, -1},
            { "LMG_03_F", "LIM-85", 0, -1 },
            { "srifle_DMR_03_F", "MK1", 0, -1 },
			{ "arifle_SPAR_03_blk_F", "Spar-17", 0, -1 },
			{ "srifle_EBR_MRCO_LP_BI_F", "MK18", 0, -1 },
			{ "srifle_LRR_LRPS_F", "LRR", 0, -1 },
			{ "FirstAidKit", "", 0, -1 },
			{ "NVGoggles_OPFOR", "", 0, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "P07 Tazer Rounds", 0 },
			{ "20Rnd_762x51_Mag", "MK1 Magazine", 0 },
			{ "20Rnd_762x51_Mag", "Spar-17 Magazine", 0 },
			{ "20Rnd_762x51_Mag", "Mk18 Magazine", 0 },
			{ "7Rnd_408_Mag", "LRR Magazine", 0 }
        };
        accs[] = {
            { "optic_MRCO", "", 0 },
			{ "optic_ERCO_blk_F", "", 0 },
			{ "optic_Holosight", "", 0 },
			{ "optic_Hamr", "", 0 },
			{ "optic_KHS_blk", "", 0 },
			{ "optic_LRPS", "", 0 }
        };
    };
	
       class PCSO {
        name = "Police Weapon Shop!";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a PCSO to access this shop!" };
        items[] = {
            { "hgun_P07_snds_F", "P07 Tazer Gun", 0, -1 },
            { "arifle_Mk20_plain_F", "Rubber Gun", 0, -1 },
			{ "FirstAidKit", "", 0, -1 },
			{ "NVGoggles", "", 0, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "P07 Tazer Rounds", 0 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "Rubber Bullet", 0}
        };
        accs[] = {
            { "", "", 0 }
        };
    };
      
	  class PC {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a PC to access this shop!" };
        items[] = {
            { "arifle_SPAR_01_blk_F", "Black Spar-16", 0, -1 },
            { "arifle_TRG21_F", "TRG 21", 0, -1 },
            { "Protector 9 mm", "Protector", 0, -1 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "Spar-16 Magazines", 0 },
            { "30Rnd_556x45_Stanag", "TRG Magazines", 0 },
            { "30Rnd_9x21_Mag_SMG_02", "Protector Magazines", 0 }
        };
        accs[] = {
            { "optic_MRCO", "", 0 },
            { "optic_ERCO_blk_F", "", 0 },
            { "optic_Aco", "", 0 },
            { "optic_Holosight", "", 0 }
        };
    };
     
	 class SGT {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a SGT to access this shop!" };
        items[] = {
            { "arifle_CTAR_blk_F", "", 0, -1 }
        };
        mags[] = {
            { "30Rnd_580x42_Mag_F", "Car-95 Magazines", 0 }
        };
        accs[] = {
            { "optic_Hamr", "", 0 },
            { "optic_Arco_blk_F", "", 0 }
        };
    };
      
	  class INS {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a INS to access this shop!" };
        items[] = {
            { "arifle_MX_Black_Hamr_pointer_F", "", 0, -1 },
            { "arifle_Katiba_C_F", "", 0, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "MX Magazine", 0 },
            { "30Rnd_65x39_caseless_green", "Katiba Magazine", 0 }
        };
        accs[] = {
            { "optic_Hamr", "", 0 },
            { "optic_Arco_blk_F", "", 0 }
        };
    };
       
	   class CI {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a CI to access this shop!" };
        items[] = {
            { "arifle_MXM_Black_F", "MXM", 0, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "MXM Magazine", 0 }
        };
        accs[] = {
            { "optic_KHS_blk", "", 0 }
        };
    };
       
	   class SI {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "You must be a SI to access this shop!" };
        items[] = {
            { "arifle_SPAR_03_blk_F", "Spar-17", 0, -1 },
            { "arifle_SPAR_02_blk_F", "Spar-16S", 0, -1 },
            { "srifle_DMR_06_camo_F", "Mk14", 0, -1 }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "Spar-17 Magazine", 0 },
            { "150Rnd_556x45_Drum_Mag_F", "Spar-16S Magazine", 0 },
            { "20Rnd_762x51_Mag", "Mk14 Magazine", 0 }
        };
        accs[] = {
            { "optic_KHS_blk", "", 0 }
        };
    };
      
	  class CSI {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "You must be a CSI to access this shop!" };
        items[] = {
            { "srifle_EBR_MRCO_LP_BI_F", "MK18", 0, -1 }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "Mk18 Magazine", 0 }
        };
        accs[] = {
            { "optic_KHS_blk", "", 0 }
        };
    };
      
	  class ACC {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "You must be a ACC to access this shop!" };
        items[] = {
            { "srifle_DMR_05_blk_F", "Cyrus", 0, -1 },
            { "srifle_DMR_03_F", "MK1", 0, -1 },
            { "srifle_DMR_07_blk_F", "CMR-76", 0, -1 }
        };
        mags[] = {
            { "10Rnd_93x64_DMR_05_Mag", "Cyrus Magazine", 0 },
            { "20Rnd_762x51_Mag", "MK1 Magazine", 0 },
            { "20Rnd_650x39_Cased_Mag_F", "CMR Magazine", 0 }
        };
        accs[] = {
            { "optic_LRPS", "", 0 }
        };
    };
      
	  class DCC {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 9, "You must be a DCC to access this shop!" };
        items[] = {
            { "arifle_MX_SW_Black_F", "MX SW", 0, -1 }
        };
        mags[] = {
            { "100Rnd_65x39_caseless_mag", "MX SW Magazine", 0 }
        };
        accs[] = {
            { "optic_LRPS", "", 0 }
        };
    };
      
	  class CC {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 10, "You must be a CC to access this shop!" };
        items[] = {
            { "arifle_AK12_F", "AK12", 0, -1 },
            { "LMG_03_F", "LIM-85", 0, -1 },
            { "srifle_DMR_04_F", "ASP-Kir", 0, -1 },
			{ "FirstAidKit", "", 150, 65 },
			{ "NVGoggles", "", 1200, 980 }
        };
        mags[] = {
            { "30Rnd_762x39_Mag_F", "AK12 Magazine", 0 },
            { "200Rnd_556x45_Box_F", "LIM-85 Magazine", 0 },
            { "10Rnd_127x54_Mag", "ASP-Kir Magazine", 0 }
        };
        accs[] = {
            { "optic_AMS", "", 0 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};
