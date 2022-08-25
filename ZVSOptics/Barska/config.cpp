////////////////////////////////////////////////////////////////////
//DeRap: ZVS_optics\Barska\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Thu Aug 25 00:37:54 2022 : 'file' last modified on Thu Jan 01 11:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class VTR_optics_optics_Barska
	{
		units[] = {"VTR_Barska"};
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
	class VTR_Barska: ItemOptics
	{
		scope = 2;
		displayName = "#Barska_00";
		descriptionShort = "#Barska_01";
		model = "ZVS_optics\Barska\Barska.p3d";
		hiddenSelectionsMaterials[] = {"","ZVS_optics\Barska\data\material.rvmat"};
		animClass = "Binoculars";
		simulation = "itemoptics";
		inventorySlot[] = {"weaponOptics","weaponOpticsHunting"};
		selectionFireAnim = "zasleh";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		rotationFlags = 17;
		reversed = 0;
		weight = 250;
		itemSize[] = {2,1};
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
					hitpoints = 200;
					healthLevels[] = {{1.01,{"DZ\weapons\attachments\optics\data\lensglass_standard.rvmat","ZVS_optics\Barska\data\material.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat","ZVS_optics\Barska\data\material_damage.rvmat"}},{0.3,{}},{0.01,{"DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat","ZVS_optics\Barska\data\material_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/12";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4","0.3926/6","0.3926/8","0.3926/10","0.3926/12"};
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0,0,1e-09,0.03};
			PPLensProperties[] = {0.4,0.15,0,0};
			PPBlurProperties = 0;
			PPDOFProperties[] = {1,0.1,20,200,4,0};
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
