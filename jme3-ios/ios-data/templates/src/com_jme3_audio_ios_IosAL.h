/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jme3_audio_ios_IosAL */

#ifndef _Included_com_jme3_audio_ios_IosAL
#define _Included_com_jme3_audio_ios_IosAL
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alGetString
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_jme3_audio_ios_IosAL_alGetString
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alGenSources
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_jme3_audio_ios_IosAL_alGenSources
  (JNIEnv *, jobject);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alGetError
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_jme3_audio_ios_IosAL_alGetError
  (JNIEnv *, jobject);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alDeleteSources
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_ios_IosAL_alDeleteSources
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alGenBuffers
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_ios_IosAL_alGenBuffers
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alDeleteBuffers
 * Signature: (ILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_ios_IosAL_alDeleteBuffers
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alSourceStop
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_ios_IosAL_alSourceStop
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alSourcei
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_ios_IosAL_alSourcei
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alBufferData
 * Signature: (IILjava/nio/ByteBuffer;II)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_ios_IosAL_alBufferData
  (JNIEnv *, jobject, jint, jint, jobject, jint, jint);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alSourcePlay
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_ios_IosAL_alSourcePlay
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alSourcePause
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_ios_IosAL_alSourcePause
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alSourcef
 * Signature: (IIF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_ios_IosAL_alSourcef
  (JNIEnv *, jobject, jint, jint, jfloat);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alSource3f
 * Signature: (IIFFF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_ios_IosAL_alSource3f
  (JNIEnv *, jobject, jint, jint, jfloat, jfloat, jfloat);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alGetSourcei
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_jme3_audio_ios_IosAL_alGetSourcei
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alSourceUnqueueBuffers
 * Signature: (IILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_ios_IosAL_alSourceUnqueueBuffers
  (JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alSourceQueueBuffers
 * Signature: (IILjava/nio/IntBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_ios_IosAL_alSourceQueueBuffers
  (JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alListener
 * Signature: (ILjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_ios_IosAL_alListener
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alListenerf
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_ios_IosAL_alListenerf
  (JNIEnv *, jobject, jint, jfloat);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alListener3f
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_ios_IosAL_alListener3f
  (JNIEnv *, jobject, jint, jfloat, jfloat, jfloat);

/*
 * Class:     com_jme3_audio_ios_IosAL
 * Method:    alSource3i
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_com_jme3_audio_ios_IosAL_alSource3i
  (JNIEnv *, jobject, jint, jint, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
