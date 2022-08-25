////////////////////////////////////////////////////////////////////
//DeRap: ZVS_optics\Pentax\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Thu Aug 25 00:37:55 2022 : 'file' last modified on Thu Jan 01 11:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class VTR_optics_optics_PenTax
	{
		units[] = {"VTR_PenTax"};
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
	class VTR_PenTax: ItemOptics
	{
		scope = 2;
		displayName = "PenTax Optic";
		descriptionShort = "#Pentax_00";
		model = "ZVS_optics\Pentax\Pentax.p3d";
		hiddenSelections[] = {"reddot","zbytek","rmr"};
		hiddenSelectionsTextures[] = {"","ZVS_optics\Pentax\data\body_co.paa","ZVS_optics\acogrmr\data\rmr.paa"};
		hiddenSelectionsMaterials[] = {"","ZVS_optics\Pentax\data\material.rvmat","ZVS_optics\acogrmr\data\rmr.rvmat"};
		animClass = "Binoculars";
		simulation = "itemoptics";
		inventorySlot[] = {"weaponOptics","weaponOpticsHunting"};
		selectionFireAnim = "zasleh";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		rotationFlags = 17;
		reversed = 0;
		weight = 250;
		itemSize[] = {4,1};
		dispersionModifier = -0.009;
		dispersionCondition = "true";
		recoilModifier[]={0,0,0};
		swayModifier[]={0,0,0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.01,{"DZ\weapons\attachments\optics\data\red_dot_ca.paa","ZVS_optics\Pentax\data\material.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","ZVS_optics\Pentax\data\material_damage.rvmat"}},{0.3,{}},{0.01,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","ZVS_optics\Pentax\data\material_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "ZVS_optics\Pentax\pentax_2d.p3d";
			preloadOpticType = "Preload2DOptic_Longrange";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/6";
			opticsZoomMax = "0.3926/32";
			opticsZoomInit = "0.3926/6";
			discretefov[] = {"0.3926/6","0.3926/10","0.3926/12","0.3926/18","0.3926/24","0.3926/28","0.3926/32"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,250,300,350,400,450,500,550,600,650,700,750,800,900,1000,1100,1200,1300,1400,1500};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0,0.5,0.43,0.1};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties = 0;
		};
		repairableWithKits[] = {7};
		repairCosts[] = {25};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyOptic_Reflex: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOptics";
		model = "\DZ\weapons\attachments\optics\optic_reflex.p3d";
	};
};
