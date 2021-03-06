/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_oscim_utils_TessJNI */

#ifndef _Included_org_oscim_utils_TessJNI
#define _Included_org_oscim_utils_TessJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_oscim_utils_TessJNI
 * Method:    newTess
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_oscim_utils_TessJNI_newTess
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_oscim_utils_TessJNI
 * Method:    freeTess
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_oscim_utils_TessJNI_freeTess
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_oscim_utils_TessJNI
 * Method:    addContour
 * Signature: (JI[FIII)V
 */
JNIEXPORT void JNICALL Java_org_oscim_utils_TessJNI_addContour
  (JNIEnv *, jclass, jlong, jint, jfloatArray, jint, jint, jint);

/*
 * Class:     org_oscim_utils_TessJNI
 * Method:    addMultiContour2D
 * Signature: (J[I[FII)V
 */
JNIEXPORT void JNICALL Java_org_oscim_utils_TessJNI_addMultiContour2D
  (JNIEnv *, jclass, jlong, jintArray, jfloatArray, jint, jint);

/*
 * Class:     org_oscim_utils_TessJNI
 * Method:    tessContour2D
 * Signature: (JIIII)I
 */
JNIEXPORT jint JNICALL Java_org_oscim_utils_TessJNI_tessContour2D
  (JNIEnv *, jclass, jlong, jint, jint, jint, jint);

/*
 * Class:     org_oscim_utils_TessJNI
 * Method:    getVertexCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_oscim_utils_TessJNI_getVertexCount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_oscim_utils_TessJNI
 * Method:    getVertices
 * Signature: (J[FII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_oscim_utils_TessJNI_getVertices
  (JNIEnv *, jclass, jlong, jfloatArray, jint, jint);

/*
 * Class:     org_oscim_utils_TessJNI
 * Method:    getVerticesS
 * Signature: (J[SIIF)V
 */
JNIEXPORT void JNICALL Java_org_oscim_utils_TessJNI_getVerticesS
  (JNIEnv *, jclass, jlong, jshortArray, jint, jint, jfloat);

/*
 * Class:     org_oscim_utils_TessJNI
 * Method:    getVertexIndices
 * Signature: (J[III)Z
 */
JNIEXPORT jboolean JNICALL Java_org_oscim_utils_TessJNI_getVertexIndices
  (JNIEnv *, jclass, jlong, jintArray, jint, jint);

/*
 * Class:     org_oscim_utils_TessJNI
 * Method:    getElementCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_oscim_utils_TessJNI_getElementCount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_oscim_utils_TessJNI
 * Method:    getElements
 * Signature: (J[III)Z
 */
JNIEXPORT jboolean JNICALL Java_org_oscim_utils_TessJNI_getElements
  (JNIEnv *, jclass, jlong, jintArray, jint, jint);

/*
 * Class:     org_oscim_utils_TessJNI
 * Method:    getElementsS
 * Signature: (J[SII)V
 */
JNIEXPORT void JNICALL Java_org_oscim_utils_TessJNI_getElementsS
  (JNIEnv *, jclass, jlong, jshortArray, jint, jint);

/*
 * Class:     org_oscim_utils_TessJNI
 * Method:    getElementsWithInputVertexIds
 * Signature: (J[SIII)V
 */
JNIEXPORT void JNICALL Java_org_oscim_utils_TessJNI_getElementsWithInputVertexIds
  (JNIEnv *, jclass, jlong, jshortArray, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_oscim_utils_TessJNI_ElementType */

#ifndef _Included_org_oscim_utils_TessJNI_ElementType
#define _Included_org_oscim_utils_TessJNI_ElementType
#ifdef __cplusplus
extern "C" {
#endif
#undef org_oscim_utils_TessJNI_ElementType_POLYGONS
#define org_oscim_utils_TessJNI_ElementType_POLYGONS 0L
#undef org_oscim_utils_TessJNI_ElementType_CONNECTED_POLYGONS
#define org_oscim_utils_TessJNI_ElementType_CONNECTED_POLYGONS 1L
#undef org_oscim_utils_TessJNI_ElementType_BOUNDARY_CONTOURS
#define org_oscim_utils_TessJNI_ElementType_BOUNDARY_CONTOURS 2L
#ifdef __cplusplus
}
#endif
#endif
/* Header for class org_oscim_utils_TessJNI_WindingRule */

#ifndef _Included_org_oscim_utils_TessJNI_WindingRule
#define _Included_org_oscim_utils_TessJNI_WindingRule
#ifdef __cplusplus
extern "C" {
#endif
#undef org_oscim_utils_TessJNI_WindingRule_ODD
#define org_oscim_utils_TessJNI_WindingRule_ODD 0L
#undef org_oscim_utils_TessJNI_WindingRule_NONZERO
#define org_oscim_utils_TessJNI_WindingRule_NONZERO 1L
#undef org_oscim_utils_TessJNI_WindingRule_POSITIVE
#define org_oscim_utils_TessJNI_WindingRule_POSITIVE 2L
#undef org_oscim_utils_TessJNI_WindingRule_NEGATIVE
#define org_oscim_utils_TessJNI_WindingRule_NEGATIVE 3L
#undef org_oscim_utils_TessJNI_WindingRule_ABS_GEQ_TWO
#define org_oscim_utils_TessJNI_WindingRule_ABS_GEQ_TWO 4L
#ifdef __cplusplus
}
#endif
#endif
