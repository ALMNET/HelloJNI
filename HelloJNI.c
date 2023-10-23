// Save as "HelloJNI.c"
#include <jni.h>        // JNI header provided by JDK

//#include "C:\Program Files\Java\jdk-17\include\jni.h"
#include <stdio.h>      // C Standard IO Header
#include "HelloJNI.h"   // Generated
 
// Implementation of the native method sayHello()
JNIEXPORT void JNICALL Java_HelloJNI_sayHello(JNIEnv *env, jobject thisObj) {
   printf("Hello World!\n");
   return;
}