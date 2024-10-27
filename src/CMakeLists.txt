add_executable(main main.cpp)

add_subdirectory(lists)

target_link_libraries(main
    treelist
)


target_include_directories(main PUBLIC
    "${PROJECT_BINARY_DIR}"
    treelist
)
