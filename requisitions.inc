class CfgWLRequisitionPresets
{
	class A3ReduxAll
	{
		class WEST
		{
			class Infantry
			{
				class LIB_DAK_Soldier			{cost = 20;		requirements[]={};	};	// "Rifleman"
				class LIB_DAK_radioman				    {cost = 25;		requirements[]={};	};	// "radio Trooper"
				class LIB_GER_oberst	             		{cost = 30;		requirements[]={};	};	// "CTRG Scout"
				class LIB_GER_tank_crew					    {cost = 15;		requirements[]={};	};	// "Crewman"
				class LIB_GER_pilot 					    {cost = 10;		requirements[]={};	};	// "Pilot"
				class LIB_DAK_grenadier 				{cost = 50;		requirements[]={};	};	// "Grenadier"				
				class LIB_DAK_Medic						{cost = 20;		requirements[]={};	};	// "Combat Life Saver"
				class LIB_GER_stggunner					{cost = 50;		requirements[]={};	};	// "Autorifleman"
				class LIB_DAK_Soldier_3					{cost = 80;		requirements[]={};	};	// "Heavy Gunner"
				class LIB_DAK_Soldier_4                 {cost = 90;		requirements[]={};	};	// "Heavy Gunner"
				class LIB_GER_LAT_Rifleman				{cost = 100;	requirements[]={};	};	// "Rifleman (AT)"
				class LIB_DAK_AT_grenadier				{cost = 150;	requirements[]={};	};	// "Rnije ok(Light AT)"
				class LIB_DAK_AT_soldier					{cost = 150;	requirements[]={};	};	// "ok (AT)"
				class LIB_DAK_Sniper				{cost = 100;	requirements[]={};	};	// "Sniper"
				//class B_Captain_Dwarden_F					{cost = 150;	requirements[]={};	};	// "Dwarden"
			};
			class Vehicles
			{
				class LIB_Kfz1_Hood_camo				{cost = 50;	requirements[]={};	};	// "kubel (Unarmed)"
				class LIB_OpelBlitz_Tent_Y_Camo			{cost = 100;	requirements[]={};	};	// " Transport"
				class LIB_OpelBlitz_Fuel				{cost = 500;	requirements[]={};	};	// " Fuel"
				class LIB_OpelBlitz_Ambulance			{cost = 250;	requirements[]={};	};	// " Medical"
				class LIB_Kfz1_MG42				        {cost = 350;	requirements[]={};	};	// "kubel (HMG)"
				class LIB_DAK_M3_Halftrack			    {cost = 400;	requirements[]={};	};	// "halftrack (HMG)"
				class LIB_OpelBlitz_Parm				{cost = 1000;	requirements[]={};	};	// " Repair"
				class LIB_OpelBlitz_Ammo				{cost = 1000;	requirements[]={};	};	// " Ammo"
			
				class LIB_SdKfz251_FFV				    {cost = 1000;	requirements[]={};	};	// "truck 2xHMG"
				class LIB_StuG_III_G				    {cost = 2000;	requirements[]={};	};	// "stug spg"
				class LIB_PzKpfwIV_H				    {cost = 2500;	requirements[]={};	};	// "panzer4"
				class LIB_PzKpfwV				        {cost = 3500;	requirements[]={};	};	// "Panther"
				class LIB_SdKfz_7_AA				    {cost = 1500;	requirements[]={};	};	// "AA truck"				
				class LIB_FlakPanzerIV_Wirbelwind		{cost = 2000;	requirements[]={};	};	// "AA"
				class LIB_PzKpfwVI_E_1				    {cost = 4000;	requirements[]={};	};	// "Tiger"
				class LIB_PzKpfwVI_B				    {cost = 8000;	requirements[]={};	};	// "King tiger"
				class LIB_SdKfz124						{cost = 20000;	requirements[]={};	};	// "Wespe Arty" 
				 
			};
			class Aircraft
			{
				class LIB_DAK_Ju87					    {cost = 10000;	requirements[]={"A"};	};	// "stuka"
				class LIB_FW190F8_Italy		            {cost = 18000;	requirements[]={"A"};	};	// "choker bird"
				//class B_Plane_Fighter_01_Stealth_F	{cost = 40000;	requirements[]={"A"};	};	// "F/A-181 Black Wasp II Stealth";
				
			};
			class Naval
			{
				class B_Boat_Transport_01_F					{cost = 1000;	requirements[]={"W"};	};	// "Assault Boat"
				class B_Boat_Armed_01_minigun_F				{cost = 50001;	requirements[]={"W"};	};	// "Speedboat Minigun"
				class B_SDV_01_F							{cost = 50001;	requirements[]={"W"};	};	// "SDV"
			};
			class Gear
			{
				class LIB_BasicAmmunitionBox_GER			{cost = 50;		requirements[]={};	};	// "Basic Ammo [NATO]"
				class LIB_Mine_Ammo_Box_Ger					{cost = 300;	requirements[]={};	};	// "Explosives [NATO]"
				class LIB_WeaponsBox_Big_GER				{cost = 200;	requirements[]={};	};	// "Special Weapons [NATO]"
				class Box_NATO_AmmoVeh_F					{cost = 800;	requirements[]={};	};	// "Vehicle Ammo [NATO]"
			};
			class Defences
			{
			    class LIB_MG34_Lafette_low_Deployed		 {cost = 100;	requirements[]={};	};	// "Mk30 HMG .50"
				class LIB_MG34_Lafette_Deployed			 {cost = 100;	requirements[]={};	};	// "Mk30 HMG .50 (Raised)"
				class LIB_MG42_Lafette_low_Deployed		 {cost = 200;	requirements[]={};	};	// "Mk32 GMG 20 mm"
				class LIB_MG42_Lafette_Deployed			 {cost = 200;	requirements[]={};	};	// "Mk32 GMG 20 mm (Raised)"
				class LIB_Flakvierling_38				 {cost = 400;	requirements[]={};	};	// "Static Titan Launcher (AA) [NATO]"
				class LIB_DAK_FlaK_36				     {cost = 600;	requirements[]={};	};	// "Static Titan Launcher (AT) [NATO]"
				class LIB_GrWr34_g						 {cost = 6500;	requirements[]={};	};	// "Mortar"
			    class LIB_Nebelwerfer41_Gelbbraun 		 {cost = 6500;	requirements[]={};	};	// "Mortar"
			};
		};
		class EAST
		{
			class Infantry
			{
				class LIB_SOV_p_officer					{cost = 20;		requirements[]={};	};	// "Rifleman"
				class LIB_SOV_Operator					{cost = 25;		requirements[]={};	};	// "radio Trooper"
				class LIB_SOV_tank_sergeant 				{cost = 15;		requirements[]={};	};	// "Crewman"
				class LIB_SOV_pilot 						{cost = 10;		requirements[]={};	};	// "Pilot"
				class LIB_SOV_grenadier					{cost = 50;		requirements[]={};	};	// "Grenadier"
				class LIB_SOV_Medic						{cost = 20;		requirements[]={};	};	// "Combat Life Saver"
				class LIB_SOV_Assault_sergeant     		{cost = 50;		requirements[]={};	};	// "Autorifleman"
				class LIB_SOV_scout_atrifle_gunner		{cost = 60;		requirements[]={};	};	// "Marksman"
				class LIB_SOV_Assault_mgunner			{cost = 80;		requirements[]={};	};	// "Heavy Gunner"
				class LIB_SOV_LAT_Soldier					{cost = 100;	requirements[]={};	};	// "Rifleman (AT)"
				class LIB_SOV_AT_soldier					{cost = 150;	requirements[]={};	};	// "Viper Rifleman (AT)"
				class LIB_SOV_AT_M1A1_soldier				{cost = 150;	requirements[]={};	};	// "Missile Specialist (AT)"
				class LIB_SOV_Scout_sniper				{cost = 200;	requirements[]={};	};	// "Rifleman (Heavy AT)"
			};
			class Vehicles
			{
				class LIB_GazM1_SOV_camo_sand	    {cost = 50;	requirements[]={};	};	// "Qilin (Unarmed)"
				class LIB_US6_Tent				    {cost = 100;	requirements[]={};	};	// "Tempest Transport"
				class LIB_Zis5v_Fuel				{cost = 500;	requirements[]={};	};	// "Tempest Fuel"
                class LIB_Zis5v_Med					{cost = 250;	requirements[]={};	};	// "Tempest Medical"
				class LIB_SOV_M3_Halftrack			{cost = 400;	requirements[]={};	};	// "Offroad (HMG)"
				class LIB_Scout_M3_FFV              {cost = 500;	requirements[]={};	};	// "Offroad (HMG)"
				class LIB_Zis6_Parm					{cost = 1000;	requirements[]={};	};	// "Tempest Repair"
				class LIB_US6_Ammo					{cost = 1000;	requirements[]={};	};	// "Tempest Ammo"
				
				class LIB_Zis5v_61K			        {cost = 1500;	requirements[]={};	};	// "MSE-3 Marid"
				class LIB_T34_76				    {cost = 2500;	requirements[]={};	};	// "BTR-K Kamysh"
				class LIB_SU85					    {cost = 2000;	requirements[]={};	};	// "ZSU-39 Tigris"
				class LIB_M4A2_SOV				    {cost = 3000;	requirements[]={};	};	// "T-100 Varsuk"
				class LIB_T34_85					{cost = 3500;	requirements[]={};	};	// "T-140 Angara"
				class LIB_JS2_43					{cost = 4500;	requirements[]={};	};	// "T-140K Angara"
				class LIB_US6_BM13					{cost = 20000;	requirements[]={};	};	// "2S9 Sochor"

			};
			class Aircraft
			{
				class LIB_Pe2		                        {cost = 7000;	requirements[]={"A"};	};	// "To-199 Neophron (CAS)"
				class LIB_RA_P39_3					        {cost = 16500;	requirements[]={"A"};	};	// "To-201 Shikra"
				//class O_Plane_Fighter_02_Stealth_F		{cost = 42000;	requirements[]={"A"};	};	// "To-201 Shikra Stealth"
				
			};
			class Naval
			{
				class O_Boat_Transport_01_F					{cost = 1000;	requirements[]={"W"};	};	// "Assault Boat"
				class O_Boat_Armed_01_hmg_F					{cost = 50001;	requirements[]={"W"};	};	// "Speedboat HMG"
				class O_SDV_01_F							{cost = 50001;	requirements[]={"W"};	};	// "SDV"
			};
			class Gear
			{
				class LIB_BasicAmmunitionBox_SU		    	{cost = 50;		requirements[]={};	};	// "Basic Ammo [CSAT]"
				class LIB_Mine_Ammo_Box_Su					{cost = 300;	requirements[]={};	};	// "Explosives [CSAT]"
				class LIB_WeaponsBox_Big_SU					{cost = 200;	requirements[]={};	};	// "Special Weapons [CSAT]"
				class Box_East_AmmoVeh_F					{cost = 800;	requirements[]={};	};	// "Vehicle Ammo [CSAT]"
			};
			class Defences
			{
				class LIB_Maxim_M30_Trench				{cost = 200;	requirements[]={};	};	// "Mk30 HMG .50"
				class LIB_Maxim_M30_base				{cost = 200;	requirements[]={};	};	// "Mk30 HMG .50 (Raised)"
				class LIB_61k							{cost = 300;	requirements[]={};	};	// "Static Titan Launcher (AA) [CSAT]"
				class LIB_Zis3					    	{cost = 400;	requirements[]={};	};	// "Static Titan Launcher (AT) [CSAT]"
				class LIB_BM37						    {cost = 6500;	requirements[]={};	};	// "Mortar";
			};
		};
	};
};