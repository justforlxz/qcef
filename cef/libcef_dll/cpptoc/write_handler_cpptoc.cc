// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=0474e29257b82b777a1f7d2ba4a8fcdb5297d9a6$
//

#include "libcef_dll/cpptoc/write_handler_cpptoc.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

size_t CEF_CALLBACK write_handler_write(struct _cef_write_handler_t* self,
                                        const void* ptr,
                                        size_t size,
                                        size_t n) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: ptr; type: simple_byaddr
  DCHECK(ptr);
  if (!ptr)
    return 0;

  // Execute
  size_t _retval = CefWriteHandlerCppToC::Get(self)->Write(ptr, size, n);

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK write_handler_seek(struct _cef_write_handler_t* self,
                                    int64 offset,
                                    int whence) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefWriteHandlerCppToC::Get(self)->Seek(offset, whence);

  // Return type: simple
  return _retval;
}

int64 CEF_CALLBACK write_handler_tell(struct _cef_write_handler_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int64 _retval = CefWriteHandlerCppToC::Get(self)->Tell();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK write_handler_flush(struct _cef_write_handler_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefWriteHandlerCppToC::Get(self)->Flush();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK write_handler_may_block(struct _cef_write_handler_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefWriteHandlerCppToC::Get(self)->MayBlock();

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefWriteHandlerCppToC::CefWriteHandlerCppToC() {
  GetStruct()->write = write_handler_write;
  GetStruct()->seek = write_handler_seek;
  GetStruct()->tell = write_handler_tell;
  GetStruct()->flush = write_handler_flush;
  GetStruct()->may_block = write_handler_may_block;
}

template <>
CefRefPtr<CefWriteHandler> CefCppToCRefCounted<
    CefWriteHandlerCppToC,
    CefWriteHandler,
    cef_write_handler_t>::UnwrapDerived(CefWrapperType type,
                                        cef_write_handler_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCppToCRefCounted<CefWriteHandlerCppToC,
                                         CefWriteHandler,
                                         cef_write_handler_t>::DebugObjCt = 0;
#endif

template <>
CefWrapperType CefCppToCRefCounted<CefWriteHandlerCppToC,
                                   CefWriteHandler,
                                   cef_write_handler_t>::kWrapperType =
    WT_WRITE_HANDLER;
