cmake_minimum_required(VERSION 3.5)

project(Laba4 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Boost REQUIRED COMPONENTS serialization system filesystem)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_definitions(-DBOOST_ALL_NO_LIB)
endif()

set(PROJECT_SOURCES
        main.cpp
        smirnovmain.cpp
        smirnovmain.h
        smirnovmain.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Laba4
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}

        human.h human.cpp
        student.h student.cpp

        pch.cpp
        pch.h
        mywidget3.h mywidget3.cpp
        addmemberdialog.h addmemberdialog.cpp addmemberdialog.ui
        contentwidget.h contentwidget.cpp
        group.h group.cpp
        editingdialog.h editingdialog.cpp editingdialog.ui







    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Laba4 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Laba4 SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Laba4
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Laba4 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets ${Boost_LIBRARIES})

target_include_directories(Laba4 PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
target_include_directories(Laba4 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})


# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Laba4)
endif()
set_target_properties(Laba4 PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Laba4
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Laba4)
endif()
