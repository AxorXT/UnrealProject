// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CLASS66 : ModuleRules
{
	public CLASS66(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"CLASS66",
			"CLASS66/Variant_Platforming",
			"CLASS66/Variant_Platforming/Animation",
			"CLASS66/Variant_Combat",
			"CLASS66/Variant_Combat/AI",
			"CLASS66/Variant_Combat/Animation",
			"CLASS66/Variant_Combat/Gameplay",
			"CLASS66/Variant_Combat/Interfaces",
			"CLASS66/Variant_Combat/UI",
			"CLASS66/Variant_SideScrolling",
			"CLASS66/Variant_SideScrolling/AI",
			"CLASS66/Variant_SideScrolling/Gameplay",
			"CLASS66/Variant_SideScrolling/Interfaces",
			"CLASS66/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
