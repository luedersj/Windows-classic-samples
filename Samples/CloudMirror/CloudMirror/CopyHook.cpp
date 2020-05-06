// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//
// Copyright (c) Microsoft Corporation. All rights reserved

#include "stdafx.h"
#include "CopyHook.h"

IFACEMETHODIMP TestCopyHookHandler::CopyCallback(HWND, UINT, UINT, PCWSTR sourceFile, DWORD, PCWSTR, DWORD, UINT* result)
{
    wprintf(L"Copy hook called for %s\n", sourceFile);
    return S_OK;
}