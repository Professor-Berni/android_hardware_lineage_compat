/*
 * Copyright (C) 2023 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <utils/String16.h>

extern "C" void  _ZN7android15PermissionCacheC1Ev() {}

namespace android {
namespace PermissionCache {

bool checkPermission(const String16& /* permission */, pid_t /* pid */, uid_t /* uid */) {
    return true;
};

bool checkCallingPermission(const String16& /* permission */) {
    return true;
};

}  // namespace PermissionCache
}  // namespace android
