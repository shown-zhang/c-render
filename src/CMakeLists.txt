CMAKE_MINIMUM_REQUIRED(VERSION 3.29)

AUX_SOURCE_DIRECTORY(. SRC_LIST)

set(SDL2 /Library/Frameworks/SDL2.framework)
set(SDL2_image /Library/Frameworks/SDL2_image.framework)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)


set(FQ_MATRIX ${PROJECT_SOURCE_DIR}/lib/libfq_matrix.a)
link_libraries(${FQ_MATRIX})


SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

ADD_EXECUTABLE(C_Render ${SRC_LIST})

target_include_directories(
  C_Render PRIVATE
  ${SDL2}/Versions/A/Headers
  ${SDL2_image}/Versions/A/Headers
)

TARGET_LINK_LIBRARIES(C_Render  ${FQ_MATRIX})

TARGET_LINK_LIBRARIES(
  C_Render
  ${SDL2}/Versions/A/SDL2
  ${SDL2_image}/Versions/A/SDL2_image
)
