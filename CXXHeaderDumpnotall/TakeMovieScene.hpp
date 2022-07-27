#ifndef UE4SS_SDK_TakeMovieScene_HPP
#define UE4SS_SDK_TakeMovieScene_HPP

class UMovieSceneTakeSection : public UMovieSceneSection
{
    FMovieSceneIntegerChannel HoursCurve;
    FMovieSceneIntegerChannel MinutesCurve;
    FMovieSceneIntegerChannel SecondsCurve;
    FMovieSceneIntegerChannel FramesCurve;
    FMovieSceneFloatChannel SubFramesCurve;
    FMovieSceneStringChannel Slate;

};

class UMovieSceneTakeSettings : public UObject
{
    FString HoursName;
    FString MinutesName;
    FString SecondsName;
    FString FramesName;
    FString SubFramesName;
    FString SlateName;

};

class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;

};

#endif
