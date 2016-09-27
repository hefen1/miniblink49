// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef PeriodicSyncEventInit_h
#define PeriodicSyncEventInit_h

#include "modules/ModulesExport.h"
#include "modules/background_sync/PeriodicSyncRegistration.h"
#include "modules/serviceworkers/ExtendableEventInit.h"
#include "platform/heap/Handle.h"

namespace blink {

class MODULES_EXPORT PeriodicSyncEventInit : public ExtendableEventInit {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    PeriodicSyncEventInit();

    bool hasRegistration() const { return m_registration; }
    PeriodicSyncRegistration* registration() const { return m_registration; }
    void setRegistration(PeriodicSyncRegistration* value) { m_registration = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Member<PeriodicSyncRegistration> m_registration;

    friend class V8PeriodicSyncEventInit;
};

} // namespace blink

#endif // PeriodicSyncEventInit_h