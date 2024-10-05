cmake_minimum_required(VERSION 3.25.1)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)

project(Bayan VERSION 0.0.1)

set(RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(mapper mapper.cpp)
add_executable(reducer reducer.cpp)

set_target_properties(mapper PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${RUNTIME_OUTPUT_DIRECTORY})
set_target_properties(reducer PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${RUNTIME_OUTPUT_DIRECTORY})



add_executable(mapper_variance mapper_variance.cpp)
add_executable(reducer_variance reducer_variance.cpp)

set_target_properties(mapper_variance PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${RUNTIME_OUTPUT_DIRECTORY})
set_target_properties(reducer_variance PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${RUNTIME_OUTPUT_DIRECTORY})


#FIND_PACKAGE(Boost REQUIRED)

#TARGET_LINK_LIBRARIES(join_server ${Boost_LIBRARIES})

# install(FILES async.h DESTINATION bin)
#install(TARGETS join_server DESTINATION bin)


#set(CPACK_GENERATOR "DEB")
#set(CPACK_PACKAGE_NAME "join_server")
#set(CPACK_PACKAGE_VERSION "1.0.0")
#set(CPACK_PACKAGE_DESCRIPTION "join_server")
#set(CPACK_PACKAGE_CONTACT "my@my.my") 

#include(CPack)




