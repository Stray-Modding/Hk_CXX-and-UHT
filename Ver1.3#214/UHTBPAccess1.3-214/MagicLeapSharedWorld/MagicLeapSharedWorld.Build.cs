using UnrealBuildTool;

public class MagicLeapSharedWorld : ModuleRules {
    public MagicLeapSharedWorld(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MagicLeapARPin",
        });
    }
}
