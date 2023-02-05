cmake_minimum_required(VERSION 3.22) # version can be different

project(Rearrange_binary_string) #name of your project
add_definitions(-D_GLIBCXX_USE_CXX11_ABI=0) #for g++ 5.1.0

include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(Test 
    Test.cpp
    Solution.h
    Solution.cpp)
target_link_libraries(Test gtest_main)
add_test(NAME Test COMMAND Test)

