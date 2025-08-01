/**
 * @file
 *
 * @author OmniBlade
 *
 * @brief Stub library containing subset of functions from mss32.dll as used by the W3D engine.
 *
 * @copyright This is free software: you can redistribute it and/or
 *            modify it under the terms of the GNU General Public License
 *            as published by the Free Software Foundation, either version
 *            3 of the License, or (at your option) any later version.
 *            A full copy of the GNU General Public License can be found in
 *            LICENSE
 */
#pragma once

 // The following ifdef block is the standard way of creating macros which make exporting 
 // from a DLL simpler. All files within this DLL are compiled with the MILES_EXPORTS
 // symbol defined on the command line. this symbol should not be defined on any project
 // that uses this DLL. This way any other project whose source files include this file see 
 // MILES_API functions as being imported from a DLL, wheras this DLL sees symbols
 // defined with this macro as being exported.
#ifdef MILES_EXPORTS
#define MILES_API __declspec(dllexport)
#else
#define MILES_API __declspec(dllimport)
#endif

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#ifndef WIN32_EXTRA_LEAN
#define WIN32_EXTRA_LEAN
#endif

#ifndef STRICT
#define STRICT
#endif

#include <windows.h>
#include <mmsystem.h>


#ifdef __cplusplus
extern "C" {
#endif

    /*
     * These will have been structs in the real SDK headers, but are only accessed through pointers
     * so we don't care unless access to the internals is required.
     */
    typedef struct h3DPOBJECT
    {
        unsigned int junk;
    } h3DPOBJECT;
    typedef h3DPOBJECT *H3DPOBJECT;
    typedef H3DPOBJECT H3DSAMPLE;
    typedef struct _SAMPLE *HSAMPLE;
    typedef struct _STREAM *HSTREAM;
    typedef struct _DIG_DRIVER
    {
        char pad[168];
        int emulated_ds; // We only care about this particular member for our purposes.
    } DIG_DRIVER;
    typedef struct _DIG_DRIVER *HDIGDRIVER;
    typedef struct _AUDIO *HAUDIO;
    typedef struct _HMDIDRIVER *HMDIDRIVER;
    typedef struct _HDLSDEVICE *HDLSDEVICE;
    typedef unsigned long HPROVIDER;
    typedef int HTIMER;
    typedef unsigned int HPROENUM;
    typedef int M3DRESULT;

    typedef void *AILLPDIRECTSOUND;
    typedef void *AILLPDIRECTSOUNDBUFFER;

    typedef struct _AILSOUNDINFO
    {
        int format;
        const void *data_ptr;
        unsigned int data_len;
        unsigned int rate;
        int bits;
        int channels;
        unsigned int samples;
        unsigned int block_size;
        const void *initial_ptr;
    } AILSOUNDINFO;

    typedef enum
    {
        DP_ASI_DECODER = 0, // Must be "ASI codec stream" provider
        DP_FILTER, // Must be "MSS pipeline filter" provider
        DP_MERGE, // Must be "MSS mixer" provider
        N_SAMPLE_STAGES, // Placeholder for end of list (= # of valid stages)
        SAMPLE_ALL_STAGES // Used to signify all pipeline stages, for shutdown
    } SAMPLESTAGE;

    #define AILCALLBACK __stdcall

    typedef unsigned long U32;
    typedef long S32;
    typedef float F32;

    #define AIL_set_3D_object_user_data AIL_set_3D_user_data
    #define AIL_3D_object_user_data AIL_3D_user_data
    #define AIL_3D_open_listener AIL_open_3D_listener

    /*
     * Various callback typedefs.
     */
    typedef unsigned long(__stdcall *AIL_file_open_callback)(const char *, unsigned long*);
    typedef void(__stdcall *AIL_file_close_callback)(unsigned long);
    typedef long(__stdcall *AIL_file_seek_callback)(unsigned long, long, unsigned long);
    typedef unsigned long(__stdcall *AIL_file_read_callback)(unsigned long, void *, unsigned long);
    typedef void(__stdcall *AIL_stream_callback)(HSTREAM);
    typedef void(__stdcall *AIL_3dsample_callback)(H3DPOBJECT);
    typedef void(__stdcall *AIL_sample_callback)(HSAMPLE);

    #define DIG_USE_WAVEOUT 15
    #define AIL_LOCK_PROTECTION 18
    #define WAVE_FORMAT_IMA_ADPCM 0x11
    #define ENVIRONMENT_GENERIC 0
    #define HPROENUM_FIRST 0
    #define AIL_NO_ERROR 0
    #define AIL_FILE_SEEK_BEGIN 0
    #define AIL_FILE_SEEK_CURRENT 1
    #define AIL_FILE_SEEK_END 2
    #define AIL_3D_2_SPEAKER 0
    #define AIL_3D_HEADPHONE 1
    #define AIL_3D_SURROUND 2
    #define AIL_3D_4_SPEAKER 3
    #define AIL_3D_51_SPEAKER 4
    #define AIL_3D_71_SPEAKER 5
    #define AIL_MSS_version(a, b)
    #define M3D_NOERR 0

    #ifndef YES
    #define YES 1
    #endif

    #ifndef NO
    #define NO  0
    #endif

    MILES_API long __stdcall AIL_3D_sample_volume(H3DSAMPLE sample);
    MILES_API void __stdcall AIL_set_3D_sample_volume(H3DSAMPLE sample, float volume);
    MILES_API void __stdcall AIL_end_3D_sample(H3DSAMPLE sample);
    MILES_API void __stdcall AIL_resume_3D_sample(H3DSAMPLE sample);
    MILES_API void __stdcall AIL_stop_3D_sample(H3DSAMPLE sample);
    MILES_API void __stdcall AIL_start_3D_sample(H3DSAMPLE sample);
    MILES_API unsigned int __stdcall AIL_3D_sample_loop_count(H3DSAMPLE sample);
    MILES_API void __stdcall AIL_set_3D_sample_offset(H3DSAMPLE sample, unsigned int offset);
    MILES_API int __stdcall AIL_3D_sample_length(H3DSAMPLE sample);
    MILES_API unsigned int __stdcall AIL_3D_sample_offset(H3DSAMPLE sample);
    MILES_API int __stdcall AIL_3D_sample_playback_rate(H3DSAMPLE sample);
    MILES_API void __stdcall AIL_set_3D_sample_playback_rate(H3DSAMPLE sample, int playback_rate);
    MILES_API int __stdcall AIL_set_3D_sample_file(H3DSAMPLE sample, const void* file_image);
    MILES_API HPROVIDER __stdcall AIL_set_sample_processor(HSAMPLE sample, SAMPLESTAGE pipeline_stage, HPROVIDER provider);
    MILES_API void __stdcall AIL_set_filter_sample_preference(HSAMPLE sample, const char* name, const void* val);
    MILES_API void __stdcall AIL_release_sample_handle(HSAMPLE sample);
    MILES_API void __stdcall AIL_close_3D_provider(HPROVIDER lib);
    MILES_API int __stdcall AIL_set_preference(unsigned int number, int value);
    MILES_API int __stdcall AIL_waveOutOpen(HDIGDRIVER* driver, LPHWAVEOUT* waveout, int id, LPWAVEFORMAT format);
    MILES_API void __stdcall AIL_waveOutClose(HDIGDRIVER driver);
    MILES_API void __stdcall AIL_set_3D_sample_loop_count(H3DSAMPLE sample, unsigned int count);
    MILES_API void __stdcall AIL_set_stream_playback_rate(HSTREAM stream, int rate);
    MILES_API int __stdcall AIL_stream_playback_rate(HSTREAM stream);
    MILES_API void __stdcall AIL_stream_ms_position(HSTREAM sample, S32* total_milliseconds, S32* current_milliseconds);
    MILES_API void __stdcall AIL_set_stream_ms_position(HSTREAM stream, int pos);
    MILES_API int __stdcall AIL_stream_loop_count(HSTREAM stream);
    MILES_API void __stdcall AIL_set_stream_loop_block(HSTREAM stream, int loop_start, int loop_end);
    MILES_API void __stdcall AIL_set_stream_loop_count(HSTREAM stream, int count);
    MILES_API int __stdcall AIL_stream_volume(HSTREAM stream);
    MILES_API void __stdcall AIL_set_stream_volume(HSTREAM stream, int volume);
    MILES_API int __stdcall AIL_stream_pan(HSTREAM stream);
    MILES_API void __stdcall AIL_set_stream_pan(HSTREAM stream, int pan);
    MILES_API void __stdcall AIL_close_stream(HSTREAM stream);
    MILES_API void __stdcall AIL_pause_stream(HSTREAM stream, int onoff);
    MILES_API AIL_stream_callback __stdcall AIL_register_stream_callback(HSTREAM stream, AIL_stream_callback callback);
    MILES_API AIL_3dsample_callback __stdcall AIL_register_3D_EOS_callback(H3DSAMPLE sample, AIL_3dsample_callback EOS);
    MILES_API AIL_sample_callback __stdcall AIL_register_EOS_callback(HSAMPLE sample, AIL_sample_callback EOS);
    MILES_API void __stdcall AIL_start_stream(HSTREAM stream);
    MILES_API HSTREAM __stdcall AIL_open_stream_by_sample(HDIGDRIVER driver, HSAMPLE sample, const char* file_name, int mem);
    MILES_API void __stdcall AIL_set_sample_playback_rate(HSAMPLE sample, int playback_rate);
    MILES_API int __stdcall AIL_sample_playback_rate(HSAMPLE sample);
    MILES_API void __stdcall AIL_sample_ms_position(HSAMPLE sample, long* total_ms, long* current_ms);
    MILES_API void __stdcall AIL_set_sample_ms_position(HSAMPLE sample, int pos);
    MILES_API int __stdcall AIL_sample_loop_count(HSAMPLE sample);
    MILES_API void __stdcall AIL_set_sample_loop_count(HSAMPLE sample, int count);
    MILES_API int __stdcall AIL_sample_volume(HSAMPLE sample);
    MILES_API void __stdcall AIL_set_sample_volume(HSAMPLE sample, int volume);
    MILES_API int __stdcall AIL_sample_pan(HSAMPLE sample);
    MILES_API void __stdcall AIL_set_sample_pan(HSAMPLE sample, int pan);
    MILES_API void __stdcall AIL_end_sample(HSAMPLE sample);
    MILES_API void __stdcall AIL_resume_sample(HSAMPLE sample);
    MILES_API void __stdcall AIL_stop_sample(HSAMPLE sample);
    MILES_API void __stdcall AIL_start_sample(HSAMPLE sample);
    MILES_API void __stdcall AIL_init_sample(HSAMPLE sample);
    MILES_API int __stdcall AIL_set_named_sample_file(
        HSAMPLE sample, const char* file_name, const void* file_image, int file_size, int block);
    MILES_API void __stdcall AIL_set_3D_sample_effects_level(H3DSAMPLE sample, float effect_level);
    MILES_API void __stdcall AIL_set_3D_sample_distances(H3DSAMPLE sample, float max_dist, float min_dist);
    MILES_API void __stdcall AIL_set_3D_velocity_vector(H3DSAMPLE sample, float x, float y, float z);
    MILES_API void __stdcall AIL_set_3D_position(H3DPOBJECT obj, float X, float Y, float Z);
    MILES_API void __stdcall AIL_set_3D_orientation(
        H3DPOBJECT obj, float X_face, float Y_face, float Z_face, float X_up, float Y_up, float Z_up);
    MILES_API int __stdcall AIL_WAV_info(const void* data, AILSOUNDINFO* info);
    MILES_API void __stdcall AIL_stop_timer(HTIMER timer);
    MILES_API void __stdcall AIL_release_timer_handle(HTIMER timer);
    MILES_API void __stdcall AIL_shutdown(void);
    MILES_API int __stdcall AIL_enumerate_filters(HPROENUM* next, HPROVIDER* dest, char** name);
    MILES_API void __stdcall AIL_set_file_callbacks(AIL_file_open_callback opencb, AIL_file_close_callback closecb,
        AIL_file_seek_callback seekcb, AIL_file_read_callback readcb);
    MILES_API void __stdcall AIL_release_3D_sample_handle(H3DSAMPLE sample);
    MILES_API H3DSAMPLE __stdcall AIL_allocate_3D_sample_handle(HPROVIDER lib);
    MILES_API void __stdcall AIL_set_3D_user_data(H3DPOBJECT obj, unsigned int index, int value);
    MILES_API void __stdcall AIL_unlock(void);
    MILES_API void __stdcall AIL_lock(void);
    MILES_API void __stdcall AIL_set_3D_speaker_type(HPROVIDER lib, int speaker_type);
    MILES_API void __stdcall AIL_close_3D_listener(H3DPOBJECT listener);
    MILES_API int __stdcall AIL_enumerate_3D_providers(HPROENUM* next, HPROVIDER* dest, char** name);
    MILES_API M3DRESULT __stdcall AIL_open_3D_provider(HPROVIDER lib);
    MILES_API char* __stdcall AIL_last_error(void);
    MILES_API H3DPOBJECT __stdcall AIL_open_3D_listener(HPROVIDER lib);
    MILES_API int __stdcall AIL_3D_user_data(H3DSAMPLE sample, unsigned int index);
    MILES_API int __stdcall AIL_sample_user_data(HSAMPLE sample, unsigned int index);
    MILES_API HSAMPLE __stdcall AIL_allocate_sample_handle(HDIGDRIVER dig);
    MILES_API void __stdcall AIL_set_sample_user_data(HSAMPLE sample, unsigned int index, int value);
    MILES_API int __stdcall AIL_decompress_ADPCM(const AILSOUNDINFO *info, void **outdata, unsigned long *outsize);
    MILES_API void __stdcall AIL_get_DirectSound_info(HSAMPLE sample, AILLPDIRECTSOUND *lplpDS, AILLPDIRECTSOUNDBUFFER *lplpDSB);
    MILES_API void __stdcall AIL_mem_free_lock(void *ptr);
    MILES_API HSTREAM __stdcall AIL_open_stream(HDIGDRIVER dig, const char *filename, int stream_mem);
    MILES_API int __stdcall AIL_startup(void);
    MILES_API void __stdcall AIL_quick_unload(HAUDIO audio);
    MILES_API HAUDIO __stdcall AIL_quick_load_and_play(const char *filename, unsigned int loop_count, int wait_request);
    MILES_API void __stdcall AIL_quick_set_volume(HAUDIO audio, float volume, float extravol);
    MILES_API int __stdcall AIL_quick_startup(
        int use_digital, int use_MIDI, unsigned int output_rate, int output_bits, int output_channels);
    MILES_API void __stdcall AIL_quick_handles(HDIGDRIVER *pdig, HMDIDRIVER *pmdi, HDLSDEVICE *pdls);
    MILES_API void __stdcall AIL_sample_volume_pan(HSAMPLE sample, float *volume, float *pan);
    MILES_API void __stdcall AIL_set_3D_sample_occlusion(H3DSAMPLE sample, float occlusion);
    MILES_API char *__stdcall AIL_set_redist_directory(const char *dir);
    MILES_API int __stdcall AIL_set_sample_file(HSAMPLE sample, const void *file_image, int block);
    MILES_API void __stdcall AIL_set_sample_volume_pan(HSAMPLE sample, float volume, float pan);
    MILES_API void __stdcall AIL_set_stream_volume_pan(HSTREAM stream, float volume, float pan);
    MILES_API void __stdcall AIL_stream_volume_pan(HSTREAM stream, float *volume, float *pan);
    MILES_API unsigned long __stdcall AIL_get_timer_highest_delay(void);

    #ifdef MILES_EXPORTS
        int MSS_auto_cleanup(void);
    #else
        static inline void MSS_cleanup(void)
        {
            AIL_shutdown();
        }
        static inline int MSS_auto_cleanup(void)
        {
            atexit(MSS_cleanup);
            return 0;
        }
        #define AIL_startup() (MSS_auto_cleanup(), AIL_startup())
    #endif

#ifdef __cplusplus
} // extern "C"
#endif
