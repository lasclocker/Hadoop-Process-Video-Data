/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_hadoop_streaming_GetVideoInfo */

#ifndef _Included_org_apache_hadoop_streaming_GetVideoInfo
#define _Included_org_apache_hadoop_streaming_GetVideoInfo
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_apache_hadoop_streaming_GetVideoInfo
 * Method:    setSplitNum
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_apache_hadoop_streaming_GetVideoInfo_setSplitNum
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_apache_hadoop_streaming_GetVideoInfo
 * Method:    getVideoOffsetAndSizeAndFlag
 * Signature: ([BJJ)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_apache_hadoop_streaming_GetVideoInfo_getVideoOffsetAndSizeAndFlag
  (JNIEnv *, jclass, jbyteArray, jlong, jlong);

/*
 * Class:     org_apache_hadoop_streaming_GetVideoInfo
 * Method:    getSplitAndGOPInfo
 * Signature: ()Ljava/util/HashMap;
 */
JNIEXPORT jobject JNICALL Java_org_apache_hadoop_streaming_GetVideoInfo_getSplitAndGOPInfo
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif