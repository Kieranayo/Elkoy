class life_spawn_selection
{
 idd = 38500;
 movingEnabled = 0;
 enableSimulation = 1;
 class controlsBackground
 {
     class life_RscTitleBackground: Life_RscText
     {
        idc = 1000;
        x = 0.0771875 * safezoneW + safezoneX;
        y = 0.17 * safezoneH + safezoneY;
        w = 0.108281 * safezoneW;
        h = 0.616 * safezoneH;
        colorBackground[] = {0.294,0.286,0.286,0.8};
     };
 
     class InvTablet: Life_RscPicture
     {
            idc = 9090909;
            text = "textures\load.jpg";
            x = -0.7125;
            y = -0.42;
            w = 2.425;
            h = 1.84;
        };
 
     /*class Title: Life_RscText
     {
     idc = 1001;
     text = "Spawn Selection";
     x = 0.0132501 * safezoneW + safezoneX;
     y = 0.0402 * safezoneH + safezoneY;
     w = 0.164999 * safezoneW;
     h = 0.0242 * safezoneH;
     };
    */
     class MapView: Life_RscMapControl
     {
        idc = 38502;
        x = 0.195781 * safezoneW + safezoneX;
        y = 0.17 * safezoneH + safezoneY;
        w = 0.629062 * safezoneW;
        h = 0.693 * safezoneH;
        maxSatelliteAlpha = 0.75;
        alphaFadeStartScale = 1.15;
        alphaFadeEndScale = 1.29;
        };
     };
 
 class controls {
 class spawnList: Life_RscListNbox
 {
    idc = 38510;
    x = 0.0771875 * safezoneW + safezoneX;
    y = 0.17 * safezoneH + safezoneY;
    w = 0.108281 * safezoneW;
    h = 0.616 * safezoneH;
    text = "";
    sizeEx = 0.041;
    coloumns[] = {0,0,0.9};
    drawSideArrows = 1;
    idcLeft = -1;
    idcRight = -1;
    rowHeight = 0.050;
    onLBSelChanged = "_this call life_fnc_spawnPointSelected;";
 };
 
 class spawnButton: Life_RscButtonMenu
 {
    idc = -1;
    text = "Enter";
    x = 0.0771875 * safezoneW + safezoneX;
    y = 0.797 * safezoneH + safezoneY;
    w = 0.108281 * safezoneW;
    h = 0.066 * safezoneH;
    style = "0x02";
    colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
    colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
    colorBackgroundDisabled[] = {0.95,0.95,0.95,0};
    offsetX = 0.003;
    offsetY = 0.003;
    offsetPressedX = 0.002;
    offsetPressedY = 0.002;
    colorShadow[] = {0,0,0,1};
    colorBorder[] = {0,0,0,0};
    borderSize = 0.008;
    onButtonClick = "[] call life_fnc_spawnConfirm";
    };
};
};
 
/* #Qyxabo
$[
    1.063,
    ["Load",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
    [1800,"mapview",[1,"",["0.159687 * safezoneW + safezoneX","0.214 * safezoneH + safezoneY","0.670312 * safezoneW","0.627 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
    [1500,"",[1,"",["0.0410935 * safezoneW + safezoneX","0.214 * safezoneH + safezoneY","0.108281 * safezoneW","0.572 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
    [1600,"",[1,"",["0.0410935 * safezoneW + safezoneX","0.797 * safezoneH + safezoneY","0.108281 * safezoneW","0.044 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/