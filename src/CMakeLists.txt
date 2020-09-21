# ##############################################################################
# The minimum version is CMake 2.8.3


# ##############################################################################
# source file
file(GLOB_RECURSE DEMO_HEADERS "${CMAKE_SOURCE_DIR}/include/*.h*")
file(GLOB_RECURSE DEMO_CXX "${CMAKE_CURRENT_SOURCE_DIR}/*.c*")

SOURCE_GROUP_BY_DIR(DEMO_HEADERS "${CMAKE_SOURCE_DIR}/include")
SOURCE_GROUP_BY_DIR(DEMO_CXX ${CMAKE_CURRENT_SOURCE_DIR})

set(SOURCE_FILES
    ${DEMO_HEADERS}
    ${DEMO_CXX})

set(EXE AlgorithmExercise)
add_executable(${EXE} ${SOURCE_FILES})

mtrobot_target_link_libraries(${EXE} ${GLOG_LIBS})


# ##############################################################################
# install configuration
install(TARGETS ${EXE} DESTINATION ${OUTPUT_ROOT})