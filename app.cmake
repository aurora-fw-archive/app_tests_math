message(STATUS "Loading tests-math module...")

if (NOT CONFIGURED_ONCE)
	set(APP_TESTS_MATH_SOURCE_DIR ${APP_TESTS_MATH_DIR}/src)
endif()

add_executable(aurorafw_app_tests_math ${APP_TESTS_MATH_SOURCE_DIR}/test_vector2d.cpp)

target_link_libraries(aurorafw_app_tests_math aurorafw-core aurorafw-cli aurorafw-math)

set_target_properties(aurorafw_app_tests_math PROPERTIES OUTPUT_NAME test_vector2d.out)
