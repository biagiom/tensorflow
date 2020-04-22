# Settings for arduino platform
ifeq ($(TARGET), arduino)
  $(eval $(call add_third_party_download,$(CMSIS_URL),$(CMSIS_MD5),cmsis,))
endif
