cmake_minimum_required(VERSION 3.16)

project(tt VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

qt_add_executable(helloapp
  main.cpp mainwindow.cpp mainwindow.h mainwindow.ui
  choosedialog.cpp choosedialog.ui
  parentoption.cpp parentoption.h
  paragraphoption.cpp paragraphoption.h
  arrayoption.cpp arrayoption.h
  structoption.cpp structoption.h
  binstructoption.cpp binstructoption.h
  paragraphtextoption.cpp paragraphtextoption.h
)

target_link_libraries(helloapp PRIVATE Qt6::Widgets)

set_target_properties(helloapp PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)