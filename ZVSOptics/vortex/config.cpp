
#define _ARMA_

class CfgPatches
{
	class VTR_optics_optics_vortex
	{
		units[] = {"VTR_Vortex"};
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
	class VTR_Vortex: ItemOptics
	{
		scope = 2;
		displayName = "Vortex Optic";
		descriptionShort = "#Vortex_00";
		model = "ZVS_optics\vortex\Vortex.p3d";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot","zbytek"};
		hiddenSelectionsTextures[] = {"","ZVS_optics\vortex\data\body_co.paa"};
		hiddenSelectionsMaterials[] = {"","ZVS_optics\vortex\data\material.rvmat"};
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
		recoilModifier[]={1,1,1};
        swayModifier[]={1,1,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.01,{"DZ\weapons\attachments\optics\data\lensglass_standard.rvmat","ZVS_optics\vortex\data\material.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat","ZVS_optics\vortex\data\material_damage.rvmat"}},{0.3,{}},{0.01,{"DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat","ZVS_optics\vortex\data\material_destruct.rvmat"}}};
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
			opticsZoomMin = "0.3926/2";
			opticsZoomMax = "0.3926/2";
			opticsZoomInit = "0.3926/2";
			discretefov[] = {"0.3926/2"};
			opticSightTexture = "ZVS_optics\SigSauerRomeo4T\data\reticle.paa";
			opticSightMaterial = "ZVS_optics\SigSauertango\data\tritii.rvmat";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.15,0.03};
			PPLensProperties[] = {0.5,0.15,0,0};
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
