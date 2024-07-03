#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystem

#include "Basic.hpp"


namespace SDK::Params
{

// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
// 0x0010 (0x0010 - 0x0000)
struct TurnBasedMatchInterface_OnMatchEnded final
{
public:
	class FString                                 Match;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TurnBasedMatchInterface_OnMatchEnded) == 0x000008, "Wrong alignment on TurnBasedMatchInterface_OnMatchEnded");
static_assert(sizeof(TurnBasedMatchInterface_OnMatchEnded) == 0x000010, "Wrong size on TurnBasedMatchInterface_OnMatchEnded");
static_assert(offsetof(TurnBasedMatchInterface_OnMatchEnded, Match) == 0x000000, "Member 'TurnBasedMatchInterface_OnMatchEnded::Match' has a wrong offset!");

// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
// 0x0018 (0x0018 - 0x0000)
struct TurnBasedMatchInterface_OnMatchReceivedTurn final
{
public:
	class FString                                 Match;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDidBecomeActive;                                  // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E07[0x7];                                      // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TurnBasedMatchInterface_OnMatchReceivedTurn) == 0x000008, "Wrong alignment on TurnBasedMatchInterface_OnMatchReceivedTurn");
static_assert(sizeof(TurnBasedMatchInterface_OnMatchReceivedTurn) == 0x000018, "Wrong size on TurnBasedMatchInterface_OnMatchReceivedTurn");
static_assert(offsetof(TurnBasedMatchInterface_OnMatchReceivedTurn, Match) == 0x000000, "Member 'TurnBasedMatchInterface_OnMatchReceivedTurn::Match' has a wrong offset!");
static_assert(offsetof(TurnBasedMatchInterface_OnMatchReceivedTurn, bDidBecomeActive) == 0x000010, "Member 'TurnBasedMatchInterface_OnMatchReceivedTurn::bDidBecomeActive' has a wrong offset!");

}

