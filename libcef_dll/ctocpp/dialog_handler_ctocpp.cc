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
// $hash=40bd7cc8a8fd361aceda9bbd426f912ac140ac3d$
//

#include "libcef_dll/ctocpp/dialog_handler_ctocpp.h"

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/file_dialog_callback_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/transfer_util.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
bool CefDialogHandlerCToCpp::OnFileDialog(
    CefRefPtr<CefBrowser> browser,
    FileDialogMode mode,
    const CefString& title,
    const CefString& default_file_path,
    const std::vector<CefString>& accept_filters,
    CefRefPtr<CefFileDialogCallback> callback) {
  shutdown_checker::AssertNotShutdown();

  cef_dialog_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_file_dialog)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return false;
  }
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get()) {
    return false;
  }
  // Unverified params: title, default_file_path, accept_filters

  // Translate param: accept_filters; type: string_vec_byref_const
  cef_string_list_t accept_filtersList = cef_string_list_alloc();
  DCHECK(accept_filtersList);
  if (accept_filtersList) {
    transfer_string_list_contents(accept_filters, accept_filtersList);
  }

  // Execute
  int _retval = _struct->on_file_dialog(
      _struct, CefBrowserCppToC::Wrap(browser), mode, title.GetStruct(),
      default_file_path.GetStruct(), accept_filtersList,
      CefFileDialogCallbackCppToC::Wrap(callback));

  // Restore param:accept_filters; type: string_vec_byref_const
  if (accept_filtersList) {
    cef_string_list_free(accept_filtersList);
  }

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefDialogHandlerCToCpp::CefDialogHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefDialogHandlerCToCpp::~CefDialogHandlerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_dialog_handler_t*
CefCToCppRefCounted<CefDialogHandlerCToCpp,
                    CefDialogHandler,
                    cef_dialog_handler_t>::UnwrapDerived(CefWrapperType type,
                                                         CefDialogHandler* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefDialogHandlerCToCpp,
                                   CefDialogHandler,
                                   cef_dialog_handler_t>::kWrapperType =
    WT_DIALOG_HANDLER;
