// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//
// Copyright (c) Microsoft Corporation. All rights reserved
#pragma once
#include <CopyHook_h.h>

class __declspec(uuid("e5f7e86b-6d9a-4a24-a6cf-e1856993f95b")) TestCopyHookHandler :
    public winrt::implements<TestCopyHookHandler, IStorageProviderCopyHook>
{
public:
    IFACEMETHODIMP CopyCallback(HWND, UINT, UINT, PCWSTR sourceFile, DWORD, PCWSTR, DWORD, UINT* result);
};