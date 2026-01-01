#include "core/commands/Command.hpp"
#include "game/gta/Natives.hpp"
#include "core/frontend/Notifications.hpp"
#include "game/gta/ScriptGlobal.hpp"
#include "core/backend/ScriptMgr.hpp"

namespace YimMenu::Features
{

	class Unlockcontent : public Command
	{
		using Command::Command;
		virtual void OnCall() override
		{
			if (*Pointers.IsSessionStarted)
			{
			*ScriptGlobal(262145).At(37820).As<int*>() = 1; // Bomb Squad, Mansion Raid
			*ScriptGlobal(262145).At(37821).As<int*>() = 1; // Knockdown
			*ScriptGlobal(262145).At(37822).As<int*>() = 1; // Alpha Mail
			*ScriptGlobal(262145).At(37823).As<int*>() = 1; // Meteoric, Hot Off The Press
			*ScriptGlobal(262145).At(37636).As<int*>() = 1; // LS Fire Department
			*ScriptGlobal(262145).At(37637).As<int*>() = 1; // Forklift Operator
			*ScriptGlobal(262145).At(37638).As<int*>() = 1; // Paper Route
			*ScriptGlobal(262145).At(37639).As<int*>() = 1; // Lucky Clover Event
			}
			else
			{
				Notifications::Show("YimMenuV2", "You Must be Online", NotificationType::Error);
			}
		}
	};
	static Unlockcontent _Unlockcontent{
	    "Unreleased_content",
	    "Unreleased content",
	    "Enable hidden awards on pause menu (Temporarily)"};

}
