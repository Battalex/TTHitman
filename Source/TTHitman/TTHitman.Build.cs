// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TTHitman : ModuleRules
{
	public TTHitman(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
