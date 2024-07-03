#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaCompositing

#include "Basic.hpp"

#include "MovieScene_classes.hpp"
#include "MovieSceneTracks_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// 0x0010 (0x00F8 - 0x00E8)
class UMovieSceneMediaPlayerPropertySection final : public UMovieSceneSection
{
public:
	class UMediaSource*                           MediaSource;                                       // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLoop;                                             // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1237[0x7];                                     // 0x00F1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneMediaPlayerPropertySection">();
	}
	static class UMovieSceneMediaPlayerPropertySection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneMediaPlayerPropertySection>();
	}
};
static_assert(alignof(UMovieSceneMediaPlayerPropertySection) == 0x000008, "Wrong alignment on UMovieSceneMediaPlayerPropertySection");
static_assert(sizeof(UMovieSceneMediaPlayerPropertySection) == 0x0000F8, "Wrong size on UMovieSceneMediaPlayerPropertySection");
static_assert(offsetof(UMovieSceneMediaPlayerPropertySection, MediaSource) == 0x0000E8, "Member 'UMovieSceneMediaPlayerPropertySection::MediaSource' has a wrong offset!");
static_assert(offsetof(UMovieSceneMediaPlayerPropertySection, bLoop) == 0x0000F0, "Member 'UMovieSceneMediaPlayerPropertySection::bLoop' has a wrong offset!");

// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// 0x0008 (0x00C8 - 0x00C0)
class UMovieSceneMediaPlayerPropertyTrack final : public UMovieScenePropertyTrack
{
public:
	uint8                                         Pad_1238[0x8];                                     // 0x00C0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneMediaPlayerPropertyTrack">();
	}
	static class UMovieSceneMediaPlayerPropertyTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneMediaPlayerPropertyTrack>();
	}
};
static_assert(alignof(UMovieSceneMediaPlayerPropertyTrack) == 0x000008, "Wrong alignment on UMovieSceneMediaPlayerPropertyTrack");
static_assert(sizeof(UMovieSceneMediaPlayerPropertyTrack) == 0x0000C8, "Wrong size on UMovieSceneMediaPlayerPropertyTrack");

// Class MediaCompositing.MovieSceneMediaSection
// 0x0030 (0x0118 - 0x00E8)
class UMovieSceneMediaSection final : public UMovieSceneSection
{
public:
	class UMediaSource*                           MediaSource;                                       // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLooping;                                          // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1239[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFrameNumber                           StartFrameOffset;                                  // 0x00F4(0x0004)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaTexture*                          MediaTexture;                                      // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSoundComponent*                   MediaSoundComponent;                               // 0x0100(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseExternalMediaPlayer;                           // 0x0108(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_123A[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlayer*                           ExternalMediaPlayer;                               // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneMediaSection">();
	}
	static class UMovieSceneMediaSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneMediaSection>();
	}
};
static_assert(alignof(UMovieSceneMediaSection) == 0x000008, "Wrong alignment on UMovieSceneMediaSection");
static_assert(sizeof(UMovieSceneMediaSection) == 0x000118, "Wrong size on UMovieSceneMediaSection");
static_assert(offsetof(UMovieSceneMediaSection, MediaSource) == 0x0000E8, "Member 'UMovieSceneMediaSection::MediaSource' has a wrong offset!");
static_assert(offsetof(UMovieSceneMediaSection, bLooping) == 0x0000F0, "Member 'UMovieSceneMediaSection::bLooping' has a wrong offset!");
static_assert(offsetof(UMovieSceneMediaSection, StartFrameOffset) == 0x0000F4, "Member 'UMovieSceneMediaSection::StartFrameOffset' has a wrong offset!");
static_assert(offsetof(UMovieSceneMediaSection, MediaTexture) == 0x0000F8, "Member 'UMovieSceneMediaSection::MediaTexture' has a wrong offset!");
static_assert(offsetof(UMovieSceneMediaSection, MediaSoundComponent) == 0x000100, "Member 'UMovieSceneMediaSection::MediaSoundComponent' has a wrong offset!");
static_assert(offsetof(UMovieSceneMediaSection, bUseExternalMediaPlayer) == 0x000108, "Member 'UMovieSceneMediaSection::bUseExternalMediaPlayer' has a wrong offset!");
static_assert(offsetof(UMovieSceneMediaSection, ExternalMediaPlayer) == 0x000110, "Member 'UMovieSceneMediaSection::ExternalMediaPlayer' has a wrong offset!");

// Class MediaCompositing.MovieSceneMediaTrack
// 0x0018 (0x00A8 - 0x0090)
class UMovieSceneMediaTrack final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_123B[0x8];                                     // 0x0090(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMovieSceneSection*>             MediaSections;                                     // 0x0098(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneMediaTrack">();
	}
	static class UMovieSceneMediaTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneMediaTrack>();
	}
};
static_assert(alignof(UMovieSceneMediaTrack) == 0x000008, "Wrong alignment on UMovieSceneMediaTrack");
static_assert(sizeof(UMovieSceneMediaTrack) == 0x0000A8, "Wrong size on UMovieSceneMediaTrack");
static_assert(offsetof(UMovieSceneMediaTrack, MediaSections) == 0x000098, "Member 'UMovieSceneMediaTrack::MediaSections' has a wrong offset!");

}

