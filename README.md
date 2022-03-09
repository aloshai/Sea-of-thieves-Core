
# 🏴‍☠️ Sea of Thieves - External C# Library
Sea of thieves External C# Library, based on [
RemnantESP](https://github.com/shalzuth/RemnantESP)

## How to Use

#### Get all actors

```C#
SotCore core = new SotCore();
//if u are in steam version replace by true
if (core.Prepare(false))
{
    UE4Actor[] actors = core.GetActors();
    foreach (UE4Actor actor in actors)
    {
	//Do your things here
    }
}
else
{
  //Failed, Sea of thieves not detected
}
```
#### Get LocalPlayer

```C#
SotCore core = new SotCore();
//if u are in steam version replace by true
if (core.Prepare(false))
{
    Player localPlayer = new Player(core.GetLocalPlayer());
    //Do your things here
}
else
{
    //Failed, Sea of thieves not detected
}
```

#### Get Camera Manager

```C#
SotCore core = new SotCore();
//if u are in steam version replace by true
if (core.Prepare(false))
{
    CameraManager cameraManager = core.GetCameraManager();
    //Do your things here
}
else
{
    //Failed, Sea of thieves not detected
}
```

#### And if you want some help feel free to join the [discord](https://discord.gg/KkBVKCFdzz)
