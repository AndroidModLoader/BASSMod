#include <mod/amlmod.h>
#include <mod/logger.h>

#include <fstream>
#include <stdint.h>
#include <dlfcn.h>
#include <thread>
#include <ibass.h>

MYMOD(net.rusjj.basslib, BASS Sound Library, 1.0, RusJJ)
BEGIN_DEPLIST()
    ADD_DEPENDENCY_VER(net.rusjj.aml, 1.0.0.4)
END_DEPLIST()

std::string loadFrom;
std::string loadSSLFrom;
uintptr_t pGTASA;
extern IBASS* bass;

extern unsigned char bassData[259924];
extern unsigned char bass_sslData[1294584];

#include "bass_vars.h"

extern "C" void OnModPreLoad()
{
    logger->SetTag("BASS Mod");
    pGTASA = aml->GetLib("libGTASA.so");

    loadFrom = aml->GetDataPath();
    loadSSLFrom = loadFrom + "/bass_ssl.so";
    loadFrom += "/bass_mod.so";

    std::ofstream fs(loadFrom.data(), std::ios::out | std::ios::binary);
	fs.write((const char*)bassData, sizeof(bassData));
	fs.close();
    void* pBASSHandle = dlopen(loadFrom.data(), RTLD_NOW);
    if(pBASSHandle == nullptr)
    {
        logger->Error("Failed to load BASS library!");
        return;
    }
    std::ofstream fs_ssl(loadSSLFrom.data(), std::ios::out | std::ios::binary);
	fs_ssl.write((const char*)bass_sslData, sizeof(bass_sslData));
	fs_ssl.close();

        #include "bass_things.h"
    
    logger->Info("Trying to initialize BASS...");
	BASS_SetConfigPtr(BASS_CONFIG_NET_AGENT, "BASS/AML_Mod/1.0.0.0");
    BASS_SetConfigPtr(BASS_CONFIG_LIBSSL, loadSSLFrom.data());
	BASS_SetConfig(BASS_CONFIG_NET_PLAYLIST, 1);
	BASS_SetConfig(BASS_CONFIG_NET_TIMEOUT, 10000);
	if (!BASS_Init(-1, 44100, 0))
    {
        logger->Error("Failed to initialize BASS library! Error Code: %d", BASS_ErrorGetCode());
        return;
    }
    RegisterInterface("BASS", bass);
    logger->Info("BASS initialized!");
}