# cmake_cpp_template
A common CMake structure used for creating C/CXX libraries and performing unit tests on them.

## Build
A CMakeLists.txt file is located in the root of the repository which will build and install the libraries as well as building the unit tests.
```
mkdir build
cd build
cmake ..
cmake --build .
```

## Unit Testing
After building the repository with CMake you can run unit tests with ctest and the verbose argument. The unit tests are using the gtest library (GoogleTest) and you can see the gtest output via ctest.
```
cd build/test
ctest -V
```