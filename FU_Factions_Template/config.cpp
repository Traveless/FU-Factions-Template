class CfgPatches
{
    class FU_faction_MKII_Temp //unique name given for Arma to find the config, same names will over write other mods.
    {
           name = "Freelance Union temp"; //name shown in config only
           Author = "Mission maker";   //name shown in config only
           units[] = {}; 
           weapons[] = {};
   };
};


class CfgFactionClasses
{
    class FU_Faction_m_blufor //used to define faction of a unit
    {
        displayName = "Freelancers Union Custom"; // display names of Faction
        Priority = 6; 
        side = 1; //faction side
    };
    class FU_Faction_m_Opfor
    {
        displayName = "Freelancers Union Custom";
        Priority = 6; 
        side = 0; 
    };
    class FU_Faction_m_Indep
    {
        displayName = "Freelancers Union Custom";
        Priority = 6; 
        side = 2; 
    };
}; 


class CfgVehicles 
{
#define mags_6(a) a, a, a, a, a, a //Used to define the number of items or 'mags_' in an inventory
#define mags_5(a) a, a, a, a, a
#define mags_4(a) a, a, a, a
#define mags_3(a) a, a, a
#define mags_2(a) a, a
#define mags_1(a) a

class FU_base_B;
class FU_base_O;
class FU_base_I;

//the units below are templates used to base your soldiers on. they will contain, Uniform, miscellaneous items, their factions and their voice and faces

class FU_base_m_B_temp : FU_base_B //_temp unique name of base units that will affect all your soldiers
                  {
                  identityTypes[] = {"LanguageENGB_F","Head_NATO"}; //language and face
                  side = 1;                                         //Defines faction in mission
                  Faction = "FU_Faction_m_blufor";                  //Defines faction in editor catagories
                  uniformClass = "FU_uni_win";                      //uniform
                  items[] = {mags_5(ACE_packingBandage),mags_5(ACE_elasticBandage),mags_4(ACE_tourniquet),mags_4(ACE_morphine),mags_4(ACE_epinephrine),
                             mags_2(ACE_CableTie),"ACE_RangeCard","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool"}; 

//items: basic FU loadout, will NOT exceed uniform storage, items will be lost if too much is added. Example Storage 50, 50 grenades + 1 bandage = 50 grenades no bandages

                  respawnitems[] = {mags_5(ACE_packingBandage),mags_5(ACE_elasticBandage),mags_4(ACE_tourniquet),mags_4(ACE_morphine),mags_4(ACE_epinephrine),
                             mags_2(ACE_CableTie),"ACE_RangeCard","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool"};

//respawnitems: Items units respawn with if Ace doesn't save your loadouts. mostly not needed

                  };

class FU_base_m_O_temp : FU_base_O //opfor
                  {
                  identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Asian","Head_Euro","Head_Enoch"};
                  side = 0;
                  Faction = "FU_Faction_m_opfor";
                  uniformClass = "FU_uni_bdu";
                  items[] = {mags_5(ACE_packingBandage),mags_5(ACE_elasticBandage),mags_4(ACE_tourniquet),mags_4(ACE_morphine),mags_4(ACE_epinephrine),
                             mags_2(ACE_CableTie),"ACE_RangeCard","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool"};
                  respawnitems[] = {mags_5(ACE_packingBandage),mags_5(ACE_elasticBandage),mags_4(ACE_tourniquet),mags_4(ACE_morphine),mags_4(ACE_epinephrine),
                             mags_2(ACE_CableTie),"ACE_RangeCard","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool"};
                  };
class FU_base_m_I_temp : FU_base_I //indep
                  {
                  identityTypes[] = {"LanguageGRE_F","Head_Greek"};
                  side = 2;
                  Faction = "FU_Faction_m_Indep";
                  uniformClass = "FU_uni_biz";
                  items[] = {mags_5(ACE_packingBandage),mags_5(ACE_elasticBandage),mags_4(ACE_tourniquet),mags_4(ACE_morphine),mags_4(ACE_epinephrine),
                             mags_2(ACE_CableTie),"ACE_RangeCard","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool"};
                  respawnitems[] = {mags_5(ACE_packingBandage),mags_5(ACE_elasticBandage),mags_4(ACE_tourniquet),mags_4(ACE_morphine),mags_4(ACE_epinephrine),
                             mags_2(ACE_CableTie),"ACE_RangeCard","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool"};
                  };


    
};  