////////////////////////////////////////////////////////////////////
//DeRap: ZVS_optics\accupoint\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Thu Aug 25 00:37:54 2022 : 'file' last modified on Thu Jan 01 11:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZVS_optics_accupoint
	{
		units[] = {"VTR_accupoint_Trijicon"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemOptics: Inventory_Base
	{
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet = "PSO11Optic_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "PSO11Optic_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class VTR_accupoint_Trijicon: ItemOptics
	{
		scope = 2;
		displayName = "Trijicon Accupoint";
		descriptionShort = "#Trigicon_00";
		model = "ZVS_optics\accupoint\accupoint.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 700;
		itemSize[] = {4,1};
		inventorySlot[] = {"weaponOpticsHunting"};
		simulation = "itemoptics";
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		recoilModifier[]={0,0,0};
		swayModifier[]={0,0,0};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1.01,{"DZ\weapons\attachments\optics\data\lensglass_standard.rvmat","ZVS_optics\accupoint\data\accupoint.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat","ZVS_optics\accupoint\data\accupoint_damage.rvmat"}},{0.3,{}},{0.01,{"DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat","ZVS_optics\accupoint\data\accupoint_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "ZVS_optics\accupoint\accupoint_2d.p3d";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/40";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4","0.3926/6","0.3926/8","0.3926/12","0.3926/16","0.3926/20","0.3926/24","0.3926/28","0.3926/32","0.3926/35","0.3926/38","0.3926/40"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.43,0.1};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties = 0;
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class rings_ris
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class rings_ris_pilot
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class rings_winchester
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class rings_winchester_pilot
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyOptic_Hunting: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticsHunting";
		model = "\DZ\weapons\attachments\optics\optic_hunting.p3d";
	};
};
