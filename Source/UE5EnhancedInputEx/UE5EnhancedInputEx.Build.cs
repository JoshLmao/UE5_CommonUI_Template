// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5EnhancedInputEx : ModuleRules
{
	public UE5EnhancedInputEx(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "CommonGame",
            "CommonUI",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "InputCore",
            "ModularGameplayActors",
            "UMG",
        });

        // Uncomment if you are using Slate UI
        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "Slate",
            "SlateCore"
        });

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
