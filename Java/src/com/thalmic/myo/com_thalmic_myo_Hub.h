/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_thalmic_myo_Hub */

#ifndef _Included_com_thalmic_myo_Hub
#define _Included_com_thalmic_myo_Hub
#ifdef __cplusplus
extern "C" {
#endif
#undef com_thalmic_myo_Hub_POLICY_NONE
#define com_thalmic_myo_Hub_POLICY_NONE 0L
#undef com_thalmic_myo_Hub_POLICY_STANDARD
#define com_thalmic_myo_Hub_POLICY_STANDARD 1L
/*
 * Class:     com_thalmic_myo_Hub
 * Method:    _initHub
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_thalmic_myo_Hub__1initHub
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_thalmic_myo_Hub
 * Method:    _release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_thalmic_myo_Hub__1release
  (JNIEnv *, jobject);

/*
 * Class:     com_thalmic_myo_Hub
 * Method:    _setLockingPolicy
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_thalmic_myo_Hub__1setLockingPolicy
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_thalmic_myo_Hub
 * Method:    _run
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_thalmic_myo_Hub__1run
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_thalmic_myo_Hub
 * Method:    _runOnce
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_thalmic_myo_Hub__1runOnce
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_thalmic_myo_Hub
 * Method:    _waitForMyo
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_thalmic_myo_Hub__1waitForMyo
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_thalmic_myo_Hub
 * Method:    _addDeviceListener
 * Signature: (Lcom/thalmic/myo/DeviceListener;ZZZZZZZZZZZZZZZZ)J
 */
JNIEXPORT jlong JNICALL Java_com_thalmic_myo_Hub__1addDeviceListener
  (JNIEnv *, jobject, jobject, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean);

/*
 * Class:     com_thalmic_myo_Hub
 * Method:    _removeDeviceListener
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_thalmic_myo_Hub__1removeDeviceListener
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
