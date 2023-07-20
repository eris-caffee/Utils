cmake_minimum_required(VERSION 2.6)

#SET(CMAKE_VERBOSE_MAKEFILE ON)

PROJECT(mygame)

################################################################################

set(CMAKE_MODULE_PATH ${mygame_SOURCE_DIR}/cmake/modules ${CMAKE_MODULE_PATH})

# The macro below forces the build directory to be different from source 
# directory.  The macro is by Bruno Abinader.
include(MacroOutOfSourceBuild)
macro_ensure_out_of_source_build("${PROJECT_NAME} requires an out of source build. Please, see README.")


################################################################################
# Set up the basic build environment                                 

if (CMAKE_BUILD_TYPE STREQUAL "")
  # CMake defaults to leaving CMAKE_BUILD_TYPE empty. This screws up
  # differentiation between debug and release builds.               
  set(CMAKE_BUILD_TYPE "RelWithDebInfo" CACHE STRING "Choose the type of build, options are: None (CMAKE_CXX_FLAGS or CMAKE_C_FLAGS used) Debug Release RelWithDebInfo MinSizeRel." FORCE)
endif ()


                                                                
################################################################################
# The core project files 

set(SRCS_utils
  src/utils.cpp
  include/utils.h
)

INCLUDE_DIRECTORIES(
  ${PROJECT_SOURCE_DIR}/include
)

# Build both static and shared libraries

ADD_LIBRARY(utils SHARED
  ${SRCS_utils}
)
SET_TARGET_PROPERTIES(utils PROPERTIES OUTPUT_NAME "utils")
SET_TARGET_PROPERTIES(utils PROPERTIES PREFIX "lib")
SET_TARGET_PROPERTIES(utils PROPERTIES CLEAN_DIRECT_OUTPUT 1)

ADD_LIBRARY(utils-static STATIC
  ${SRCS_utils}
)
SET_TARGET_PROPERTIES(utils-static PROPERTIES OUTPUT_NAME "utils")
SET_TARGET_PROPERTIES(utils-static PROPERTIES PREFIX "lib")
SET_TARGET_PROPERTIES(utils-static PROPERTIES CLEAN_DIRECT_OUTPUT 1)



# Build a test application.

ADD_EXECUTABLE(test
  src/test.cpp
)

TARGET_LINK_LIBRARIES(test
  utils
)



################################################################################

OPTION(Option_OGRE_Dev "Build with OGRE/OIS application." OFF)

IF (Option_OGRE_Dev)
  set(CMAKE_MODULE_PATH                                                
    /usr/local/lib/OGRE/cmake
    ${CMAKE_MODULE_PATH}                                   
    )                                                                    

  FIND_PACKAGE(OGRE)
  FIND_PACKAGE(OIS)
  INCLUDE_DIRECTORIES(
    ${INCLUDE_DIRECTORIES}
    ${OGRE_INCLUDE_DIRS}
    ${OGRE_CEGUIRenderer_INCLUDE_DIRS}
    ${OIS_INCLUDE_DIRS}
    )
  
  TARGET_LINK_LIBRARIES(mygame
    ${TARGET_LINK_LIBRARIES}
    ${OGRE_LIBRARIES}
    ${OIS_LIBRARIES}
    ${TARGET_LINK_LIBRARIES}
    )
ENDIF (Option_OGRE_Dev)



################################################################################
#    ${OGRE_CEGUIRenderer_LIBRARIES}



################################################################################

OPTION(Option_OpenAL_Dev "Build an OpenAL Application." OFF)

IF (Option_OpenAL_Dev)
  FIND_PACKAGE(OpenAL)

  INCLUDE_DIRECTORIES(
    ${OpenAL_INCLUDE_DIR}
    ${INCLUDE_DIRECTORIES}
    )

  TARGET_LINK_LIBRARIES(mygame
    ${OpenAL_LIBRARIES}
    ${TARGET_LINK_LIBRARIES}
    )

ENDIF (Option_OpenAL_Dev)



################################################################################

OPTION(Option_OpenGL_Dev "Build an OpenGL Application." OFF)

IF (Option_OpenGL_Dev)

  FIND_PACKAGE(OpenGL)

  INCLUDE_DIRECTORIES(
    ${OpenGL_INCLUDE_DIR}
    ${INCLUDE_DIRECTORIES}
    )

  TARGET_LINK_LIBRARIES(mygame
    ${OpenGL_LIBRARIES}
    ${TARGET_LINK_LIBRARIES}
    )

ENDIF (Option_OpenGL_Dev)



################################################################################

OPTION(Option_SDL_Dev "Build an SDL application." OFF)

IF (Option_SDL_Dev)
  FIND_PACKAGE (SDL)
  FIND_PACKAGE (SDL_image)
  FIND_PACKAGE (SDL_mixer)
  FIND_PACKAGE (SDL_net)
  FIND_PACKAGE (SDL_sound)
  FIND_PACKAGE (SDL_ttf)
  
  INCLUDE_DIRECTORIES(
    ${SDL_INCLUDE_DIR}
    ${SDLIMAGE_INCLUDE_DIR}
    ${SDLMIXER_INCLUDE_DIR}
    ${SDLNET_INCLUDE_DIR}
    ${SDLSOUND_INCLUDE_DIR}
    ${SDLTTF_INCLUDE_DIR}
    ${INCLUDE_DIRECTORIES}
    )
  
  TARGET_LINK_LIBRARIES(mygame
    ${SDL_LIBRARY}
    ${SDLIMAGE_LIBRARY}
    ${SDLMIXER_LIBRARY}
    ${SDLNET_LIBRARY}
    ${SDLSOUND_LIBRARY}
    ${SDLTTF_LIBRARY}
    ${TARGET_LINK_LIBRARIES}
    )
  
ENDIF (Option_SDL_Dev)

################################################################################



