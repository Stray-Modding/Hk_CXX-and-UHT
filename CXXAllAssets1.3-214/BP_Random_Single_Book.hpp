#ifndef UE4SS_SDK_BP_Random_Single_Book_HPP
#define UE4SS_SDK_BP_Random_Single_Book_HPP

class ABP_Random_Single_Book_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Book;                                                 // 0x0230 (size: 0x8)
    class UCOMP_PhysicsAudioComponent_C* COMP_PhysicsAudioComponent;                  // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    TArray<class UStaticMesh*> possible books;                                        // 0x0248 (size: 0x10)
    int32 forceIndex;                                                                 // 0x0258 (size: 0x4)

    void OverrideRandomMesh(class UObject* Object, FString ID);
    void get book mesh(class UStaticMeshComponent*& Book);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void activateSlideSoon();
    void ExecuteUbergraph_BP_Random_Single_Book(int32 EntryPoint);
}; // Size: 0x25C

#endif
