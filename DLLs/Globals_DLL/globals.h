#pragma once
//******************************************************************************
//
// This file is part of the OpenHoldem project
//    Source code:           https://github.com/OpenHoldem/openholdembot/
//    Forums:                http://www.maxinmontreal.com/forums/index.php
//    Licensed under GPL v3: http://www.gnu.org/licenses/gpl.html
//
//******************************************************************************
//
// Purpose: Managing access to global data,
//   avoiding circular dependency of DLLs to OpenHoldem.
//   Temp solution until we get rid of all global data,
//   once mpdulatization has been improved
//
//******************************************************************************

#ifdef GLOBALS_DLL_EXPORTS
#define GLOBALS_DLL_API __declspec(dllexport)
#else
#define GLOBALS_DLL_API __declspec(dllimport)
#endif

class CEngineContainer;
class CFunctionCollection;
class CGUI;
class CPreferences;
class CTableState;
GLOBALS_DLL_API CEngineContainer* EngineContainer();
GLOBALS_DLL_API CFunctionCollection* FunctionCollection();
GLOBALS_DLL_API CGUI* GUI();
GLOBALS_DLL_API CPreferences* Preferences();
///GLOBALS_DLL_API CTableState* TableState();
GLOBALS_DLL_API void InitGlobals();
