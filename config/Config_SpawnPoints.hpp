/*
*    Format:
*        licenses: ARRAY (This is for limiting spawn to certain things)
*           0: License Name
*           1: License Check Type
*                false: If license isn't set
*                true: If license is set
*           Example:
*                licenses[] = { { "pilot", true }, { "rebel", false } }; //Shows up for players with pilot and without rebel license.
*
*        level: ARRAY (This is for limiting spawn to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL / INVERSE)
*                SCALAR: VALUE => VALUE
*                BOOL: VALUE EXISTS
*                EQUAL: VALUE == VALUE
*                INVERSE: VALUE <= VALUE
*            2: What to compare to (-1 = Check Disabled)
*
*/
class CfgSpawnPoints {
    class Civilian {
        class Kavala {
            displayName = "Kavala";
            spawnMarker = "civ_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Athira {
            displayName = "Athira";
            spawnMarker = "civ_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Pyrgos";
            spawnMarker = "civ_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Sofia {
            displayName = "Sofia";
            spawnMarker = "civ_spawn_4";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
		
		class aff {
            displayName = "AFF Gang Base";
            spawnMarker = "civ_gang_aff";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "aff", true } };
            level[] = { "", "", -1 };
        };
		
		class ion {
            displayName = "Ion Headquarters";
            spawnMarker = "civ_spawn_ion";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "ion", true } };
            level[] = { "", "", -1 };
        };
		
        class AnvilCP {
            displayName = "Anvil Checkpoint";
            spawnMarker = "civ_spawn_anvilcp";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "anvil", true } };
            level[] = { "", "", -1 };
        };
		
        class AnvilFOB {
            displayName = "Anvil F.O.B";
            spawnMarker = "civ_spawn_anvilfob";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "anvil", true } };
            level[] = { "", "", -1 };
        };
    };

    class Cop {
        class Kavala {
            displayName = "Kavala Department";
            spawnMarker = "cop_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Athira {
            displayName = "Athira Department";
            spawnMarker = "cop_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
	
        class SCO19 {
            displayName = "SCO19";
            spawnMarker = "cop_spawn_sco19";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "sco19", true } };
            level[] = { "", "", -1 };
        };
    };

    class Medic {
        class Kavala {
            displayName = "Kavala Hospital";
            spawnMarker = "medic_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Athira {
            displayName = "Athira Regional";
            spawnMarker = "medic_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Pyrgos Hospital";
            spawnMarker = "medic_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };
};