add_executable(defaultBuild main.cpp)

target_link_directories(defaultBuild PUBLIC
  ${PROJECT_SOURCE_DIR}/src
  )


target_compile_options(
  defaultBuild BEFORE
  PRIVATE
  "$<$<CONFIG:Release>:-ofast>"

  "$<$<CONFIG:Debug>:-ggdb>"

  "$<$<CONFIG:test>:-ggdb>"

  "$<$<CONFIG:bench>:-ofast>"
  )
