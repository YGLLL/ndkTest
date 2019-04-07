package cn.ewhale.myapplication;

/**
 * create by ygl
 * 2019/4/7 12:16
 */
public class JNITest {
    // 动态导入 so 库
    static {
        System.loadLibrary("JNITest");
    }
    public native static String get();
}
