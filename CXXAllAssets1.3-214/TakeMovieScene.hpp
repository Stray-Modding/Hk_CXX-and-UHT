#ifndef UE4SS_SDK_TakeMovieScene_HPP
#define UE4SS_SDK_TakeMovieScene_HPP

class UMovieSceneTakeSection : public UMovieSceneSection
{
    FMovieSceneIntegerChannel HoursCurve;                                             // 0x00E8 (size: 0x90)
    FMovieSceneIntegerChannel MinutesCurve;                                           // 0x0178 (size: 0x90)
    FMovieSceneIntegerChannel SecondsCurve;                                           // 0x0208 (size: 0x90)
    FMovieSceneIntegerChannel FramesCurve;                                            // 0x0298 (size: 0x90)
    FMovieSceneFloatChannel SubFramesCurve;                                           // 0x0328 (size: 0xA0)
    FMovieSceneStringChannel Slate;                                                   // 0x03C8 (size: 0xA0)

}; // Size: 0x468

class UMovieSceneTakeSettings : public UObject
{
    FString HoursName;                                                                // 0x0028 (size: 0x10)
    FString MinutesName;                                                              // 0x0038 (size: 0x10)
    FString SecondsName;                                                              // 0x0048 (size: 0x10)
    FString FramesName;                                                               // 0x0058 (size: 0x10)
    FString SubFramesName;                                                            // 0x0068 (size: 0x10)
    FString SlateName;                                                                // 0x0078 (size: 0x10)

}; // Size: 0x88

class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0090 (size: 0x10)

}; // Size: 0xA0

#endif
