cmake_minimum_required(VERSION 2.8.3)
project(curve_fitting)
# SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_BUILD_TYPE "Release")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

find_package(Eigen3 REQUIRED)
find_package(OpenCV REQUIRED)
find_package(Pangolin REQUIRED)
find_package(Ceres REQUIRED)

include_directories(
include_directories(${EIGEN3_INCLUDE_DIRS})
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${Pangolin_INCLUDE_DIRS})
include_directories(${CERES_INCLUDE_DIRS})
)

add_executable(curve_fitting_g2o app/curve_fitting_g2o.cc)

add_executable(curve_fitting_ceres app/curve_fitting_ceres.cc)
target_link_libraries(curve_fitting_ceres 
${OpenCV_LIBS}
${Pangolin_LIBRARIES}
${CERES_LIBRARIES}
)



