#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChatInterface

#include "Basic.hpp"

#include "ChatInterface_classes.hpp"


namespace SDK
{

// Function ChatInterface.ChatInterface_C.NewChat
// (Public, BlueprintCallable, BlueprintEvent)

void IChatInterface_C::NewChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatInterface_C", "NewChat");

	UObject::ProcessEvent(Func, nullptr);
}

}
