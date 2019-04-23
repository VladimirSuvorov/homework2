cmake_minimum_required(VERSION 3.8)

#Project config
set(PROJECT_NAME "ip_filter")
if(DEFINED ENV{TRAVIS_BUILD_NUMBER})
  project(${PROJECT_NAME} VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})
else()
  project(${PROJECT_NAME} VERSION 0.0.1)
endif()



#Packages
find_package(GTest REQUIRED)
include_directories(
    ../include
    ${GTEST_INCLUDE_DIRS}
)

#Configure
#configure_file(version.h.in version.h)

#Targets
add_executable(ip_filter main.cpp)
#add_library(static_library lib.cpp)
add_executable(test_homework test_homework.cpp)



#Compilation setings
set_target_properties(ip_filter test_homework PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
    COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
)
set_target_properties(test_homework PROPERTIES
    INCLUDE_DIRECTORIES ${GTEST_INCLUDE_DIR}
)


#Linking
target_link_libraries(ip_filter)
target_link_libraries(test_homework 
    ${GTEST_LIBRARIES}
)


#CPack
install(TARGETS ip_filter RUNTIME DESTINATION bin)
set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
set(CPACK_PACKAGE_CONTACT vsuvorov1996@gmail.com)
include(CPack)


#Testing
enable_testing()
add_test(test_homework test_homework)
