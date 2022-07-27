#ifndef UE4SS_SDK_LiveLinkMovieScene_HPP
#define UE4SS_SDK_LiveLinkMovieScene_HPP

class UMovieSceneLiveLinkSection : public UMovieSceneSection
{
    FLiveLinkSubjectPreset SubjectPreset;
    TArray<bool> ChannelMask;
    TArray<class UMovieSceneLiveLinkSubSection*> SubSections;
    FName SubjectName;
    FLiveLinkFrameData TemplateToPush;
    FLiveLinkRefSkeleton RefSkeleton;
    TArray<FName> CurveNames;
    TArray<FMovieSceneFloatChannel> PropertyFloatChannels;

};

struct FLiveLinkPropertyData
{
    FName PropertyName;
    TArray<FMovieSceneFloatChannel> FloatChannel;
    TArray<FMovieSceneStringChannel> StringChannel;
    TArray<FMovieSceneIntegerChannel> IntegerChannel;
    TArray<FMovieSceneBoolChannel> BoolChannel;
    TArray<FMovieSceneByteChannel> ByteChannel;

};

struct FLiveLinkSubSectionData
{
    TArray<FLiveLinkPropertyData> Properties;

};

class UMovieSceneLiveLinkSubSection : public UObject
{
    FLiveLinkSubSectionData SubSectionData;
    TSubclassOf<class ULiveLinkRole> SubjectRole;

};

class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{
};

class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{
};

class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{
};

class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{
    TSubclassOf<class ULiveLinkRole> TrackRole;

};

struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
{
    FLiveLinkSubjectPreset SubjectPreset;
    TArray<bool> ChannelMask;
    TArray<FLiveLinkSubSectionData> SubSectionsData;

};

#endif
