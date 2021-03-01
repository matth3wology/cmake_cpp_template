#include <gtest/gtest.h>
#include <helloworld.hpp>

namespace {
    TEST(HelloWorld,greetingTest) {
        HelloWorld::Greeting test;
        ASSERT_EQ(232,test.GetNumber());
    }
}