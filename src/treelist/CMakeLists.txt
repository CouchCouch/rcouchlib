add_library(treenode STATIC treenode.cpp treenode.h)

add_library(treelist STATIC treelist.cpp treelist.h)

target_link_libraries(treelist treenode)