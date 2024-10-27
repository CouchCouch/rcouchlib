add_library(treelist "")

target_sources(treelist
    PRIVATE
        treelist.cpp
        treenode.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/treelist.h
        ${CMAKE_CURRENT_LIST_DIR}/treenode.h
)

target_include_directories(treelist
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)