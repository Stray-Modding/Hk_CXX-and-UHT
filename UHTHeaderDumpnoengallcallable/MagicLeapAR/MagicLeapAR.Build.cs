using UnrealBuildTool;

public class MagicLeapAR : ModuleRules {
    public MagicLeapAR(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AugmentedReality",
            "Core",
            "CoreUObject",
            "Engine",
            "MRMesh",
            "MagicLeapImageTracker",
            "MagicLeapPlanes",
        });
    }
}
