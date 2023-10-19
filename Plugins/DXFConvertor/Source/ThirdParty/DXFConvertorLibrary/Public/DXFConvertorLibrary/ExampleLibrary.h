#if defined _WIN32 || defined _WIN64
#define EXAMPLELIBRARY_IMPORT __declspec(dllimport)
#endif

EXAMPLELIBRARY_IMPORT void ExampleLibraryFunction();
