cmake_minimum_required(VERSION 3.10..4.0)
project(rplidar_test)

set(CMAKE_CXX_STANDARD 20)
# Source files

# Include the SDK headers
include_directories("${CMAKE_SOURCE_DIR}/rplidar_sdk/sdk/include")
# Add executable
add_executable(rplidar_test main.cpp)

# Link the static library and pthread
target_link_libraries(rplidar_test
        PRIVATE
        "${CMAKE_SOURCE_DIR}/rplidar_sdk/output/Linux/Release/libsl_lidar_sdk.a"
        pthread
)