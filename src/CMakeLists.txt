add_executable(main main.cpp)

add_subdirectory(treelist)

target_link_libraries(main treelist)