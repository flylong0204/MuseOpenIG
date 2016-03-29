# Muse OpenIG V2.0.1
The Muse OpenIG.  An opensource OpenSceneGraph based image generator application suite.

#       Now features a Forward Plus lighting system, as its default lighting method!!!

Documentation, sample datasets and Binary Downloads for some platforms available at: http://openig.compro.net

Dependencies for compiling from source:
--------------------------------------
*   OpenSceneGraph 3.3.7 or later  
    A patched version of OSG 3.3.7 is available on our [Downloads](http://openig.compro.net/download-openig.html)
    page, that contains some updates and allows full functionality
    of all features of MuseOpenIG.

*   QT 5.4.1/later or CMake 3.X/later
*   Boost C++ Libraries 1.54 or later

Additional Dependencies for V1.1.0 and later if you want to include any of these new capabilities:
---------------------------------------------------------------------------------------
*  SunDog Software's SilverLining V4.024 & later -- Sky, 3D Cloud and Weather SDK
   on http://sundog-soft.com/sds/features/real-time-3d-clouds/
*  SunDog Software's Triton V3.38 & later-- Ocean and 3D Water SDK
   on http://sundog-soft.com/sds/features/ocean-and-water-rendering-with-triton
*  Bullet Physics SDK, version 2.82-r2704 or later, available on [GitHub](https://github.com/bulletphysics)
*  osgWorks version 3.0.0, available on [GitHub](https://github.com/mccdo/osgworks)
*  osgBullet version 3.0.0, available on [GitHub](https://github.com/mccdo/osgBullet)
*  OSGEarth version 2.6, available on [GitHub](https://github.com/gwaldron/osgearth)
*  MyGUI is a cross-platform library for creating graphical user interfaces (GUIs) for games and 3D applications.
   This is required if you want to use the UI-Plugin which provides a GUI interface for setting the
   lighting parameters contained in the test terrain database directory/master.flt.osg.lighting.xml datafile.
   MyGUI is available on [GitHub](https://github.com/MyGUI/mygui)

Additional Dependencies for V2.0.0 and later if you want to include any of the new Forward+ capabilities:
---------------------------------------------------------------------------------------
*  SunDog Software's SilverLining V4.042 & later -- Sky, 3D Cloud and Weather SDK
   on http://sundog-soft.com/sds/features/real-time-3d-clouds/
*  SunDog Software's Triton V3.51 & later-- Ocean and 3D Water SDK
   on http://sundog-soft.com/sds/features/ocean-and-water-rendering-with-triton

Hardware Dependancies
--------------------------------------------------------------------------------------------------
* NVidia GPU -- fully supported
* ATI GPU    -- partially supported, some features such as shadows are not fully functional as
                we do not have AT hardware to fully test against.  Any help in this area would
                be greatly appreciated.  Just fork our repo, make your changes and resubmit them
                back to us for approval/inclusion.