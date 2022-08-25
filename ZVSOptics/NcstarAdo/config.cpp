////////////////////////////////////////////////////////////////////
//DeRap: ZVS_optics\NcstarAdo\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Thu Aug 25 00:37:55 2022 : 'file' last modified on Thu Jan 01 11:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class VTR_Optic_NcstarAdo
	{
		units[] = {"VTR_NcstarAdo"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Optics"};
	};
};
class cfgVehicles
{
	class ItemOptics;
	class VTR_NcstarAdo: ItemOptics
	{
		scope = 2;
		displayName = "NC-Star Ado Optic";
		descriptionShort = "#Ncstar_00";
		model = "ZVS_optics\NcstarAdo\NcstarAdo.p3d";
		attachments[] = {"BatteryD"};
		hiddenSelections[] = {"reddot","rmr"};
		hiddenSelectionsTextures[] = {"","ZVS_optics\acogrmr\data\rmr.paa"};
		hiddenSelectionsMaterials[] = {"","ZVS_optics\acogrmr\data\rmr.rvmat"};
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 2000;
		itemSize[] = {3,1};
		inventorySlot[] = {"weaponOptics","weaponOpticsHunting"};
		simulation = "itemoptics";
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		recoilModifier[]={0,0,0};
		swayModifier[]={0,0,0};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		NVOptic = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.01,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","ZVS_optics\NcstarAdo\data\material.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","ZVS_optics\NcstarAdo\data\material_damage.rvmat"}},{0.3,{}},{0.01,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","ZVS_optics\NcstarAdo\data\material_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "\DZ\weapons\attachments\optics\opticview_longrange.p3d";
			preloadOpticType = "Preload2DOptic_1PN51";
			opticsDisablePeripherialVision = 0.67;
			opticSightTexture = "ZVS_optics\acogrmr\data\lens.paa";
			opticSightMaterial = "ZVS_optics\SigSauertango\data\tritii.rvmat";
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/3.5";
			opticsZoomMax = "0.3926/8";
			opticsZoomInit = "0.3926/3.5";
			discretefov[] = {"0.3926/3.5","0.3926/8"};
			distanceZoomMin = 100;
			distanceZoomMax = 700;
			discreteDistance[] = {100,200,300,400,500,600,700};
			discreteDistanceInitIndex = 3;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {-1.25,1,0,0};
			PPBlurProperties = 0.75;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0,0,0.5,0.05};
			PPLensProperties[] = {0.5,0.15,0,0};
			PPBlurProperties = 0;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
		};
	};
};
