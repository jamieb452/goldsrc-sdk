project(GoldSrc-tier1)

# Add include directories
include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/../public/tier0
	${CMAKE_CURRENT_SOURCE_DIR}/../public/tier1
)

# Build a list of sources
file(GLOB PROJECT_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

if(PROJECT_SOURCES)
	# Build as static library
	add_library(${PROJECT_NAME} STATIC ${PROJECT_SOURCES})
	
	# Set properties
	set_target_properties(${PROJECT_NAME} PROPERTIES
		OUTPUT_NAME "tier1"
	)
endif()