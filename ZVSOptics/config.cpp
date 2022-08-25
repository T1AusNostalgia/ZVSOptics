////////////////////////////////////////////////////////////////////
//DeRap: ZVS_optics\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Thu Aug 25 00:37:54 2022 : 'file' last modified on Thu Jan 01 11:00:01 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class VTR_Optic
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class VTR_Optic_CfgMods
	{
		dir = "VTR_Optic";
		hideName = 1;
		hidePicture = 1;
		name = "VTR_Optic";
		credits = "VeteR";
		author = "VeteR";
		version = 1;
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"ZVS_optics\scripts\4_World"};
			};
		};
	};
};
