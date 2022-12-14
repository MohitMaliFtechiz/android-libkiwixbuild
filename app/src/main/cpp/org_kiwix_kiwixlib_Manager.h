/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_kiwix_kiwixlib_Manager */

#ifndef _Included_org_kiwix_kiwixlib_Manager
#define _Included_org_kiwix_kiwixlib_Manager
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_kiwix_kiwixlib_Manager
 * Method:    readFile
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_kiwix_kiwixlib_Manager_readFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_kiwix_kiwixlib_Manager
 * Method:    readXml
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_kiwix_kiwixlib_Manager_readXml
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     org_kiwix_kiwixlib_Manager
 * Method:    readOpds
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_kiwix_kiwixlib_Manager_readOpds
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     org_kiwix_kiwixlib_Manager
 * Method:    readBookmarkFile
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_kiwix_kiwixlib_Manager_readBookmarkFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_kiwix_kiwixlib_Manager
 * Method:    addBookFromPath
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_kiwix_kiwixlib_Manager_addBookFromPath
  (JNIEnv *, jobject, jstring, jstring, jstring, jboolean);

/*
 * Class:     org_kiwix_kiwixlib_Manager
 * Method:    allocate
 * Signature: (Lorg/kiwix/kiwixlib/Library;)V
 */
JNIEXPORT void JNICALL Java_org_kiwix_kiwixlib_Manager_allocate
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_kiwix_kiwixlib_Manager
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_kiwix_kiwixlib_Manager_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
