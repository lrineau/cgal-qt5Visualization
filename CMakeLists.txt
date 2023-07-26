cmake_minimum_required(VERSION 3.5)

project(tst1 VERSION 0.1 LANGUAGES CXX)


#打开全局moc
set(CMAKE_AUTOMOC ON)
#打开全局uic
set(CMAKE_AUTOUIC ON)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



set(TS_FILES tst1_zh_CN.ts)


add_executable(tst1
    mainwindow.ui
    mainwindow.h
    mainwindow.cpp
    main.cpp


)


find_package(CGAL REQUIRED COMPONENTS Qt5)
message(STATUS "Found CGAL v${CGAL_VERSION}. Include dirs: ${CGAL_INCLUDE_DIRS}")
target_link_libraries(tst1 PUBLIC CGAL::CGAL_Qt5)

find_package(Qt5 REQUIRED Widgets)
target_link_libraries(tst1 PUBLIC Qt5::Widgets)



