project(GS-tier1)

# Build a list of headers
file(GLOB PROJECT_HEADERS
	${CMAKE_CURRENT_SOURCE_DIR}/*.h
	${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
)

# Build a list of sources
file(GLOB PROJECT_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

if(PROJECT_SOURCES)
	# Build as static library
	add_library(${PROJECT_NAME} STATIC ${PROJECT_HEADERS} ${PROJECT_SOURCES})
	
	# Set properties
	set_target_properties(${PROJECT_NAME} PROPERTIES
		OUTPUT_NAME "tier1"
	)
endif()