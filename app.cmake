message(STATUS "Loading tests-math module...")

if (NOT CONFIGURED_ONCE)
	set(APP_TESTS_MATH_SOURCE_DIR ${APP_TESTS_MATH_DIR}/src)
endif()

#comment TODO - Replace test_string with upcoming test file
#comment add_executable(aurorafw_app_tests_string ${APP_TESTS_MATH_SOURCE_DIR}/test_string.cpp)

#comment set_target_properties(aurorafw_app_tests_string PROPERTIES OUTPUT_NAME test_string.out)
