// Copyright Epic Games, Inc. All Rights Reserved.

#include "DXFConvertor.h"
#include "Misc/MessageDialog.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"

/*����дͷ�ļ�*/
//#include "DXFConvertorLibrary/dl_creationadapter.h"
//#include "DXFConvertorLibrary/dl_dxf.h"

#define LOCTEXT_NAMESPACE "FDXFConvertorModule"


void FDXFConvertorModule::StartupModule()
{
	// ������
	// FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryError", "Failed to load example third party library"));

}

void FDXFConvertorModule::ShutdownModule()
{

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDXFConvertorModule, DXFConvertor)
