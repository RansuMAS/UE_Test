// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class First_Test : ModuleRules
{
	public First_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
