// Copyright Epic Games, Inc. All Rights Reserved.

#include "DXFConvertor.h"
#include "Misc/MessageDialog.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"

/*正常写头文件*/
#include "DXFConvertorLibrary/ExampleLibrary.h"
#include "DXFConvertorLibrary/dl_creationadapter.h"
#include "DXFConvertorLibrary/dl_dxf.h"

#define LOCTEXT_NAMESPACE "FDXFConvertorModule"

class MyTestClass : public DL_CreationAdapter
{
public:
	MyTestClass() { FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibrarySucess", "Sucessed to load example third party library")); }
};

void FDXFConvertorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	//// Get the base directory of this plugin
	//FString BaseDir = IPluginManager::Get().FindPlugin("DXFConvertor")->GetBaseDir();

	//// Add on the relative location of the third party dll and load it
	//FString LibraryPath;
	//LibraryPath = FPaths::Combine(*BaseDir, TEXT("Binaries/ThirdParty/DXFConvertorLibrary/Win64/ExampleLibrary.dll"));

	//ExampleLibraryHandle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;

	//if (ExampleLibraryHandle)
	//{
	//	// Call the test function in the third party library that opens a message box
	//	ExampleLibraryFunction();
	//}
	//else
	//{
	//	FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryError", "Failed to load example third party library"));
	//}
	MyTestClass tc;

	DL_Dxf dxf;
	if (!dxf.in("C:/Users/MH_3005/Desktop/ConvertorTest/Line.dxf", &tc))
	{
	}
	else
	{
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("Success"));

	}
}

void FDXFConvertorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	// Free the dll handle
	//FPlatformProcess::FreeDllHandle(ExampleLibraryHandle);
	//ExampleLibraryHandle = nullptr;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDXFConvertorModule, DXFConvertor)
