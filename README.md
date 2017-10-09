Simple Eye Tracker
==================

Super-simple C API to the [Tobii EyeX eye tracker](http://www.tobii.com/en/eye-experience/eyex/), suitable for binding in scripting languages. See Tracker.h for the list of available functions. If you're interested in calling this API from Dragon NaturallySpeaking, check out my [blog post](http://handsfreecoding.org/?p=16).

Please see the releases page for a precompiled DLL. To compile the DLL yourself:
1. Install Microsoft Visual Studio 2013 (may also work with later versions).
2. Clone the repository into the samples subdirectory of the EyeX SDK.
3. `cd` into the repository.
4. Run `cmd /k "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" x86` to start a sub-shell with `msbuild` available.
5. Run `msbuild /p:configuration=release /p:platform=win32` to build Tracker.dll, which will now appear in the "release" directory.
