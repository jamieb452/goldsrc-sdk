#ifndef IGAMECONSOLE_H
#define IGAMECONSOLE_H

#ifdef _WIN32
#pragma once
#endif

#include "tier1/interface.h" // or public/
//#include <vgui/VGUI2.h>

#define GAMECONSOLE_INTERFACE_VERSION "GameConsole003"

class Color;

//-----------------------------------------------------------------------------
// Purpose: interface to game/dev console (GameUI console interface)
// Phil: Only one difference between Source and GoldSrc versions.
//-----------------------------------------------------------------------------
class IGameConsole : public IBaseInterface
{
public:
	/// Activates the console, makes it visible and brings it to the foreground
	virtual void Activate() = 0;
	
	/// Initialize the console
	virtual void Initialize() = 0;
	
	/// Hides the console
	virtual void Hide() = 0;
	
	/// Clears the console
	virtual void Clear() = 0;
	
	/// @return true if the console has focus
	virtual bool IsConsoleVisible() = 0;
	
	/// Prints a message to the console
	virtual void Printf(const char *format, ...) = 0;
	
	/// Prints a debug message to the console
	virtual void DPrintf(const char *format, ...) = 0;
	
	/// Prints a debug message to the console
	// Phil: This function is not present in GoldSrc
	//virtual void ColorPrintf(Color &clr) = 0; // ( Color& clr, const char *format, ...)
	
	/// Set parent vgui panel
	virtual void SetParent(int parent) = 0; // int = vgui2::VPANEL
};

extern IGameConsole *g_pConsole;

#endif // IGAMECONSOLE_H