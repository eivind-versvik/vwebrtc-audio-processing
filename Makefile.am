SUBDIRS = . modules

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = vwebrtc-audio-processing.pc

COMMON_CFLAGS += -DWEBRTC_APM_DEBUG_DUMP=0
COMMON_CXXFLAGS += -DWEBRTC_APM_DEBUG_DUMP=0

noinst_LTLIBRARIES = libvwebrtc.la

nobase_vwebrtcinclude_HEADERS = rtc_base/arraysize.h \
					rtc_base/checks.h \
					rtc_base/constructor_magic.h \
					absl/types/optional.h \
					api/audio/echo_canceller3_config.h \
					api/audio/echo_control.h \
					api/scoped_refptr.h \
					api/array_view.h \
					absl/meta/type_traits.h \
					absl/base/config.h \
					modules/audio_processing/include/audio_generator.h \
					modules/audio_processing/include/audio_processing_statistics.h \
					modules/audio_processing/include/audio_processing.h \
					modules/audio_processing/include/config.h \
					modules/audio_processing/include/audio_frame_view.h \
					rtc_base/deprecation.h \
					rtc_base/ref_count.h \
					rtc_base/system/rtc_export.h \
					api/audio/audio_frame.h \
					api/audio/channel_layout.h \
					absl/base/policy_checks.h \
					absl/strings/string_view.h \
					rtc_base/numerics/safe_compare.h \
					rtc_base/type_traits.h \
					rtc_base/system/inline.h

vwebrtcincludedir = $(includedir)/vwebrtc

libvwebrtc_la_SOURCES = api/audio/echo_canceller3_factory.cc \
		api/audio/echo_canceller3_config.cc \
		api/audio/audio_frame.cc \
		api/audio/channel_layout.cc \
		rtc_base/critical_section.cc \
		rtc_base/race_checker.cc \
		rtc_base/platform_thread_types.cc \
		rtc_base/checks.cc \
		rtc_base/logging.cc \
		rtc_base/time_utils.cc \
		rtc_base/memory/aligned_malloc.cc \
		system_wrappers/source/cpu_features.cc \
		system_wrappers/source/field_trial.cc \
		system_wrappers/source/metrics.cc \
		third_party/rnnoise/src/rnn_vad_weights.cc \
		common_audio/signal_processing/splitting_filter.c \
		common_audio/resampler/push_sinc_resampler.cc \
		common_audio/vad/webrtc_vad.c \
		common_audio/resampler/sinc_resampler.cc \
		common_audio/resampler/sinc_resampler_sse.cc \
		common_audio/vad/vad_core.c \
		common_audio/vad/vad_sp.c \
		common_audio/vad/vad_filterbank.c \
		common_audio/signal_processing/resample_48khz.c \
		common_audio/signal_processing/energy.c \
		common_audio/signal_processing/copy_set_operations.c \
		common_audio/signal_processing/resample_by_2_internal.c \
		common_audio/vad/vad_gmm.c \
		common_audio/signal_processing/resample_fractional.c \
		common_audio/sparse_fir_filter.cc \
		common_audio/signal_processing/resample_by_2.c \
		common_audio/audio_util.cc \
		common_audio/signal_processing/dot_product_with_scale.cc \
		common_audio/signal_processing/real_fft.c \
		common_audio/signal_processing/complex_fft.c \
		common_audio/third_party/fft4g/fft4g.c \
		common_audio/signal_processing/division_operations.c \
		common_audio/ring_buffer.c \
		common_audio/signal_processing/randomization_functions.c \
		common_audio/audio_converter.cc \
		common_audio/signal_processing/get_scaling_square.c \
		common_audio/signal_processing/min_max_operations.c \
		common_audio/fir_filter_factory.cc \
		common_audio/fir_filter_sse.cc \
		common_audio/signal_processing/complex_bit_reverse.c

TEST =  common_audio/resampler/push_resampler.cc


libvwebrtc_la_CXXFLAGS = $(AM_CXXFLAGS) $(COMMON_CXXFLAGS)

EXTRA_DIST = NEWS \
	     README.md \
	     UPDATING.md
