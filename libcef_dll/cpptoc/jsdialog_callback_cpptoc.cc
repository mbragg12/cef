// Copyright (c) 2024 The Chromium Embedded Framework Authors. All rights
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
// $hash=dfbadf8fc51bb7378be8971c061cc62d608271b9$
//

#include "libcef_dll/cpptoc/jsdialog_callback_cpptoc.h"

#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK jsdialog_callback_cont(struct _cef_jsdialog_callback_t* self,
                                         int success,
                                         const cef_string_t* user_input) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Unverified params: user_input

  // Execute
  CefJSDialogCallbackCppToC::Get(self)->Continue(success ? true : false,
                                                 CefString(user_input));
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefJSDialogCallbackCppToC::CefJSDialogCallbackCppToC() {
  GetStruct()->cont = jsdialog_callback_cont;
}

// DESTRUCTOR - Do not edit by hand.

CefJSDialogCallbackCppToC::~CefJSDialogCallbackCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefJSDialogCallback> CefCppToCRefCounted<
    CefJSDialogCallbackCppToC,
    CefJSDialogCallback,
    cef_jsdialog_callback_t>::UnwrapDerived(CefWrapperType type,
                                            cef_jsdialog_callback_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefJSDialogCallbackCppToC,
                                   CefJSDialogCallback,
                                   cef_jsdialog_callback_t>::kWrapperType =
    WT_JSDIALOG_CALLBACK;
