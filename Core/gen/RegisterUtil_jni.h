
// This file is autogenerated by
//     /Users/dli/Documents/lynx/lynx-native/lynx/build/jni_generator.py
// For
//     com/lynx/utils/RegisterUtil

#ifndef com_lynx_utils_RegisterUtil_JNI
#define com_lynx_utils_RegisterUtil_JNI

#include <jni.h>

#include "base/android/android_jni.h"

// Step 1: forward declarations.
namespace {
const char kRegisterUtilClassPath[] = "com/lynx/utils/RegisterUtil";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_RegisterUtil_clazz = NULL;
#define RegisterUtil_clazz(env) g_RegisterUtil_clazz

}  // namespace

static void RegisterTag(JNIEnv* env, jclass jcaller,
    jint type,
    jstring tagName);

static void RegisterJSMethod(JNIEnv* env, jclass jcaller,
    jint type,
    jstring methodName,
    jint methodId);

// Step 2: method stubs.

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsRegisterUtil[] = {
    { "nativeRegisterTag",
"("
"I"
"Ljava/lang/String;"
")"
"V", reinterpret_cast<void*>(RegisterTag) },
    { "nativeRegisterJSMethod",
"("
"I"
"Ljava/lang/String;"
"I"
")"
"V", reinterpret_cast<void*>(RegisterJSMethod) },
};

static bool RegisterNativesImpl(JNIEnv* env) {

  g_RegisterUtil_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kRegisterUtilClassPath).Get()));

  const int kMethodsRegisterUtilSize =
      sizeof(kMethodsRegisterUtil)/sizeof(kMethodsRegisterUtil[0]);

  if (env->RegisterNatives(RegisterUtil_clazz(env),
                           kMethodsRegisterUtil,
                           kMethodsRegisterUtilSize) < 0) {
    //jni_generator::HandleRegistrationError(
    //    env, RegisterUtil_clazz(env), __FILE__);
    return false;
  }

  return true;
}

#endif  // com_lynx_utils_RegisterUtil_JNI