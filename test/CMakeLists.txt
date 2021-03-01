enable_testing()

include_directories(${CMAKE_SOURCE_DIR}/gtest/include)
include_directories(${CMAKE_SOURCE_DIR}/include)

link_directories(${CMAKE_SOURCE_DIR}/lib)
link_directories(${CMAKE_SOURCE_DIR}/gtest/lib)

set(LIBRARIES gtestd gtest_maind helloworld)

add_executable(foo test1.cc)

target_link_libraries(foo ${LIBRARIES})

add_test(AllTestsInFoo foo)