lib_LTLIBRARIES = libvwebrtc_audio_processing.la

libvwebrtc_audio_processing_la_SOURCES = aec3/adaptive_fir_filter.cc \
					aec3/adaptive_fir_filter.h \
					aec3/adaptive_fir_filter_erl.cc \
					aec3/adaptive_fir_filter_erl.h \
					aec3/aec3_common.cc \
					aec3/aec3_common.h \
					aec3/aec3_fft.cc \
					aec3/aec_state.cc \
					aec3/api_call_jitter_metrics.cc \
					aec3/block_buffer.cc \
					aec3/block_delay_buffer.cc \
					aec3/block_framer.cc \
					aec3/block_processor.cc \
					aec3/block_processor_metrics.cc \
					aec3/clockdrift_detector.cc \
					aec3/comfort_noise_generator.cc \
					aec3/decimator.cc \
					aec3/downsampled_render_buffer.cc \
					aec3/echo_audibility.cc \
					aec3/echo_canceller3.cc \
					aec3/echo_path_delay_estimator.cc \
					aec3/echo_path_variability.cc \
					aec3/echo_remover.cc \
					aec3/echo_remover_metrics.cc \
					aec3/erle_estimator.cc \
					aec3/erl_estimator.cc \
					aec3/fft_buffer.cc \
					aec3/filter_analyzer.cc \
					aec3/frame_blocker.cc \
					aec3/fullband_erle_estimator.cc \
					aec3/main_filter_update_gain.cc \
					utility/ooura_fft.cc \
					utility/ooura_fft_sse2.cc \
					utility/cascaded_biquad_filter.cc \
					aec3/matched_filter.cc \
					aec3/subband_erle_estimator.cc \
					aec3/render_delay_controller_metrics.cc \
					high_pass_filter.cc \
					aec3/render_signal_analyzer.cc \
					aec3/reverb_model.cc \
					aec3/suppression_filter.cc \
					aec3/suppression_gain.cc \
					aec3/stationarity_estimator.cc \
					aec3/render_delay_buffer.cc \
					aec3/spectrum_buffer.cc \
					aec3/subtractor_output.cc \
					aec3/subtractor.cc \
					aec3/render_buffer.cc \
					aec3/residual_echo_estimator.cc \
					aec3/matched_filter_lag_aggregator.cc \
					aec3/reverb_model_estimator.cc \
					aec3/moving_average.cc \
					aec3/shadow_filter_update_gain.cc \
					aec3/reverb_decay_estimator.cc \
					aec3/signal_dependent_erle_estimator.cc \
					aec3/reverb_frequency_response.cc \
					aec3/subtractor_output_analyzer.cc \
					aec3/render_delay_controller.cc \
					logging/apm_data_dumper.cc \
					audio_processing_impl.cc \
					audio_buffer.cc \
					echo_cancellation_impl.cc \
					residual_echo_detector.cc \
					splitting_filter.cc \
					echo_detector/moving_max.cc \
					aec/echo_cancellation.cc \
					aec/aec_resampler.cc \
					aec/aec_core.cc \
					utility/delay_estimator_wrapper.cc \
					echo_control_mobile_impl.cc \
					echo_detector/mean_variance_estimator.cc \
					echo_detector/circular_buffer.cc \
					utility/delay_estimator.cc \
					level_estimator.cc \
					noise_suppression.cc \
					voice_detection.cc \
					transient/transient_suppressor.cc \
					three_band_filter_bank.cc \
					include/audio_processing_statistics.cc \
					utility/block_mean_calculator.cc \
					aecm/aecm_core.cc \
					aecm/echo_control_mobile.cc \
					include/aec_dump.cc \
					echo_detector/normalized_covariance_estimator.cc \
					transient/transient_detector.cc \
					transient/wpd_tree.cc \
					transient/wpd_node.cc \
					rms_level.cc \
					transient/moving_moments.cc \
					include/audio_processing.cc \
					include/config.cc
					

TEST = 				agc2/adaptive_mode_level_estimator_agc.cc \
					agc2/adaptive_agc.cc \
					gain_control_impl.cc \
					gain_control_for_experimental_agc.cc \
					gain_controller2.cc \
					agc2/noise_level_estimator.cc \
					agc2/adaptive_digital_gain_applier.cc \
					agc2/vad_with_level.cc \
					agc2/rnn_vad/rnn.cc \
					agc2/adaptive_mode_level_estimator.cc \
					agc2/saturation_protector.cc \
					agc2/limiter.cc \
					agc2/fixed_digital_level_estimator.cc \
					agc2/gain_applier.cc \
					agc/agc_manager_direct.cc \
					agc/legacy/analog_agc.c \
					agc/legacy/digital_agc.c \
					agc2/rnn_vad/features_extraction.cc \
					agc2/signal_classifier.cc \
					agc2/rnn_vad/spectral_features.cc \
					utility/pffft_wrapper.cc


					
COMMON_CFLAGS += -DWEBRTC_APM_DEBUG_DUMP=0
COMMON_CXXFLAGS += -DWEBRTC_APM_DEBUG_DUMP=0
if NS_FIXED
COMMON_CFLAGS += -DWEBRTC_NS_FIXED=1
COMMON_CXXFLAGS += -DWEBRTC_NS_FIXED=1
libvwebrtc_audio_processing_la_SOURCES += \
					ns/include/noise_suppression_x.h \
					ns/noise_suppression_x.c \
					ns/nsx_defines.h \
					ns/nsx_core.c \
					ns/nsx_core.h \
					ns/nsx_core_c.c
if HAVE_NEON
libvwebrtc_audio_processing_la_SOURCES += \
					ns/nsx_core_neon.c
endif
else
COMMON_CFLAGS += -DWEBRTC_NS_FLOAT=1
COMMON_CXXFLAGS += -DWEBRTC_NS_FLOAT=1
libvwebrtc_audio_processing_la_SOURCES += \
					ns/include/noise_suppression.h \
					ns/noise_suppression.c \
					ns/defines.h \
					ns/ns_core.c \
					ns/ns_core.h \
					ns/windows_private.h
endif

COMMON_CFLAGS += -DWEBRTC_APM_DEBUG_DUMP=0
COMMON_CXXFLAGS += -DWEBRTC_APM_DEBUG_DUMP=0

#if HAVE_X86
#noinst_LTLIBRARIES = libvwebrtc_audio_processing_privatearch.la
#LIBWEBRTC_PRIVATEARCH=libvwebrtc_audio_processing_privatearch.la
libvwebrtc_audio_processing_la_SOURCES += \
					aec/aec_core_sse2.cc
libvwebrtc_audio_processing_la_CFLAGS = -msse2
libvwebrtc_audio_processing_la_CXXFLAGS = -msse2
#libvwebrtc_audio_processing_privatearch_la_LDFLAGS = $(AM_LDFLAGS)
#endif

if HAVE_NEON
libvwebrtc_audio_processing_la_SOURCES += \
					aec/aec_core_neon.c \
					aec/aec_rdft_neon.c \
					aecm/aecm_core_neon.c
endif

libvwebrtc_audio_processing_la_CFLAGS = $(AM_CFLAGS) $(COMMON_CFLAGS)
libvwebrtc_audio_processing_la_CXXFLAGS = $(AM_CXXFLAGS) $(COMMON_CXXFLAGS)

libvwebrtc_audio_processing_la_LIBADD = \
          $(top_builddir)/libvwebrtc.la 
#				       $(top_builddir)/webrtc/base/libbase.la \
#				       $(top_builddir)/webrtc/system_wrappers/libsystem_wrappers.la \
#				       $(top_builddir)/webrtc/common_audio/libcommon_audio.la \
#				       $(top_builddir)/webrtc/modules/audio_coding/libaudio_coding.la \
#				       $(LIBWEBRTC_PRIVATEARCH) \
#				       $(GNUSTL_LIBS)
libvwebrtc_audio_processing_la_LDFLAGS = $(AM_LDFLAGS) $(COMMON_LDFLAGS) \
					-no-undefined \
					-version-info $(VLIBWEBRTC_AUDIO_PROCESSING_VERSION_INFO)

# FIXME: The MIPS optimisations need to be hooked up once we have the
# autotools conditionals in place
EXTRA_DIST = BUILD.gn \
	     aec/aec_core_mips.c \
	     aec/aec_rdft_neon.c \
	     aecm/aecm_core_mips.c \
	     ns/nsx_core_mips.c
