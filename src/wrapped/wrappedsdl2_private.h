#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh!
#endif

// _fini
// _init
GO(SDL_abs, iFi)
GO(SDL_acos, dFd)
GO(SDL_acosf, fFf)
GOM(SDL_AddEventWatch, vFEpp)
// SDL_AddHintCallback
GOM(SDL_AddTimer, pFEupp)
GO(SDL_AllocFormat, pFu)
GO(SDL_AllocPalette, pFi)
GO(SDL_AllocRW, pFv)    // no need to create a "my_" probably
GO(SDL_asin, dFd)
GO(SDL_asinf, fFf)
GO(SDL_atan, dFd)
GO(SDL_atan2, dFdd)
GO(SDL_atan2f, fFff)
GO(SDL_atanf, fFf)
GO(SDL_atof, dFp)
GO(SDL_atoi, iFp)
GO(SDL_AtomicAdd, iFpi)
GO(SDL_AtomicCAS, iFpii)
GO(SDL_AtomicCASPtr, iFppp)
GO(SDL_AtomicGet, iFp)
GO(SDL_AtomicGetPtr, pFp)
GO(SDL_AtomicLock, vFp)
GO(SDL_AtomicSet, iFpi)
GO(SDL_AtomicSetPtr, pFpp)
GO(SDL_AtomicTryLock, iFp)
GO(SDL_AtomicUnlock, vFp)
GO(SDL_AudioInit, iFp)
GO(SDL_AudioQuit, vFv)
GO(SDL_AudioStreamAvailable, iFp)
GO(SDL_AudioStreamClear, vFp)
GO(SDL_AudioStreamFlush, iFp)
GO(SDL_AudioStreamGet, iFppi)
GO(SDL_AudioStreamPut, iFppi)
GO(SDL_BuildAudioCVT, iFpuuiuui)
GO(SDL_CalculateGammaRamp, vFfp)
GO(SDL_calloc, pFuu)
GO(SDL_CaptureMouse, iFi)
GO(SDL_ceil, dFd)
GO(SDL_ceilf, fFf)
GO(SDL_ClearError, vFv)
GO(SDL_ClearHints, vFv)
GO(SDL_ClearQueuedAudio, vFu)
GO(SDL_CloseAudio, vFv)
GO(SDL_CloseAudioDevice, vFi)
GO(SDL_ComposeCustomBlendMode, iFiiiiii)
GO(SDL_CondBroadcast, iFp)
GO(SDL_CondSignal, iFp)
GO(SDL_CondWait, iFpp)
GO(SDL_CondWaitTimeout, iFppu)
GO(SDL_ConvertAudio, iFp)
GO(SDL_ConvertPixels, iFiiupiupi)
GO(SDL_ConvertSurface, pFppu)
GO(SDL_ConvertSurfaceFormat, pFpuu)
GO(SDL_copysign, dFdd)
GO(SDL_copysignf, fFff)
GO(SDL_cos, dFd)
GO(SDL_cosf, fFf)
GO(SDL_CreateColorCursor, pFpii)
GO(SDL_CreateCond, pFv)
GO(SDL_CreateCursor, pFppiiii)
GO(SDL_CreateMutex, pFv)
GO(SDL_CreateRenderer, pFpiu)
GO(SDL_CreateRGBSurface, pFuiiiuuuu)
GO(SDL_CreateRGBSurfaceFrom, pFpiiiiuuuu)
GO(SDL_CreateRGBSurfaceWithFormat, pFuiiiu)
GO(SDL_CreateRGBSurfaceWithFormatFrom, pFpiiiiu)
GO(SDL_CreateSemaphore, pFu)
GO(SDL_CreateShapedWindow, pFpuuuuu)
GO(SDL_CreateSoftwareRenderer, pFp)
GO(SDL_CreateSystemCursor, pFu)
GO(SDL_CreateTexture, pFpuiii)
GO(SDL_CreateTextureFromSurface, pFpp)
GOM(SDL_CreateThread, pFEppp)
// SDL_CreateThreadWithStackSize
GO(SDL_CreateWindow, pFpiiiiu)
GO(SDL_CreateWindowAndRenderer, iFiiupp)
GO(SDL_CreateWindowFrom, pFp)
GO(SDL_Delay, vFu)
GOM(SDL_DelEventWatch, vFEpp)
// SDL_DelHintCallback
GO(SDL_DequeueAudio, uFupu)
GO(SDL_DestroyCond, vFp)
GO(SDL_DestroyMutex, vFp)
GO(SDL_DestroyRenderer, vFp)
GO(SDL_DestroySemaphore, vFp)
GO(SDL_DestroyTexture, vFp)
GO(SDL_DestroyWindow, vFp)
GO(SDL_DetachThread, vFp)
GO(SDL_DisableScreenSaver, vFv)
GO(SDL_DuplicateSurface, pFp)
// SDL_DYNAPI_entry
GO(SDL_EnableScreenSaver, vFv)
GO(SDL_EnclosePoints, iFpipp)
GO(SDL_Error, iFi)
GO(SDL_EventState, CFui)
GO(SDL_exp, dFd)
GO(SDL_expf, fFf)
GO(SDL_fabs, dFd)
GO(SDL_fabsf, fFf)
GO(SDL_FillRect, iFppu)
GO(SDL_FillRects, iFppiu)
// SDL_FilterEvents
GO(SDL_floor, dFd)
GO(SDL_floorf,fFf)
GO(SDL_FlushEvent, vFu)
GO(SDL_FlushEvents, vFuu)
GO(SDL_fmod, dFdd)
GO(SDL_fmodf, fFff)
GO(SDL_free, vFp)
GO(SDL_FreeAudioStream, vFp)
GO(SDL_FreeCursor, vFp)
GO(SDL_FreeFormat, vFp)
GO(SDL_FreePalette, vFp)
GO(SDL_FreeRW, vFp)
GO(SDL_FreeSurface, vFp)
GO(SDL_FreeWAV, vFp)
GO(SDL_GameControllerAddMapping, iFp)
GOM(SDL_GameControllerAddMappingsFromRW, iFEpi)
GO(SDL_GameControllerClose, vFp)
GO(SDL_GameControllerEventState, iFi)
GO(SDL_GameControllerFromInstanceID, pFi)
GO(SDL_GameControllerGetAttached, iFp)
GO(SDL_GameControllerGetAxis, iFpi)
GO(SDL_GameControllerGetAxisFromString, uFp)
GO(SDL_GameControllerGetBindForAxis, HFpi)
GO(SDL_GameControllerGetBindForButton, HFpi)
GO(SDL_GameControllerGetButton, uFpi)
GO(SDL_GameControllerGetButtonFromString, uFp)
GO(SDL_GameControllerGetJoystick, pFp)
GO(SDL_GameControllerGetPlayerIndex, iFp)
GO(SDL_GameControllerGetProduct, WFp)
GO(SDL_GameControllerGetProductVersion, WFp)
GO(SDL_GameControllerGetSerial, pFp)
GO(SDL_GameControllerGetStringForAxis, pFp)
GO(SDL_GameControllerGetStringForButton, pFu)
GO(SDL_GameControllerGetType, iFp)
GO(SDL_GameControllerGetVendor, WFp)
GO(SDL_GameControllerMapping, pFp)
GO(SDL_GameControllerMappingForDeviceIndex, pFi)
GO(SDL_GameControllerMappingForGUID, pFpp)
GO(SDL_GameControllerMappingForIndex, pFi)
GO(SDL_GameControllerName, pFp)
GO(SDL_GameControllerNameForIndex, pFi)
GO(SDL_GameControllerNumMappings, iFv)
GO(SDL_GameControllerOpen, pFi)
GO(SDL_GameControllerRumble, iFpWWu)
GO(SDL_GameControllerRumbleTriggers, iFpWWu)
GO(SDL_GameControllerSetLED, iFpCCC)
GO(SDL_GameControllerSetPlayerIndex, vFpi)
GO(SDL_GameControllerSetSensorEnabled, iFpii)
GO(SDL_GameControllerTypeForIndex, iFi)
GO(SDL_GameControllerUpdate, vFv)
// SDL_GetAssertionHandler
GO(SDL_GetAssertionReport, pFv)
GO(SDL_GetAudioDeviceName, pFii)
GO(SDL_GetAudioDeviceStatus, iFi)
GO(SDL_GetAudioDriver, pFi)
GO(SDL_GetAudioStatus, iFv)
GOM(SDL_GetBasePath, pFEv)
GO(SDL_GetClipboardText, pFv)
GO(SDL_GetClipRect, vFpp)
GO(SDL_GetClosestDisplayMode, pFipp)
GO(SDL_GetColorKey, iFpp)
GO(SDL_GetCPUCacheLineSize, iFv)
GO(SDL_GetCPUCount, iFv)
GO(SDL_GetCurrentAudioDriver, pFv)
GO(SDL_GetCurrentDisplayMode, iFip)
GO(SDL_GetCurrentVideoDriver, pFv)
GO(SDL_GetCursor, pFv)
// SDL_GetDefaultAssertionHandler
GO(SDL_GetDefaultCursor, pFv)
GO(SDL_GetDesktopDisplayMode, iFip)
GO(SDL_GetDisplayBounds, iFip)
GO(SDL_GetDisplayDPI, iFippp)
GO(SDL_GetDisplayMode, iFiip)
GO(SDL_GetDisplayName, pFi)
GO(SDL_GetDisplayOrientation, iFi)
GO(SDL_GetDisplayUsableBounds, iFip)
GO(SDL_getenv, pFp)
GO(SDL_GetError, pFv)
GOM(SDL_GetEventFilter, iFEpp)
GO(SDL_GetGlobalMouseState, uFpp)
GO(SDL_GetGrabbedWindow, pFv)
GO(SDL_GetHint, pFp)
GO(SDL_GetHintBoolean, iFpi)
GO(SDL_GetJoystickGUIDInfo, vFppppp)   // the flat SDL_JoystickGUID stuct in 1st argument is same as 2 uint64
GO(SDL_GetKeyboardFocus, pFv)
GO(SDL_GetKeyboardState, pFp)
GO(SDL_GetKeyFromName, pFp)
GO(SDL_GetKeyFromScancode, uFu)
GO(SDL_GetKeyName, pFu)
GO(SDL_GetMemoryFunctions, iFpi)
GO(SDL_GetModState, pFv)
GO(SDL_GetMouseFocus, pFv)
GO(SDL_GetMouseState, uFpp)
GO(SDL_GetNumAllocations, iFv)
GO(SDL_GetNumAudioDevices, iFi)
GO(SDL_GetNumAudioDrivers, iFv)
GO(SDL_GetNumDisplayModes, iFi)
GO(SDL_GetNumRenderDrivers, iFv)
GO(SDL_GetNumTouchDevices, iFv)
GO(SDL_GetNumTouchFingers, iFu)
GO(SDL_GetNumVideoDisplays, iFv)
GO(SDL_GetNumVideoDrivers, iFv)
GO(SDL_GetPerformanceCounter, UFv)
GO(SDL_GetPerformanceFrequency, UFv)
GO(SDL_GetPixelFormatName, pFu)
GO(SDL_GetPlatform, pFv)
GO(SDL_GetPowerInfo, iFpp)
GO(SDL_GetPrefPath, pFpp)
GO(SDL_GetQueuedAudioSize, uFi)
GO(SDL_GetRelativeMouseMode, iFv)
GO(SDL_GetRelativeMouseState, uFpp)
GO(SDL_GetRenderDrawBlendMode, iFpp)
GO(SDL_GetRenderDrawColor, iFppppp)
GO(SDL_GetRenderDriverInfo, iFip)
GO(SDL_GetRenderer, pFp)
GO(SDL_GetRendererInfo, iFpp)
GO(SDL_GetRendererOutputSize, iFppp)
GO(SDL_GetRenderTarget, pFp)
GO(SDL_GetRevision, pFv)
GO(SDL_GetRevisionNumber, iFv)
GO(SDL_GetRGB, vFupppp)
GO(SDL_GetRGBA, vFuppppp)
GO(SDL_GetScancodeFromKey, uFu)
GO(SDL_GetScancodeFromName, iFp)
GO(SDL_GetScancodeName, pFu)
GO(SDL_GetShapedWindowMode, iFpp)
GO(SDL_GetSurfaceAlphaMod, iFpp)
GO(SDL_GetSurfaceBlendMode, iFpp)
GO(SDL_GetSurfaceColorMod, iFpppp)
GO(SDL_GetSystemRAM, iFv)
GO(SDL_GetTextureAlphaMod, iFpp)
GO(SDL_GetTextureBlendMode, iFpp)
GO(SDL_GetTextureColorMod, iFpppp)
GO(SDL_GetThreadID, LFp)
GO(SDL_GetThreadName, pFp)
GO(SDL_GetTicks, uFv)
GO(SDL_GetTouchDevice, uFi)
GO(SDL_GetTouchDeviceType, iFi)
GO(SDL_GetTouchFinger, pFui)
GO(SDL_GetVersion, vFp)
GO(SDL_GetVideoDriver, pFi)
GO(SDL_GetWindowBordersSize, iFppppp)
GO(SDL_GetWindowBrightness, fFp)
GO(SDL_GetWindowData, pFpp)
GO(SDL_GetWindowDisplayIndex, iFp)
GO(SDL_GetWindowDisplayMode, iFpp)
GO(SDL_GetWindowFlags, uFp)
GO(SDL_GetWindowFromID, pFu)
GO(SDL_GetWindowGammaRamp, iFpppp)
GO(SDL_GetWindowGrab, iFp)
GO(SDL_GetWindowID, uFp)
GO(SDL_GetWindowMaximumSize, vFppp)
GO(SDL_GetWindowMinimumSize, vFppp)
GO(SDL_GetWindowOpacity, iFpp)
GO(SDL_GetWindowPixelFormat, uFp)
GO(SDL_GetWindowPosition, vFppp)
GO(SDL_GetWindowSize, vFppp)
GO(SDL_GetWindowSurface, pFp)
GO(SDL_GetWindowTitle, pFp)
GO(SDL_GetWindowWMInfo, iFpp)
GO(SDL_GetYUVConversionMode, iFv)
GO(SDL_GetYUVConversionModeForResolution, iFii)
GO(SDL_GL_BindTexture, iFppp)
GO(SDL_GL_CreateContext, pFp)
GO(SDL_GL_DeleteContext, vFp)
GO(SDL_GL_ExtensionSupported, iFp)
GO(SDL_GL_GetAttribute, iFup)
GO(SDL_GL_GetCurrentContext, pFv)
GO(SDL_GL_GetCurrentWindow, pFv)
GO(SDL_GL_GetDrawableSize, vFppp)
GOM(SDL_GL_GetProcAddress, pFEp)
GO(SDL_GL_GetSwapInterval, iFv)
GO(SDL_GL_LoadLibrary, iFp)
GO(SDL_GL_MakeCurrent, iFpp)
GO(SDL_GL_ResetAttributes, vFv)
GO(SDL_GL_SetAttribute, iFui)
GO(SDL_GL_SetSwapInterval, iFi)
GO(SDL_GL_SwapWindow, vFp)
GO(SDL_GL_UnbindTexture, iFp)
GO(SDL_GL_UnloadLibrary, vFv)
GO(SDL_HapticClose, vFp)
GO(SDL_HapticDestroyEffect, vFpi)
GO(SDL_HapticEffectSupported, iFpp)
GO(SDL_HapticGetEffectStatus, iFpi)
GO(SDL_HapticIndex, iFp)
GO(SDL_HapticName, pFi)
GO(SDL_HapticNewEffect, iFpp)
GO(SDL_HapticNumAxes, iFp)
GO(SDL_HapticNumEffects, iFp)
GO(SDL_HapticNumEffectsPlaying, iFp)
GO(SDL_HapticOpen, pFi)
GO(SDL_HapticOpened, iFi)
GO(SDL_HapticOpenFromJoystick, pFp)
GO(SDL_HapticOpenFromMouse, pFv)
GO(SDL_HapticPause, iFp)
GO(SDL_HapticQuery, uFp)
GO(SDL_HapticRumbleInit, iFp)
GO(SDL_HapticRumblePlay, iFpfu)
GO(SDL_HapticRumbleStop, iFp)
GO(SDL_HapticRumbleSupported, iFp)
GO(SDL_HapticRunEffect, iFpiu)
GO(SDL_HapticSetAutocenter, iFpi)
GO(SDL_HapticSetGain, iFpi)
GO(SDL_HapticStopAll, iFp)
GO(SDL_HapticStopEffect, iFpi)
GO(SDL_HapticUnpause, iFp)
GO(SDL_HapticUpdateEffect, iFpip)
GOM(SDL_Has3DNow, iFv)
GOM(SDL_HasAltiVec, iFv)
GOM(SDL_HasAVX, iFv)
GOM(SDL_HasAVX2, iFv)
GOM(SDL_HasAVX512F, iFv)
GO(SDL_HasClipboardText, iFv)
GO(SDL_HasColorKey, iFv)
GO(SDL_HasEvent, iFv)
GO(SDL_HasEvents, iFv)
GO(SDL_HasIntersection, iFpp)
GOM(SDL_HasMMX, iFv)
GOM(SDL_HasNEON, iFv)
GOM(SDL_HasRDTSC, iFv)
GO(SDL_HasScreenKeyboardSupport, iFv)
GOM(SDL_HasSSE, iFv)
GOM(SDL_HasSSE2, iFv)
GOM(SDL_HasSSE3, iFv)
GOM(SDL_HasSSE41, iFv)
GOM(SDL_HasSSE42, iFv)
GO(SDL_HideWindow, vFp)
GO(SDL_iconv, LFppppp)
GO(SDL_iconv_close, iFp)
GO(SDL_iconv_open, pFpp)
GO(SDL_iconv_string, pFpppL)
GO(SDL_Init, iFu)
GO(SDL_InitSubSystem, iFu)
GO(SDL_IntersectRect, iFppp)
GO(SDL_IntersectRectAndLine, iFppppp)
GO(SDL_isdigit, iFi)
GO(SDL_IsGameController, iFi)
GO(SDL_IsScreenKeyboardShown, iFp)
GO(SDL_IsScreenSaverEnabled, iFv)
GO(SDL_IsShapedWindow, iFp)
GO(SDL_isspace, iFi)
GO(SDL_IsTablet, iFv)
GO(SDL_IsTextInputActive, iFv)
GO(SDL_itoa, pFipi)
GO(SDL_JoystickClose, vFp)
GO(SDL_JoystickCurrentPowerLevel, iFp)
GO(SDL_JoystickEventState, iFi)
GO(SDL_JoystickFromInstanceID, pFi)
GO(SDL_JoystickGetAttached, iFp)
GO(SDL_JoystickGetAxis, iFpi)
GO(SDL_JoystickGetAxisInitialState, iFpip)
GO(SDL_JoystickGetBall, iFpipp)
GO(SDL_JoystickGetButton, CFpi)
GO(SDL_JoystickGetDeviceGUID, HFi)  // return a struct that is "uint8_t data[16]"
GO(SDL_JoystickGetDeviceInstanceID, iFi)
GO(SDL_JoystickGetDevicePlayerIndex, iFi)
GO(SDL_JoystickGetDeviceProduct, WFi)
GO(SDL_JoystickGetDeviceProductVersion, WFi)
GO(SDL_JoystickGetDeviceType, iFi)
GO(SDL_JoystickGetDeviceVendor, WFi)
GO(SDL_JoystickGetGUID, HFp)
GO(SDL_JoystickGetGUIDFromString, HFp)
GO(SDL_JoystickGetGUIDString, vFUUpi)   //uint8_t data[16] passed as 1st argument...
GO(SDL_JoystickGetHat, CFpi)
GO(SDL_JoystickGetPlayerIndex, iFp)
GO(SDL_JoystickGetProduct, WFp)
GO(SDL_JoystickGetProductVersion, WFp)
GO(SDL_JoystickGetType, iFp)
GO(SDL_JoystickGetVendor, WFp)
GO(SDL_JoystickInstanceID, iFp)
GO(SDL_JoystickIsHaptic, iFp)
GO(SDL_JoystickName, pFp)
GO(SDL_JoystickNameForIndex, pFi)
GO(SDL_JoystickNumAxes, iFp)
GO(SDL_JoystickNumBalls, iFp)
GO(SDL_JoystickNumButtons, iFp)
GO(SDL_JoystickNumHats, iFp)
GO(SDL_JoystickOpen, pFi)
GO(SDL_JoystickRumble, iFpWWu)
GO(SDL_JoystickUpdate, vFv)
GO(SDL_LinuxSetThreadPriority, iFIi)
GO(SDL_lltoa, pFIpi)
GOM(SDL_LoadBMP_RW, pFEpi)
GO(SDL_LoadDollarTemplates, iFip)
GOM(SDL_LoadFile_RW, pFEppi)
GOM(SDL_LoadFunction, pFEpp)
GOM(SDL_LoadObject, pFEp)
GOM(SDL_LoadWAV_RW, pFEpippp)
GO(SDL_LockAudio, vFv)
GO(SDL_LockAudioDevice, vFi)
GO(SDL_LockJoysticks, vFv)
GO(SDL_LockMutex, iFp)
GO(SDL_LockSurface, iFp)
GO(SDL_LockTexture, iFpppp)
GO(SDL_log, dFd)
GOM(SDL_Log, vFEpV)
GO(SDL_log10, dFd)
GO(SDL_log10f, fFf)
GOM(SDL_LogCritical, vFEipV)
GOM(SDL_LogDebug, vFEipV)
GOM(SDL_LogError, vFEipV)
GO(SDL_logf, fFf)
GOM(SDL_LogGetOutputFunction, vFEpp)
GO(SDL_LogGetPriority, iFi)
GOM(SDL_LogInfo, vFEipV)
GO2(SDL_LogMessage, vFiupV, SDL_LogMessageV)
GO(SDL_LogMessageV, vFiupV)
GO(SDL_LogResetPriorities, vFv)
GO(SDL_LogSetAllPriority, vFu)
GOM(SDL_LogSetOutputFunction, vFEpp)
GO(SDL_LogSetPriority, vFiu)
GOM(SDL_LogVerbose, vFEipV)
GOM(SDL_LogWarn, vFEipV)
GO(SDL_LowerBlit, iFpppp)
GO(SDL_LowerBlitScaled, iFpppp)
GO(SDL_ltoa, pFlp)
GO(SDL_malloc, pFu)
GO(SDL_MapRGB, uFpCCC)
GO(SDL_MapRGBA, uFpCCCC)
GO(SDL_MasksToPixelFormatEnum, uFiuuuu)
GO(SDL_MaximizeWindow, vFp)
GO(SDL_memcmp, iFppu)
GO(SDL_memcpy, pFppu)
GO(SDL_memmove, pFppu)
GO(SDL_MemoryBarrierAcquireFunction, vFv)
GO(SDL_MemoryBarrierReleaseFunction, vFv)
GO(SDL_memset, pFpiu)
GO(SDL_MinimizeWindow, vFp)
GO(SDL_MixAudio, vFppui)
GO(SDL_MixAudioFormat, vFppWui)
GO(SDL_MouseIsHaptic, iFv)
GO(SDL_NewAudioStream, pFiCiiCi)
GO(SDL_NumHaptics, iFv)
GO(SDL_NumJoysticks, iFv)
GO(SDL_NumSensors, iFv)
GOM(SDL_OpenAudio, iFEpp)
GOM(SDL_OpenAudioDevice, iFEpippi)
GO(SDL_PauseAudio, vFi)
GO(SDL_PauseAudioDevice, vFii)
GO(SDL_PeepEvents, iFpiiuu)
GO(SDL_PixelFormatEnumToMasks, iFuppppp)
GO(SDL_PollEvent, iFp)
GO(SDL_pow, dFdd)
GO(SDL_powf, fFff)
GO(SDL_PumpEvents, vFv)
GO(SDL_PushEvent, iFp)
GO2(SDL_qsort, vFEpuup, my_qsort)
GO(SDL_QueryTexture, iFppppp)
GO(SDL_QueueAudio, iFipu)
GO(SDL_Quit, vFv)
GO(SDL_QuitSubSystem, vFu)
GO(SDL_RaiseWindow, vFp)
GOM(SDL_ReadBE16, uFEp)
GOM(SDL_ReadBE32, uFEp)
GOM(SDL_ReadBE64, UFEp)
GOM(SDL_ReadLE16, uFEp)
GOM(SDL_ReadLE32, uFEp)
GOM(SDL_ReadLE64, UFEp)
GOM(SDL_ReadU8, uFEp)
GO(SDL_realloc, pFpu)
GO(SDL_RecordGesture, iFi)
GO(SDL_RegisterEvents, uFi)
GOM(SDL_RemoveTimer, iFEp)
GO(SDL_RenderClear, iFp)
GO(SDL_RenderCopy, iFpppp)
GO(SDL_RenderCopyEx, iFppppdpi)
// SDL_RenderCopyExF
// SDL_RenderCopyF
GO(SDL_RenderDrawLine, iFpiiii)
// SDL_RenderDrawLineF
GO(SDL_RenderDrawLines, iFppi)
// SDL_RenderDrawLinesF
GO(SDL_RenderDrawPoint, iFpii)
// SDL_RenderDrawPointF
GO(SDL_RenderDrawPoints, iFppi)
// SDL_RenderDrawPointsF
GO(SDL_RenderDrawRect, iFpp)
// SDL_RenderDrawRectF
GO(SDL_RenderDrawRects, iFppi)
// SDL_RenderDrawRectsF
GO(SDL_RenderFillRect, iFpp)
// SDL_RenderFillRectF
GO(SDL_RenderFillRects, iFppi)
// SDL_RenderFillRectsF
// SDL_RenderFlush
GO(SDL_RenderGetClipRect, vFpp)
GO(SDL_RenderGetIntegerScale, iFp)
GO(SDL_RenderGetLogicalSize, vFppp)
// SDL_RenderGetMetalCommandEncoder
// SDL_RenderGetMetalLayer
GO(SDL_RenderGetScale, vFppp)
GO(SDL_RenderGetViewport, vFpp)
GO(SDL_RenderIsClipEnabled, iFp)
GO(SDL_RenderPresent, vFp)
GO(SDL_RenderReadPixels, iFppupi)
GO(SDL_RenderSetClipRect, iFpp)
GO(SDL_RenderSetIntegerScale, iFpi)
GO(SDL_RenderSetLogicalSize, iFpii)
GO(SDL_RenderSetScale, iFpff)
GO(SDL_RenderSetViewport, iFpp)
GO(SDL_RenderTargetSupported, iFp)
GO(SDL_ReportAssertion, uFpppi)
GO(SDL_ResetAssertionReport, vFv)
GO(SDL_RestoreWindow, vFp)
GOM(SDL_RWFromConstMem, pFEpi)
GOM(SDL_RWFromFP, pFEpi)
GOM(SDL_RWFromFile, pFEpp)
GOM(SDL_RWFromMem, pFEpi)
GOM(SDL_SaveAllDollarTemplates, iFEp)
GOM(SDL_SaveBMP_RW, iFEppi)
GOM(SDL_SaveDollarTemplate, iFEip)
// SDL_scalbn
// SDL_scalbnf
GO(SDL_SemPost, iFp)
GO(SDL_SemTryWait, iFp)
GO(SDL_SemValue, uFp)
GO(SDL_SemWait, iFp)
GO(SDL_SemWaitTimeout, iFpu)
// SDL_SensorClose
// SDL_SensorFromInstanceID
// SDL_SensorGetData
// SDL_SensorGetDeviceInstanceID
// SDL_SensorGetDeviceName
// SDL_SensorGetDeviceNonPortableType
// SDL_SensorGetDeviceType
// SDL_SensorGetInstanceID
// SDL_SensorGetName
// SDL_SensorGetNonPortableType
// SDL_SensorGetType
// SDL_SensorOpen
// SDL_SensorUpdate
// SDL_SetAssertionHandler
GO(SDL_SetClipboardText, iFp)
GO(SDL_SetClipRect, iFpp)
GO(SDL_SetColorKey, iFpiu)
GO(SDL_SetCursor, vFp)
GO(SDL_setenv, iFppi)
GO(SDL_SetError, iFppppp)    // it use ..., so putarbitrary  4 args
GOM(SDL_SetEventFilter, vFEpp)
GO(SDL_SetHint, iFpp)
GO(SDL_SetHintWithPriority, iFppi)
GO(SDL_SetMainReady, vFv)
// SDL_SetMemoryFunctions
GO(SDL_SetModState, vFi)
GO(SDL_SetPaletteColors, iFppii)
// SDL_SetPixelFormatPalette
GO(SDL_SetRelativeMouseMode, iFi)
GO(SDL_SetRenderDrawBlendMode, iFpu)
GO(SDL_SetRenderDrawColor, iFpCCCC)
GO(SDL_SetRenderTarget, iFpp)
GO(SDL_SetSurfaceAlphaMod, iFpC)
GO(SDL_SetSurfaceBlendMode, iFpu)
// SDL_SetSurfaceColorMod
GO(SDL_SetSurfacePalette, iFpp)
GO(SDL_SetSurfaceRLE, iFpi)
GO(SDL_SetTextInputRect, vFp)
GO(SDL_SetTextureAlphaMod, iFpC)
GO(SDL_SetTextureBlendMode, iFpu)
GO(SDL_SetTextureColorMod, iFpCCC)
GO(SDL_SetThreadPriority, iFu)
GO(SDL_SetWindowBordered, vFpi)
GO(SDL_SetWindowBrightness, iFpf)
GO(SDL_SetWindowData, pFppp)
GO(SDL_SetWindowDisplayMode, iFpp)
GO(SDL_SetWindowFullscreen, iFpu)
GO(SDL_SetWindowGammaRamp, iFpppp)
GO(SDL_SetWindowGrab, vFpi)
// SDL_SetWindowHitTest
GO(SDL_SetWindowIcon, vFpp)
// SDL_SetWindowInputFocus
GO(SDL_SetWindowMaximumSize, vFpii)
GO(SDL_SetWindowMinimumSize, vFpii)
// SDL_SetWindowModalFor
// SDL_SetWindowOpacity
GO(SDL_SetWindowPosition, vFpii)
GO(SDL_SetWindowResizable, vFpi)
GO(SDL_SetWindowShape, iFppp)
GO(SDL_SetWindowSize, vFpii)
GO(SDL_SetWindowTitle, vFpp)
// SDL_SetYUVConversionMode
GO(SDL_ShowCursor, iFi)
GO(SDL_ShowMessageBox, iFpp)
GO(SDL_ShowSimpleMessageBox, iFuppp)
GO(SDL_ShowWindow, vFp)
GO(SDL_SIMDAlloc, pFL)
GO(SDL_SIMDGetAlignment, LFv)
GO(SDL_SIMDRealloc, pFpL)
GO(SDL_SIMDFree, vFp)
GO(SDL_sin, dFd)
GO(SDL_sinf, fFf)
GOM(SDL_snprintf, iFEpLpV)
GO(SDL_SoftStretch, iFpppp)
GO(SDL_sqrt, dFd)
GO(SDL_sqrtf, fFf)
GO2(SDL_sscanf, iFEppV, my_sscanf)
GO(SDL_StartTextInput, vFv)
GO(SDL_StopTextInput, vFv)
GO(SDL_strcasecmp, iFpp)
GO(SDL_strchr, pFpi)
GO(SDL_strcmp, iFpp)
GO(SDL_strdup, pFp)
GO(SDL_strlcat, uFppu)
GO(SDL_strlcpy, uFppu)
GO(SDL_strlen, uFp)
GO(SDL_strlwr, pFp)
GO(SDL_strncasecmp, iFppu)
GO(SDL_strncmp, iFppu)
GO(SDL_strrchr, pFpi)
GO(SDL_strrev, pFp)
GO(SDL_strstr, pFpp)
GO(SDL_strtod, dFpp)
GO(SDL_strtol, iFppi)
GO(SDL_strtoll, IFppi)
GO(SDL_strtoul, uFppi)
GO(SDL_strtoull, UFppi)
GO(SDL_strupr, pFp)
GO(SDL_tan, dFd)
GO(SDL_tanf, fFf)
GO(SDL_ThreadID, uFv)
GO(SDL_TLSCreate, uFv)
GO(SDL_TLSGet, pFu)
GOM(SDL_TLSSet, iFEupp)
GO(SDL_tolower, iFi)
GO(SDL_toupper, iFi)
GO(SDL_TryLockMutex, iFp)
GO(SDL_uitoa, pFupi)
GO(SDL_ulltoa, pFUpi)
GO(SDL_ultoa, pFupi)
GO(SDL_UnionRect, vFppp)
GOM(SDL_UnloadObject, vFEp)
GO(SDL_UnlockAudio, vFv)
GO(SDL_UnlockAudioDevice, vFi)
GO(SDL_UnlockJoysticks, vFv)
GO(SDL_UnlockMutex, iFp)
GO(SDL_UnlockSurface, vFp)
GO(SDL_UnlockTexture, vFp)
GO(SDL_UpdateTexture, iFpppi)
GO(SDL_UpdateWindowSurface, iFp)
// SDL_UpdateWindowSurfaceRects
GO(SDL_UpdateYUVTexture, iFpppipipi)
GO(SDL_UpperBlit, iFpppp)
GO(SDL_UpperBlitScaled, iFpppp)
GO(SDL_utf8strlcpy, uFppu)
// SDL_utf8strlen
GO(SDL_VideoInit, iFp)
GO(SDL_VideoQuit, vFv)
GOM(SDL_vsnprintf, iFEpLpp)
// SDL_vsscanf
GO(SDL_Vulkan_CreateSurface, iFppp)
GO(SDL_Vulkan_GetDrawableSize, vFppp)
GO(SDL_Vulkan_GetInstanceExtensions, iFppp)
GOM(SDL_Vulkan_GetVkGetInstanceProcAddr, pFEv)
GO(SDL_Vulkan_LoadLibrary, iFp) //TODO: wrap to also call my_dlopen with path?
GO(SDL_Vulkan_UnloadLibrary, vFv)
GO(SDL_WaitEvent, iFp)
GO(SDL_WaitEventTimeout, iFpi)
GO(SDL_WaitThread, vFpp)
GO(SDL_WarpMouseGlobal, iFii)
GO(SDL_WarpMouseInWindow, vFpii)
GO(SDL_WasInit, uFu)
// SDL_wcscmp
// SDL_wcsdup
// SDL_wcslcat
// SDL_wcslcpy
GO(SDL_wcslen, uFp)
GOM(SDL_WriteBE16, uFEpW)
GOM(SDL_WriteBE32, uFEpu)
GOM(SDL_WriteBE64, uFEpU)
GOM(SDL_WriteLE16, uFEpW)
GOM(SDL_WriteLE32, uFEpu)
GOM(SDL_WriteLE64, uFEpU)
GOM(SDL_WriteU8, uFEpu)

GOM(SDL_RWseek, IFEpIi)
GOM(SDL_RWtell, IFEp)
GOM(SDL_RWread, uFEppuu)
GOM(SDL_RWwrite, uFEppuu)
GOM(SDL_RWclose, iFEp)

GO2(SDL_mutexP, iFp, SDL_LockMutex)
GO2(SDL_mutexV, iFp, SDL_UnlockMutex)

GO(SDL_doesntexist, IFpIi)

GOM(SDL_IsJoystickPS4, iFEWW)
GOM(SDL_IsJoystickNintendoSwitchPro, iFEWW)
GOM(SDL_IsJoystickSteamController, iFEWW)
GOM(SDL_IsJoystickXbox360, iFEWW)
GOM(SDL_IsJoystickXboxOne, iFEWW)
GOM(SDL_IsJoystickXInput, iFEUU)
GOM(SDL_IsJoystickHIDAPI, iFEUU)
