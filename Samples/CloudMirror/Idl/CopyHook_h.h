

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for e:\Windows-classic-samples\Samples\CloudMirror\Idl\CopyHook.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __CopyHook_h_h__
#define __CopyHook_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#if defined(__cplusplus)
#if defined(__MIDL_USE_C_ENUM)
#define MIDL_ENUM enum
#else
#define MIDL_ENUM enum class
#endif
#endif


/* Forward Declarations */ 

#ifndef __IStorageProviderCopyHook_FWD_DEFINED__
#define __IStorageProviderCopyHook_FWD_DEFINED__
typedef interface IStorageProviderCopyHook IStorageProviderCopyHook;

#endif 	/* __IStorageProviderCopyHook_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IStorageProviderCopyHook_INTERFACE_DEFINED__
#define __IStorageProviderCopyHook_INTERFACE_DEFINED__

/* interface IStorageProviderCopyHook */
/* [uuid][object] */ 


EXTERN_C const IID IID_IStorageProviderCopyHook;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7bf992a9-af7a-4dba-b2e5-4d080b1ecbc6")
    IStorageProviderCopyHook : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CopyCallback( 
            /* [unique][in] */ HWND hwnd,
            /* [in] */ UINT operation,
            /* [in] */ UINT flags,
            /* [string][in] */ LPCWSTR srcFile,
            /* [in] */ DWORD srcAttribs,
            /* [string][unique][in] */ LPCWSTR destFile,
            /* [in] */ DWORD destAttribs,
            /* [out] */ UINT *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStorageProviderCopyHookVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStorageProviderCopyHook * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStorageProviderCopyHook * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStorageProviderCopyHook * This);
        
        HRESULT ( STDMETHODCALLTYPE *CopyCallback )( 
            IStorageProviderCopyHook * This,
            /* [unique][in] */ HWND hwnd,
            /* [in] */ UINT operation,
            /* [in] */ UINT flags,
            /* [string][in] */ LPCWSTR srcFile,
            /* [in] */ DWORD srcAttribs,
            /* [string][unique][in] */ LPCWSTR destFile,
            /* [in] */ DWORD destAttribs,
            /* [out] */ UINT *result);
        
        END_INTERFACE
    } IStorageProviderCopyHookVtbl;

    interface IStorageProviderCopyHook
    {
        CONST_VTBL struct IStorageProviderCopyHookVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStorageProviderCopyHook_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStorageProviderCopyHook_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStorageProviderCopyHook_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStorageProviderCopyHook_CopyCallback(This,hwnd,operation,flags,srcFile,srcAttribs,destFile,destAttribs,result)	\
    ( (This)->lpVtbl -> CopyCallback(This,hwnd,operation,flags,srcFile,srcAttribs,destFile,destAttribs,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStorageProviderCopyHook_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

unsigned long             __RPC_USER  HWND_UserSize64(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal64(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree64(     unsigned long *, HWND * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


