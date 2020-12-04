class CfgPatches
{
  class ModTemplate
  {
    requiredAddons[] = {};
  };
};

class CfgMods
{
class ModTemplate
{
	type           = "mod";
	dependencies[] = {"Game", "World"};
  
  class defs
  {
    class gameScriptModule
    {
      value = "";
      files[] = {"Template/Sources/3_Game"};
    };
    class worldScriptModule
    {
      value = "";
      files[] = {"Template/Sources/4_World"};
    };
  };
};
};