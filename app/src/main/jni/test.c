#include<jni.h>
#include<stdio.h>
//导入我们创建的头文件
#include "cn_ewhale_myapplication_JNITest.h"

JNIEXPORT jstring JNICALL Java_cn_ewhale_myapplication_JNITest_get(JNIEnv *env,jclass jclass){

      //返回一个字符串
      return (*env)->NewStringUTF(env,"杨国亮是最棒的");
}