#pragma once
#include <windows.h>
#include <d3d11.h>
#include <iostream>
#include <sstream>
#include <string_view>
#include <set>
#include <omp.h>
#include "dllmain.h"
#include "Hook.h"
#include "Engine.h"
#include "Draw.h"
#include <string>
#include <format>
#include <array>
#include <vector>
#include "Imgui/imgui.h"
#include "AimBot.h"
#include "BasicStructs.h"


BOOL D3D11Init();
VOID GetDeviceInfo(IDXGISwapChain* This);
HRESULT STDMETHODCALLTYPE ImguiInit(IDXGISwapChain* This, UINT SyncInterval, UINT Flags);
HRESULT STDMETHODCALLTYPE MyPresent(IDXGISwapChain* This, UINT SyncInterval, UINT Flags);
LRESULT WINAPI MyWndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
HRESULT STDMETHODCALLTYPE MyResizeBuffers(IDXGISwapChain* This, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
using WndProc = LRESULT(WINAPI*)(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
using Present = HRESULT(STDMETHODCALLTYPE*)(IDXGISwapChain* This, UINT SyncInterval, UINT Flags);
using pResizeBuffers = HRESULT(STDMETHODCALLTYPE*)(IDXGISwapChain* This, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);

