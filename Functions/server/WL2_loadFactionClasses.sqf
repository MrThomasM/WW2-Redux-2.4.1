#include "..\warlords_constants.inc"
/*
BIS_WL_factionUnitClasses = [];

_cfgVehicles = "getNumber (_x >> 'scope') == 2 && getNumber (_x >> 'isMan') == 1 && vectorMagnitude getArray (_x >> 'threat') > 0.5 && (BIS_WL_blacklistedBackpacks find (getText (_x >> 'backpack')) == -1) && count getArray (_x >> 'weapons') > 2 && !((tolower getText (_x >> 'vehicleClass')) in ['menstory', 'mendiver'])" configClasses (configFile >> "CfgVehicles");

{
	private _side = _x;
	private _sideID = if (_forEachIndex < 2) then {abs (_forEachIndex - 1)} else {_forEachIndex};
	private _faction = missionNamespace getVariable format ["BIS_WL_faction_%1", _side];
	private _factionConfigs = _cfgVehicles select {
		getNumber (_x >> "side") == _sideID &&
		toLower getText (_x >> "faction") == toLower _faction
	};
	private _factionClassWeights = _factionConfigs apply {(1000000 - getNumber (_x >> "cost")) / 100000};
	_factionClassesWeighted = [];
	{
		_factionClassesWeighted pushBack configName _x;
		_factionClassesWeighted pushBack (_factionClassWeights # _forEachIndex);
	} forEach _factionConfigs;
	BIS_WL_factionUnitClasses pushBack _factionClassesWeighted;
} forEach BIS_WL_sidesArray;
*/

BIS_WL_factionUnitClasses = [
	[
		"LIB_GER_Scout_ober_rifleman_w",			5, //rifleman, default 100
		"LIB_GER_ober_grenadier_w",		70, //Grenadir, default 80
		"LIB_GER_Stggunner_w",		40, //Autorifleman, default 70
		"LIB_GER_Hauptmann_w",		5, //Team leader. default 30
		"LIB_GER_Scout_sniper_2_w",		30, //Marksman, default 20
		"LIB_GER_LAT_Rifleman_w",		50, //MAAWS? , default 20
		"LIB_GER_Radioman_w",		5, //Radio, default 20
		"LIB_GER_Unterofficer_w",		15, //Squad leader, default 15
		"LIB_GER_Medic_w",			15, //Medic, default 15
		"LIB_GER_AT_soldier_w",		25, //Titan AT, default 15
		"LIB_GER_AT_grenadier_w",		5, //Asst AT, default 15
		"LIB_GER_Mgunner_w",		15, //338, default 15
		"LIB_GER_Scout_lieutenant_w",			5, //officer, default 10
		"LIB_GER_Recruit_w",			5, //spotter, default 10
		"LIB_GER_Scout_sniper_w",			5 //sniper, default 10
	],
	[
		"LIB_SOV_P_officer_w",			5, //rifleman, default 100
		"LIB_SOV_grenadier_w",		70, //Grenadir, default 80
		"LIB_SOV_Assault_sergeant_w",		40, //Autorifleman, default 70
		"LIB_SOV_Captain_w",		5, //Team leader. default 30
		"LIB_SOV_scout_atrifle_gunner_w",		30, //Marksman, default 20
		"LIB_SOV_LAT_Soldier_w",		50, //RPG32, default 20
		"LIB_SOV_Operator_w",		5, //Ammo, default 20
		"LIB_SOV_Lieutenant_w",		15, //Squad leader, default 15
		"LIB_SOV_Sapper_w",		5, //Asst AT, default 15
		"LIB_SOV_LC_rifleman_w",		15, //93x64, default 15
		"LIB_SOV_Assault_mgunner_w",		15, //93x64, default 15
		"LIB_SOV_AT_M1A1_soldier_w",		25, //Titan AT, default 15
		"LIB_SOV_Medic_w",			15, //Medic, default 15
		"LIB_SOV_Rifleman_w",			5, //spotter, default 10
		"LIB_SOV_Scout_sniper_w",			5 //sniper, default 10
	],
	[
		"LIB_US_NAC_corporal",			30, //rifleman, default 100
		"LIB_UK_DR_Rifleman",			30, //rifleman, default 100
		"LIB_US_NAC_grenadier",		15, //Grenadir, default 80
		"LIB_UK_DR_Grenadier",		15, //Grenadir, default 80
		"LIB_US_NAC_smgunner",		30, //Autorifleman, default 70
		"LIB_UK_DR_LanceCorporal",		30, //leman, default 70
		"LIB_US_NAC_captain",		5, //Team leader. default 30
		"LIB_UK_DR_Officer",		5, //Team leader. default 30
		"LIB_UK_DR_AT_Soldier",		30, //PCML, default 20
		"LIB_US_NAC_AT_soldier",		60, //MAAWS? , deault 20
		"IB_UK_DR_Corporal",		15, //Squad leader, default 15
		"LIB_US_NAC_second_lieutenant",		15, //Squad leader, default 15
		"LIB_UK_DR_Medic",			20, //Medic, default 15
		"LIB_US_NAC_medic",			20, //Medic, default 15
		"LIB_UK_DR_Engineer",			5, //engineer, default 15
		"LIB_US_NAC_engineer",			5, //engineer, default 15
		"LIB_UK_DR_Sergeant",			5, //officer, default 10
		"LIB_US_NAC_sniper",			5, //sniper, default 10
		"LIB_UK_DR_Sniper",			5 //sniper, default 10
	]
];

BIS_WL_factionVehicleClasses = [
	[
		"LIB_SdKfz251_FFV_w",		50, //Marshall, default 50
		"LIB_StuG_III_G_w",		20, //Rhino UP?, default 50
		"LIB_StuG_III_G_WS_w",		20, //Rhino? defualt 50
		"LIB_PzKpfwIV_H_w",		20, //panzer defualt 50
		"LIB_SdKfz_7_AA_w",			10, //Bobcat, default 50
		"LIB_Kfz1_MG42_sernyt",					25, //Prowler HMG, default 75
		"LIB_DAK_Scout_M3_FFV",					51, //Hunter hmg, default 100
		"LIB_FlakPanzerIV_Wirbelwind_w",			51, //Cheetah, default 50
		"LIB_PzKpfwVI_E_w",				25, //tiger, default 25
		"LIB_PzKpfwVI_B_w",					25, //King up, default 25
		"LIB_PzKpfwV_w",				25 //panther, default 25
	],
	[
			
		
		"LIB_SOV_M3_Halftrack_w",					51, //Ifrit HMG, default 100
		"LIB_Scout_m3_w",					25, //Qilin minigun, default 75
		"LIB_M4A2_SOV_w",				25, //T-100, default 25
		"LIB_T34_76_w",		50, //Kamysh 30mm, default 50
		"LIB_SU85",		50, //Kamysh 30mm, default 50				
		"LIB_T34_85_w",				15, //T-140, default 15
		"LIB_JS2_43_w",				15, //T-140, default 15
		"LIB_Zis5v_61K",			51 //Tigris, default 50
	],
	[
		
		"LIB_M8_Greyhound",						50, //Nyx AA, default 50
		"LIB_UniversalCarrier_desert",		60, //Gorgan, default 50
		"LIB_UK_DR_M4A3_75",		40, //Mora, default 50
		"LIB_M4A3_76_HVSS",						70, //Nyx AT, default 50
		"LIB_Churchill_Mk7_Crocodile_desert",					40, //Nyx 20mm, default 50
		"LIB_US_NAC_M3_Halftrack",					40, //strider GMG, default 100
		"LIB_US_NAC_Willys_MB_M1919",					40, //strider HMG, default 100
		"LIB_Churchill_Mk7_desert",				50 //Kuma, default 25
	]
];

BIS_WL_factionAircraftClasses = [
	[
		"LIB_Ju87_w",	100 //Wipeout, default 100
		//"B_Heli_Attack_01_F", 70, //blackfoot, deault 50
		//"B_Plane_Fighter_01_F", 50  // F/A-181 Black Wasp II 
		//"B_Heli_Light_01_dynamicLoadout_F",	100, //AH9, default 100
		
	],
	[
		"LIB_Pe2_w",	100 //Neophron, default 100
		//"O_Heli_Attack_02_F", 70, //Kajmen, defualt 50
		//"O_Plane_Fighter_02_F", 50 //To-201 Shikra
		//"O_Heli_Light_02_dynamicLoadout_F",	100 //Orca, default 100
	],
	[
		"LIB_RAF_P39",	100, //Indy A-10, default 100
		"LIB_US_NAC_P39", 70, //Hellcat with rockets, default 70
		"LIB_P47", 50 //A-149 Gryphon. default 50
		//default value "I_Heli_light_03_dynamicLoadout_F" //hellcat without rockets
		
	]
];