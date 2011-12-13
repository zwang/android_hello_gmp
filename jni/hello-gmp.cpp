/*
 * Copyright (C) 2009 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#include <string.h>
#include <jni.h>
#include "addrat.h"
#include <string>

extern "C" {
JNIEXPORT jstring JNICALL Java_com_example_hellogmp_HelloGMP_stringFromJNI( 
	JNIEnv* env, jobject thiz );
}

JNIEXPORT jstring JNICALL
Java_com_example_hellogmp_HelloGMP_stringFromJNI( JNIEnv* env,
                                                  jobject thiz )
{
	std::string out("Hello from GMP!\n");
	out += "What is 1/3 + 1/2? \n";
	out += "I think it is ";
	out += addrat(1,3, 1,2);
	const char * c_out = out.c_str();
	return env->NewStringUTF(c_out);
}
