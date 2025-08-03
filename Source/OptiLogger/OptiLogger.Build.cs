using UnrealBuildTool;
using System.IO;

public class OptiLogger : ModuleRules
{
	public OptiLogger(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core", "CoreUObject", "Engine",
			"Slate", "SlateCore", "InputCore",
			"ToolMenus", "UnrealEd", "LevelEditor",
			"EditorStyle", "AssetRegistry",
			"UnrealEd",
			"EditorSubsystem", "MaterialEditor"
		});

		PrivateDependencyModuleNames.AddRange(new string[] {
			"Json", "JsonUtilities", "Projects", "RenderCore", "RHI"
		});
	}
}