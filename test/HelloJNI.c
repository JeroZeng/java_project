#include <jni.h>
#include <stdio.h>
#include "include/com_jni_HelloJNI.h"

JNIEXPORT void JNICALL Java_com_jni_HelloJNI_sayHello(JNIEnv *env, jobject thisObj) {
   printf("Hello JNI Package!\n");
   return;
}
