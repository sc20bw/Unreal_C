#pragma once

#include "Engine.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "UnrealEd.h"

#include "MoveComponentVisualiser.h"

DECLARE_LOG_CATEGORY_EXTERN(CppTutEditor, All, All)

class FCppTutEditorModule : public IModuleInterface
{
public:
    void StartupModule() override;
    void ShutdownModule() override;
};