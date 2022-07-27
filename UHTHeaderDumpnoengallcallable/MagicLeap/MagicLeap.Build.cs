using UnrealBuildTool;

public class MagicLeap : ModuleRules {
    public MagicLeap(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "HeadMountedDisplay",
            "InputCore",
            "MRMesh",
        });
    }
}
