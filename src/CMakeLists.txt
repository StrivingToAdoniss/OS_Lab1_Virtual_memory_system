# src/CMakeLists.txt
set(APP_SOURCES
    main.cpp
)

# Create a library from your application code
add_library(${projectName}_lib ${APP_SOURCES})

# Include directories for the library
target_include_directories(${projectName}_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)

# Create the main executable
add_executable(${projectName} main.cpp)

# Link the application library and raylib into the main executable
target_link_libraries(${projectName} PRIVATE ${projectName}_lib)
