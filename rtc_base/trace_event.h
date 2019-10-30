// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file under third_party_mods/chromium or at:
// http://src.chromium.org/svn/trunk/src/LICENSE

#ifndef RTC_BASE_TRACE_EVENT_H_
#define RTC_BASE_TRACE_EVENT_H_

#include <string>

namespace webrtc {
namespace trace_event_internal {

//#include "rtc_base/event_tracer.h"

#if defined(TRACE_EVENT0)
#error "Another copy of trace_event.h has already been included."
#endif


// Records a pair of begin and end events called "name" for the current
// scope, with 0, 1 or 2 associated arguments. If the category is not
// enabled, then this does nothing.
// - category and name strings must have application lifetime (statics or
//   literals). They may not include " chars.
#define TRACE_EVENT0(category, name)
#define TRACE_EVENT1(category, name, arg1_name, arg1_val)
#define TRACE_EVENT2(category, name, arg1_name, arg1_val, arg2_name, arg2_val)

}  // namespace trace_event_internal
}  // namespace webrtc

#endif  // RTC_BASE_TRACE_EVENT_H_
