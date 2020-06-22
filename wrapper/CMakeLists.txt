cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_EXTENSIONS OFF)

project(go-tensorflow VERSION 0.0.1)

add_library(go-tensorflow SHARED 
    "eager/c_api.cpp"
    "c_api.cpp"
    "tf_datatype.cpp"
    "tf_status.cpp"
    "tf_tensor.cpp"
)

target_compile_options(go-tensorflow
    PRIVATE
        -w
)
