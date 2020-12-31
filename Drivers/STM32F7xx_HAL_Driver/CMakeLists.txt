cmake_minimum_required(VERSION 3.11-3.18)

set (project_name STM32F7XX_HAL_Driver)
PROJECT(${project_name} C)

list(APPEND SRC_FILES Src)
list(APPEND INC_FILES Inc)

add_library(${project_name} ${SRC_FILES})

target_include_directories(${project_name} 
    INTERFACE ${INC_FILES})

set_target_properties(${project_name} PROPERTIES LINKER_LANGUAGE C)