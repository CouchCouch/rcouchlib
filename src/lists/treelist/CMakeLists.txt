add_library(treenode treenode.cpp)

add_library(treelist treelist.cpp)

target_link_libraries(treelist
    treenode
)

target_include_directories(treelist PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)