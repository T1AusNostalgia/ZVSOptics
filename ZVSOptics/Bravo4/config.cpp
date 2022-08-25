////////////////////////////////////////////////////////////////////
//DeRap: ZVS_optics\Bravo4\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Thu Aug 25 00:37:54 2022 : 'file' last modified on Thu Jan 01 11:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class VTR_optics_optics_bravo4
	{
		units[] = {"VTR_bravo4"};
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
	class VTR_bravo4: ItemOptics
	{
		scope = 2;
		displayName = "BRAVO 4 Optic";
		descriptionShort = "#Bravo4_00";
		model = "ZVS_optics\Bravo4\Bravo4.p3d";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot","zbytek"};
		hiddenSelectionsTextures[] = {"","ZVS_optics\Bravo4\data\body_co.paa"};
		hiddenSelectionsMaterials[] = {"","ZVS_optics\Bravo4\data\material.rvmat"};
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
					hitpoints = 130;
					healthLevels[] = {{1.01,{"ZVS_optics\Bravo4\data\material.rvmat","DZ\weapons\attachments\optics\data\lensglass_standard.rvmat"}},{0.7,{}},{0.5,{"ZVS_optics\Bravo4\data\material_damage.rvmat","DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat"}},{0.3,{}},{0.01,{"ZVS_optics\Bravo4\data\material_destruct.rvmat","DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat"}}};
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
			opticSightTexture = "ZVS_optics\Bravo4\data\red_part_reticle.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\tritium.rvmat";
			opticsZoomMin = "0.3926/1";
			opticsZoomMax = "0.3926/4";
			opticsZoomInit = "0.3926/2";
			discretefov[] = {"0.3926/1","0.3926/2","0.3926/3","0.3926/4"};
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0,0,1e-10,0.05};
			PPLensProperties[] = {1,0.15,0,0};
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
