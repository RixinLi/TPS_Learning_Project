// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TPS_GAME : ModuleRules
{
	public TPS_GAME(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
