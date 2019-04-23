cmake_minimum_required(VERSION 3.2)

if(DEFINED ENV{TRAVIS_BUILD_NUMBER})
    message(STATUS "TRAVIS_BUILD_NUMBER environment variable is defined")
    project(homework VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})
else()
    message(STATUS "TRAVIS_BUILD_NUMBER environment variable is not defined, set version to 0.0.1")
    project(homework VERSION 0.0.1)
endif()


#find_package(Boost COMPONENTS unit_test_framework REQUIRED)



################################
# GTest
################################
ADD_SUBDIRECTORY (gtest-1.6.0)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

################################
# Unit Tests
################################
# Add test cpp file
add_executable( runUnitTests testgtest.cpp )
# Link test executable against gtest & gtest_main
target_link_libraries(runUnitTests gtest gtest_main)
add_test( runUnitTests runUnitTests )



add_executable(homework_cli 
    main.cpp)

add_executable(test_homework 
    test_homework.cpp)

set_target_properties(
    homework_cli 
    test_homework 
PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
    COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
)

set_target_properties(
    test_homework 
PROPERTIES
    COMPILE_DEFINITIONS BOOST_TEST_DYN_LINK
    INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR}
)

target_link_libraries(homework_cli
    homework
)

target_link_libraries(test_homework
    ${Boost_LIBRARIES}
    homework
)


#Cpack
install(TARGETS homework_cli RUNTIME DESTINATION bin)
set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
set(CPACK_PACKAGE_CONTACT vsuvorov1996@gmail.com)
include(CPack)

enable_testing()

add_test(test_homework test_homework)
