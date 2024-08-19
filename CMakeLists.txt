CMAKE_MINIMUM_REQUIRED(VERSION 3.29)

PROJECT(C_RENDER C)


OPTION(TEST "open test options？" OFF)

if (TEST)
  ADD_SUBDIRECTORY(test render_test)
else()
  ADD_SUBDIRECTORY(src render)
endif()
