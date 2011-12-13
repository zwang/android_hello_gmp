package com.example.HelloGMP;

import android.test.ActivityInstrumentationTestCase;

/**
 * This is a simple framework for a test of an Application.  See
 * {@link android.test.ApplicationTestCase ApplicationTestCase} for more information on
 * how to write and extend Application tests.
 * <p/>
 * To run this test, you can type:
 * adb shell am instrument -w \
 * -e class com.example.HelloGMP.HelloGMPTest \
 * com.example.HelloGMP.tests/android.test.InstrumentationTestRunner
 */
public class HelloGMPTest extends ActivityInstrumentationTestCase<HelloGMP> {

    public HelloGMPTest() {
        super("com.example.HelloGMP", HelloGMP.class);
    }

}
