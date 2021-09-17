load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "cpplib_test",
    srcs = ["cpplib_test.cc"],
    deps = [
        "//source/lib:CPPLib",
        "@com_google_googletest//:gtest_main",
    ],
)