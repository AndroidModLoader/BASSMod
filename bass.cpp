#include "ibass.h"

extern void (*BASS_Apply3D)(void);
extern double (*BASS_ChannelBytes2Seconds)(uint32_t handle, uint64_t pos);
extern uint32_t (*BASS_ChannelFlags)(uint32_t handle, uint32_t flags, uint32_t mask);
extern bool (*BASS_ChannelFree)(uint32_t handle);
extern bool (*BASS_ChannelGet3DAttributes)(uint32_t handle, uint32_t* mode, float* min, float* max, uint32_t* iangle, uint32_t* oangle, float* outvol);
extern bool (*BASS_ChannelGet3DPosition)(uint32_t handle, BASS_3DVECTOR* pos, BASS_3DVECTOR* orient, BASS_3DVECTOR* vel);
extern bool (*BASS_ChannelGetAttribute)(uint32_t handle, uint32_t attrib, float* value);
extern uint32_t (*BASS_ChannelGetAttributeEx)(uint32_t handle, uint32_t attrib, void* value, uint32_t size);
extern uint32_t (*BASS_ChannelGetData)(uint32_t handle, void* buffer, uint32_t length);
extern uint32_t (*BASS_ChannelGetDevice)(uint32_t handle);
extern bool (*BASS_ChannelGetInfo)(uint32_t handle, BASS_CHANNELINFO* info);
extern uint64_t (*BASS_ChannelGetLength)(uint32_t handle, uint32_t mode);
extern uint32_t (*BASS_ChannelGetLevel)(uint32_t handle);
extern bool (*BASS_ChannelGetLevelEx)(uint32_t handle, float* levels, float length, uint32_t flags);
extern uint64_t (*BASS_ChannelGetPosition)(uint32_t handle, uint32_t mode);
extern const char* (*BASS_ChannelGetTags)(uint32_t handle, uint32_t tags);
extern uint32_t (*BASS_ChannelIsActive)(uint32_t handle);
extern bool (*BASS_ChannelIsSliding)(uint32_t handle, uint32_t attrib);
extern bool (*BASS_ChannelLock)(uint32_t handle, bool lock);
extern bool (*BASS_ChannelPause)(uint32_t handle);
extern bool (*BASS_ChannelPlay)(uint32_t handle, bool restart);
extern bool (*BASS_ChannelRemoveDSP)(uint32_t handle, uint32_t dsp);
extern bool (*BASS_ChannelRemoveFX)(uint32_t handle, uint32_t fx);
extern bool (*BASS_ChannelRemoveLink)(uint32_t handle, uint32_t chan);
extern bool (*BASS_ChannelRemoveSync)(uint32_t handle, uint32_t sync);
extern uint64_t (*BASS_ChannelSeconds2Bytes)(uint32_t handle, double pos);
extern bool (*BASS_ChannelSet3DAttributes)(uint32_t handle, int mode, float min, float max, int iangle, int oangle, float outvol);
extern bool (*BASS_ChannelSet3DPosition)(uint32_t handle, const BASS_3DVECTOR* pos, const BASS_3DVECTOR* orient, const BASS_3DVECTOR* vel);
extern bool (*BASS_ChannelSetAttribute)(uint32_t handle, uint32_t attrib, float value);
extern bool (*BASS_ChannelSetAttributeEx)(uint32_t handle, uint32_t attrib, void* value, uint32_t size);
extern uint32_t (*BASS_ChannelSetDSP)(uint32_t handle, DSPPROC* proc, void* user, int priority);
extern bool (*BASS_ChannelSetDevice)(uint32_t handle, uint32_t device);
extern uint32_t (*BASS_ChannelSetFX)(uint32_t handle, uint32_t type, int priority);
extern bool (*BASS_ChannelSetLink)(uint32_t handle, uint32_t chan);
extern bool (*BASS_ChannelSetPosition)(uint32_t handle, uint64_t pos, uint32_t mode);
extern uint32_t (*BASS_ChannelSetSync)(uint32_t handle, uint32_t type, uint64_t param, SYNCPROC* proc, void* user);
extern bool (*BASS_ChannelSlideAttribute)(uint32_t handle, uint32_t attrib, float value, uint32_t time);
extern bool (*BASS_ChannelStop)(uint32_t handle);
extern bool (*BASS_ChannelUpdate)(uint32_t handle, uint32_t length);
extern int (*BASS_ErrorGetCode)(void);
extern bool (*BASS_FXGetParameters)(uint32_t handle, void *params);
extern bool (*BASS_FXReset)(uint32_t handle);
extern bool (*BASS_FXSetParameters)(uint32_t handle, const void *params);
extern bool (*BASS_FXSetPriority)(uint32_t handle, int priority);
extern bool (*BASS_Free)(void);
extern bool (*BASS_Get3DFactors)(float *distf, float *rollf, float *doppf);
extern bool (*BASS_Get3DPosition)(BASS_3DVECTOR *pos, BASS_3DVECTOR *vel, BASS_3DVECTOR *front, BASS_3DVECTOR *top);
extern float (*BASS_GetCPU)(void);
extern uint32_t (*BASS_GetConfig)(uint32_t option);
extern const void* (*BASS_GetConfigPtr)(uint32_t option);
extern uint32_t (*BASS_GetDevice)(void);
extern bool (*BASS_GetDeviceInfo)(uint32_t device, BASS_DEVICEINFO *info);
extern bool (*BASS_GetInfo)(BASS_INFO *info);
extern uint32_t (*BASS_GetVersion)(void);
extern float (*BASS_GetVolume)(void);
extern bool (*BASS_Init)(int device, uint32_t freq, uint32_t flags);
extern uint32_t (*BASS_IsStarted)(void);
extern bool (*BASS_MusicFree)(uint32_t handle);
extern uint32_t (*BASS_MusicLoad)(bool mem, const void* file, uint64_t offset, uint32_t length, uint32_t flags, uint32_t freq);
extern bool (*BASS_Pause)(void);
extern uint32_t (*BASS_SampleCreate)(uint32_t length, uint32_t freq, uint32_t chans, uint32_t max, uint32_t flags);
extern bool (*BASS_SampleFree)(uint32_t handle);
extern uint32_t (*BASS_SampleGetChannel)(uint32_t handle, uint32_t flags);
extern uint32_t (*BASS_SampleGetChannels)(uint32_t handle, uint32_t *channels);
extern bool (*BASS_SampleGetData)(uint32_t handle, void *buffer);
extern bool (*BASS_SampleGetInfo)(uint32_t handle, BASS_SAMPLE *info);
extern uint32_t (*BASS_SampleLoad)(bool mem, const void *file, uint64_t offset, uint32_t length, uint32_t max, uint32_t flags);
extern bool (*BASS_SampleSetData)(uint32_t handle, const void *buffer);
extern bool (*BASS_SampleSetInfo)(uint32_t handle, const BASS_SAMPLE *info);
extern bool (*BASS_SampleStop)(uint32_t handle);
extern bool (*BASS_Set3DFactors)(float distf, float rollf, float doppf);
extern bool (*BASS_Set3DPosition)(const BASS_3DVECTOR *pos, const BASS_3DVECTOR *vel, const BASS_3DVECTOR *front, const BASS_3DVECTOR *top);
extern bool (*BASS_SetConfig)(uint32_t option, uint32_t value);
extern bool (*BASS_SetConfigPtr)(uint32_t option, const void* value);
extern bool (*BASS_SetDevice)(uint32_t device);
extern bool (*BASS_SetVolume)(float volume);
extern bool (*BASS_Start)(void);
extern bool (*BASS_Stop)(void);
extern uint32_t (*BASS_StreamCreate)(uint32_t freq, uint32_t chans, uint32_t flags, STREAMPROC *proc, void *user);
extern uint32_t (*BASS_StreamCreateFile)(bool mem, const void *file, uint64_t offset, uint64_t length, uint32_t flags);
extern uint32_t (*BASS_StreamCreateURL)(const char* url, uint32_t offset, uint32_t flags, DOWNLOADPROC* proc);
extern bool (*BASS_StreamFree)(uint32_t handle);
extern uint64_t (*BASS_StreamGetFilePosition)(uint32_t handle, uint32_t mode);
extern uint32_t (*BASS_StreamPutData)(uint32_t handle, const void *buffer, uint32_t length);
extern uint32_t (*BASS_StreamPutFileData)(uint32_t handle, const void *buffer, uint32_t length);
extern bool (*BASS_Update)(uint32_t length);

class BASS : public IBASS
{
	void Apply3D(void) {  																																BASS_Apply3D(); }
	double ChannelBytes2Seconds(uint32_t handle, uint64_t pos) { return                                                                                 BASS_ChannelBytes2Seconds(handle, pos); }
	uint32_t ChannelFlags(uint32_t handle, uint32_t flags, uint32_t mask) { return                                                                      BASS_ChannelFlags(handle, flags, mask); }
	bool ChannelFree(uint32_t handle) { return                                                                                                          BASS_ChannelFree(handle); }
	bool ChannelGet3DAttributes(uint32_t handle, uint32_t* mode, float* min, float* max, uint32_t* iangle, uint32_t* oangle, float* outvol) { return    BASS_ChannelGet3DAttributes(handle, mode, min, max, iangle, oangle, outvol); }
	bool ChannelGet3DPosition(uint32_t handle, BASS_3DVECTOR* pos, BASS_3DVECTOR* orient, BASS_3DVECTOR* vel) { return                                  BASS_ChannelGet3DPosition(handle, pos, orient, vel); }
	bool ChannelGetAttribute(uint32_t handle, uint32_t attrib, float* value) { return                                                                   BASS_ChannelGetAttribute(handle, attrib, value); }
	uint32_t ChannelGetAttributeEx(uint32_t handle, uint32_t attrib, void* value, uint32_t size) { return                                               BASS_ChannelGetAttributeEx(handle, attrib,  value, size); }
	uint32_t ChannelGetData(uint32_t handle, void* buffer, uint32_t length) { return                                                                    BASS_ChannelGetData(handle,  buffer, length); }
	uint32_t ChannelGetDevice(uint32_t handle) { return                                                                                                 BASS_ChannelGetDevice(handle); }
	bool ChannelGetInfo(uint32_t handle, BASS_CHANNELINFO* info) { return                                                                               BASS_ChannelGetInfo(handle, info); }
	uint64_t ChannelGetLength(uint32_t handle, uint32_t mode) { return                                                                                  BASS_ChannelGetLength(handle, mode); }
	uint32_t ChannelGetLevel(uint32_t handle) { return                                                                                                  BASS_ChannelGetLevel(handle); }
	bool ChannelGetLevelEx(uint32_t handle, float* levels, float length, uint32_t flags) { return                                                       BASS_ChannelGetLevelEx(handle, levels, length, flags); }
	uint64_t ChannelGetPosition(uint32_t handle, uint32_t mode) { return                                                                                BASS_ChannelGetPosition(handle, mode); }
	const char* ChannelGetTags(uint32_t handle, uint32_t tags) { return                                                                                 BASS_ChannelGetTags(handle, tags); }
	uint32_t ChannelIsActive(uint32_t handle) { return                                                                                                  BASS_ChannelIsActive(handle); }
	bool ChannelIsSliding(uint32_t handle, uint32_t attrib) { return                                                                                    BASS_ChannelIsSliding(handle, attrib); }
	bool ChannelLock(uint32_t handle, bool lock) { return                                                                                               BASS_ChannelLock(handle, lock); }
	bool ChannelPause(uint32_t handle) { return                                                                                                         BASS_ChannelPause(handle); }
	bool ChannelPlay(uint32_t handle, bool restart) { return                                                                                            BASS_ChannelPlay(handle, restart); }
	bool ChannelRemoveDSP(uint32_t handle, uint32_t dsp) { return                                                                                       BASS_ChannelRemoveDSP(handle, dsp); }
	bool ChannelRemoveFX(uint32_t handle, uint32_t fx) { return                                                                                         BASS_ChannelRemoveFX(handle, fx); }
	bool ChannelRemoveLink(uint32_t handle, uint32_t chan) { return                                                                                     BASS_ChannelRemoveLink(handle, chan); }
	bool ChannelRemoveSync(uint32_t handle, uint32_t sync) { return                                                                                     BASS_ChannelRemoveSync(handle, sync); }
	uint64_t ChannelSeconds2Bytes(uint32_t handle, double pos) { return                                                                                 BASS_ChannelSeconds2Bytes(handle, pos); }
	bool ChannelSet3DAttributes(uint32_t handle, int mode, float min, float max, int iangle, int oangle, float outvol) { return                         BASS_ChannelSet3DAttributes(handle, mode, min, max, iangle, oangle, outvol); }
	bool ChannelSet3DPosition(uint32_t handle, const BASS_3DVECTOR* pos, const BASS_3DVECTOR* orient, const BASS_3DVECTOR* vel) { return                BASS_ChannelSet3DPosition(handle, pos, orient, vel); }
	bool ChannelSetAttribute(uint32_t handle, uint32_t attrib, float value) { return                                                                    BASS_ChannelSetAttribute(handle, attrib, value); }
	bool ChannelSetAttributeEx(uint32_t handle, uint32_t attrib, void* value, uint32_t size) { return                                                   BASS_ChannelSetAttributeEx(handle, attrib,  value, size); }
	uint32_t ChannelSetDSP(uint32_t handle, DSPPROC* proc, void* user, int priority) { return                                                           BASS_ChannelSetDSP(handle, proc,  user, priority); }
	bool ChannelSetDevice(uint32_t handle, uint32_t device) { return                                                                                    BASS_ChannelSetDevice(handle, device); }
	uint32_t ChannelSetFX(uint32_t handle, uint32_t type, int priority) { return                                                                        BASS_ChannelSetFX(handle, type, priority); }
	bool ChannelSetLink(uint32_t handle, uint32_t chan) { return                                                                                        BASS_ChannelSetLink(handle, chan); }
	bool ChannelSetPosition(uint32_t handle, uint64_t pos, uint32_t mode) { return                                                                      BASS_ChannelSetPosition(handle, pos, mode); }
	uint32_t ChannelSetSync(uint32_t handle, uint32_t type, uint64_t param, SYNCPROC* proc, void* user) { return                                        BASS_ChannelSetSync(handle, type, param, proc,  user); }
	bool ChannelSlideAttribute(uint32_t handle, uint32_t attrib, float value, uint32_t time) { return                                                   BASS_ChannelSlideAttribute(handle, attrib, value, time); }
	bool ChannelStop(uint32_t handle) { return                                                                                                          BASS_ChannelStop(handle); }
	bool ChannelUpdate(uint32_t handle, uint32_t length) { return                                                                                       BASS_ChannelUpdate(handle, length); }
	int ErrorGetCode(void) { return                                                                                                                     BASS_ErrorGetCode(); }
	bool FXGetParameters(uint32_t handle, void *params) { return                                                                                        BASS_FXGetParameters(handle, params); }
	bool FXReset(uint32_t handle) { return                                                                                                              BASS_FXReset(handle); }
	bool FXSetParameters(uint32_t handle, const void *params) { return                                                                                  BASS_FXSetParameters(handle, params); }
	bool FXSetPriority(uint32_t handle, int priority) { return                                                                                          BASS_FXSetPriority(handle, priority); }
	bool Free(void) { return                                                                                                                            BASS_Free(); }
	bool Get3DFactors(float *distf, float *rollf, float *doppf) { return                                                                                BASS_Get3DFactors(distf, rollf, doppf); }
	bool Get3DPosition(BASS_3DVECTOR *pos, BASS_3DVECTOR *vel, BASS_3DVECTOR *front, BASS_3DVECTOR *top) { return                                       BASS_Get3DPosition(pos, vel, front, top); }
	float GetCPU(void) { return                                                                                                                         BASS_GetCPU(); }
	uint32_t GetConfig(uint32_t option) { return                                                                                                        BASS_GetConfig(option); }
	const void* GetConfigPtr(uint32_t option) { return                                                                                                  BASS_GetConfigPtr(option); }
	uint32_t GetDevice(void) { return                                                                                                                   BASS_GetDevice(); }
	bool GetDeviceInfo(uint32_t device, BASS_DEVICEINFO *info) { return                                                                                 BASS_GetDeviceInfo(device, info); }
	bool GetInfo(BASS_INFO *info) { return                                                                                                              BASS_GetInfo(info); }
	uint32_t GetVersion(void) { return                                                                                                                  BASS_GetVersion(); }
	float GetVolume(void) { return                                                                                                                      BASS_GetVolume(); }
	bool Init(int device, uint32_t freq, uint32_t flags) { return                                                                                       BASS_Init(device, freq, flags); }
	uint32_t IsStarted(void) { return                                                                                                                   BASS_IsStarted(); }
	bool MusicFree(uint32_t handle) { return                                                                                                            BASS_MusicFree(handle); }
	uint32_t MusicLoad(bool mem, const void* file, uint64_t offset, uint32_t length, uint32_t flags, uint32_t freq) { return                            BASS_MusicLoad(mem, file, offset, length, flags, freq); }
	bool Pause(void) { return                                                                                                                           BASS_Pause(); }
	uint32_t SampleCreate(uint32_t length, uint32_t freq, uint32_t chans, uint32_t max, uint32_t flags) { return                                        BASS_SampleCreate(length, freq, chans, max, flags); }
	bool SampleFree(uint32_t handle) { return                                                                                                           BASS_SampleFree(handle); }
	uint32_t SampleGetChannel(uint32_t handle, uint32_t flags) { return                                                                                 BASS_SampleGetChannel(handle, flags); }
	uint32_t SampleGetChannels(uint32_t handle, uint32_t *channels) { return                                                                            BASS_SampleGetChannels(handle, channels); }
	bool SampleGetData(uint32_t handle, void *buffer) { return                                                                                          BASS_SampleGetData(handle,  buffer); }
	bool SampleGetInfo(uint32_t handle, BASS_SAMPLE *info) { return                                                                                     BASS_SampleGetInfo(handle, info); }
	uint32_t SampleLoad(bool mem, const void *file, uint64_t offset, uint32_t length, uint32_t max, uint32_t flags) { return                            BASS_SampleLoad(mem, file, offset, length, max, flags); }
	bool SampleSetData(uint32_t handle, const void *buffer) { return                                                                                    BASS_SampleSetData(handle, buffer); }
	bool SampleSetInfo(uint32_t handle, const BASS_SAMPLE *info) { return                                                                               BASS_SampleSetInfo(handle, info); }
	bool SampleStop(uint32_t handle) { return                                                                                                           BASS_SampleStop(handle); }
	bool Set3DFactors(float distf, float rollf, float doppf) { return                                                                                   BASS_Set3DFactors(distf, rollf, doppf); }
	bool Set3DPosition(const BASS_3DVECTOR *pos, const BASS_3DVECTOR *vel, const BASS_3DVECTOR *front, const BASS_3DVECTOR *top) { return               BASS_Set3DPosition(pos, vel, front, top); }
	bool SetConfig(uint32_t option, uint32_t value) { return                                                                                            BASS_SetConfig(option, value); }
	bool SetConfigPtr(uint32_t option, const void* value) { return                                                                                      BASS_SetConfigPtr(option,  value); }
	bool SetDevice(uint32_t device) { return                                                                                                            BASS_SetDevice(device); }
	bool SetVolume(float volume) { return                                                                                                               BASS_SetVolume(volume); }
	bool Start(void) { return                                                                                                                           BASS_Start(); }
	bool Stop(void) { return                                                                                                                            BASS_Stop(); }
	uint32_t StreamCreate(uint32_t freq, uint32_t chans, uint32_t flags, STREAMPROC *proc, void *user) { return                                         BASS_StreamCreate(freq, chans, flags, proc, user); }
	uint32_t StreamCreateFile(bool mem, const void *file, uint64_t offset, uint64_t length, uint32_t flags) { return                                    BASS_StreamCreateFile(mem,  file, offset, length, flags); }
	uint32_t StreamCreateURL(const char* url, uint32_t offset, uint32_t flags, DOWNLOADPROC* proc) { return                                             BASS_StreamCreateURL(url, offset, flags, proc); }
	bool StreamFree(uint32_t handle) { return                                                                                                           BASS_StreamFree(handle); }
	uint64_t StreamGetFilePosition(uint32_t handle, uint32_t mode) { return                                                                             BASS_StreamGetFilePosition(handle, mode); }
	uint32_t StreamPutData(uint32_t handle, const void *buffer, uint32_t length) { return                                                               BASS_StreamPutData(handle, buffer, length); }
	uint32_t StreamPutFileData(uint32_t handle, const void *buffer, uint32_t length) { return                                                           BASS_StreamPutFileData(handle, buffer, length); }
	bool Update(uint32_t length) { return                                                                                                               BASS_Update(length); }
};
static BASS bassLocal;
IBASS* bass = &bassLocal;