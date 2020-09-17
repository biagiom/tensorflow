FULLY_CONNECTED_CMSIS_TEST_SRCS := \
tensorflow/lite/micro/examples/fully_connected_cmsis_test/fully_connected_cmsis_test.cc

FULLY_CONNECTED_CMSIS_TEST_HDRS := \
tensorflow/lite/micro/kernels/kernel_runner.h \
tensorflow/lite/c/common.h \
tensorflow/lite/micro/micro_utils.h \
tensorflow/lite/micro/micro_op_resolver.h \
tensorflow/lite/micro/test_helpers.h \
tensorflow/lite/micro/kernels/micro_ops.h \
tensorflow/lite/micro/testing/micro_test.h

# Tests loading and running the fullt connected test.
$(eval $(call microlite_test,fully_connected_cmsis_test,\
$(FULLY_CONNECTED_CMSIS_TEST_SRCS),$(FULLY_CONNECTED_CMSIS_TEST_HDRS)))
