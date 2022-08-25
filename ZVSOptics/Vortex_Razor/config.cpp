////////////////////////////////////////////////////////////////////
//DeRap: ZVS_optics\Vortex_Razor\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Thu Aug 25 00:37:55 2022 : 'file' last modified on Thu Jan 01 11:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class VTR_optics_optics_SuperTango
	{
		units[] = {"VTR_Razor_Vortex"};
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
	class VTR_Razor_Vortex: ItemOptics
	{
		scope = 2;
		displayName = "Vortex Razor";
		descriptionShort = "#VortexRazor_00";
		model = "ZVS_optics\Vortex_Razor\razor.p3d";
		hiddenSelections[] = {"reddot","30mmMount","body"};
		hiddenSelectionsTextures[] = {"","ZVS_optics\Vortex_Razor\data\mount_co.paa","ZVS_optics\Vortex_Razor\data\body_co.paa"};
		hiddenSelectionsMaterials[] = {"","ZVS_optics\Vortex_Razor\data\material_mount.rvmat","ZVS_optics\Vortex_Razor\data\material.rvmat"};
		animClass = "Binoculars";
		simulation = "itemoptics";
		inventorySlot[] = {"weaponOptics","weaponOpticsHunting"};
		selectionFireAnim = "zasleh";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		rotationFlags = 17;
		reversed = 0;
		weight = 250;
		itemSize[] = {1,3};
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
					healthLevels[] = {{1.01,{"DZ\weapons\attachments\optics\data\red_dot_ca.paa","ZVS_optics\Vortex_Razor\data\material_mount.rvmat","ZVS_optics\Vortex_Razor\data\material.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","ZVS_optics\Vortex_Razor\data\material_mount_damage.rvmat","ZVS_optics\Vortex_Razor\data\material_damage.rvmat"}},{0.3,{}},{0.01,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","ZVS_optics\Vortex_Razor\data\material_mount_destruct.rvmat","ZVS_optics\Vortex_Razor\data\material_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "ZVS_optics\Vortex_Razor\razor_2d.p3d";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 0;
			opticsPPEffects[] = {};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/28";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4","0.3926/6","0.3926/8","0.3926/12","0.3926/16","0.3926/20","0.3926/24","0.3926/28"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 2000;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.5,0.05};
			PPLensProperties[] = {0,0.15,0,0};
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
