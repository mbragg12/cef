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
// $hash=9a94ba84248d15d2fe6f55e7c89f0b887d93b5c7$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_DRAG_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_DRAG_HANDLER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include <vector>

#include "include/capi/cef_drag_handler_capi.h"
#include "include/cef_drag_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefDragHandlerCToCpp : public CefCToCppRefCounted<CefDragHandlerCToCpp,
                                                        CefDragHandler,
                                                        cef_drag_handler_t> {
 public:
  CefDragHandlerCToCpp();
  virtual ~CefDragHandlerCToCpp();

  // CefDragHandler methods.
  bool OnDragEnter(CefRefPtr<CefBrowser> browser,
                   CefRefPtr<CefDragData> dragData,
                   DragOperationsMask mask) override;
  void OnDraggableRegionsChanged(
      CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame,
      const std::vector<CefDraggableRegion>& regions) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_DRAG_HANDLER_CTOCPP_H_
