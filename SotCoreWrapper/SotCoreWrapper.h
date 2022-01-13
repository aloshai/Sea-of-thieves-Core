#pragma once
#include "pch.h"
#include "Core.h"
#include "ManagedObject.h"
#include "UE4ActorWrapper.h"
#include "VectorUE4.h"
#include "CameraManager.h"
#include "Player.h"
#include "process_manager.h"

using namespace System;
namespace SoT
{
    public ref class SotCore : public ManagedObject<Core::SotCore>
    {
    private:
        CameraManager^ cameraManager;
    public:
        SotCore();
        bool Prepare(System::Boolean^ IsSteam);
        UE4Actor^ GetLocalPlayer();
        CameraManager^ GetCameraManager();
        array<UE4Actor^>^ GetActors();
    };
}