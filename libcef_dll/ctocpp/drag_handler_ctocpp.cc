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
// $hash=65cf0fa1f2308c7e20327c4e91c75f1365f38d5c$
//

#include "libcef_dll/ctocpp/drag_handler_ctocpp.h"

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/drag_data_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
bool CefDragHandlerCToCpp::OnDragEnter(CefRefPtr<CefBrowser> browser,
                                       CefRefPtr<CefDragData> dragData,
                                       DragOperationsMask mask) {
  shutdown_checker::AssertNotShutdown();

  cef_drag_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_drag_enter)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return false;
  }
  // Verify param: dragData; type: refptr_diff
  DCHECK(dragData.get());
  if (!dragData.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->on_drag_enter(_struct, CefBrowserCppToC::Wrap(browser),
                                       CefDragDataCppToC::Wrap(dragData), mask);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefDragHandlerCToCpp::OnDraggableRegionsChanged(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    const std::vector<CefDraggableRegion>& regions) {
  shutdown_checker::AssertNotShutdown();

  cef_drag_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_draggable_regions_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get()) {
    return;
  }

  // Translate param: regions; type: simple_vec_byref_const
  const size_t regionsCount = regions.size();
  cef_draggable_region_t* regionsList = NULL;
  if (regionsCount > 0) {
    regionsList = new cef_draggable_region_t[regionsCount];
    DCHECK(regionsList);
    if (regionsList) {
      for (size_t i = 0; i < regionsCount; ++i) {
        regionsList[i] = regions[i];
      }
    }
  }

  // Execute
  _struct->on_draggable_regions_changed(
      _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      regionsCount, regionsList);

  // Restore param:regions; type: simple_vec_byref_const
  if (regionsList) {
    delete[] regionsList;
  }
}

// CONSTRUCTOR - Do not edit by hand.

CefDragHandlerCToCpp::CefDragHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefDragHandlerCToCpp::~CefDragHandlerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_drag_handler_t*
CefCToCppRefCounted<CefDragHandlerCToCpp, CefDragHandler, cef_drag_handler_t>::
    UnwrapDerived(CefWrapperType type, CefDragHandler* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefDragHandlerCToCpp,
                                   CefDragHandler,
                                   cef_drag_handler_t>::kWrapperType =
    WT_DRAG_HANDLER;
