add_executable(main main.cpp)

add_subdirectory(treelist)

target_link_libraries(main
    PUBLIC
    treelist
)

target_include_directories(main PRIVATE treelist)

