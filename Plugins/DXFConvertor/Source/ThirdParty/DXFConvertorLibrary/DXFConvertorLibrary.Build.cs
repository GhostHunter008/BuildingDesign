using System.IO;
using UnrealBuildTool;

public class DXFConvertorLibrary : ModuleRules
{
	public DXFConvertorLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;
		PublicSystemIncludePaths.Add("$(ModuleDir)/Public");

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			// Add the import library
            PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64", "Release", "DXFTest.lib"));
		}
	}
}
