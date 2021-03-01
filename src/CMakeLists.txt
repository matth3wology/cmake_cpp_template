
include_directories(${CMAKE_SOURCE_DIR}/include)

add_library(helloworld helloworld.cc)

install(TARGETS helloworld DESTINATION ${CMAKE_SOURCE_DIR}/lib)