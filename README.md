<<<<<<< HEAD
# XiboLinux

### Building with Snapcraft (only for Ubuntu 18.04)
- Install snapcraft
- Clone this repository
- Run `snapcraft` in the root of the repository
- The .snap of xibo player will be built in root directory
- Exec `sudo snap install <filename>.snap --dangerous`
=======
# Xibo for Linux

[![xibo-player](https://snapcraft.io/xibo-player/badge.svg)](https://snapcraft.io/xibo-player)

Xibo for Linux is a Digital Signage Player for [Xibo](https://xibo.org.uk).

It is in its early stages of development and supports a subset of Xibo's overall features. It can be used in production, but should be thoroughly tested with the intended content. It is not recommended to assume that any of Xibo's features will function. Please test yourself to confirm.

To discuss this Player with us, please [join our community](https://community.xibo.org.uk/c/support/linux-player).



# Installation

Installation and upgrade instructions can be found [here](https://xibo.org.uk/docs/setup/xibo-for-linux-installation).



# Contributing

We use GitHub Issues to track development and the next milestone is full of issues for which we would happily accept contributions. In addition, if a Xibo feature you want is not mile-stoned, or mile-stoned against a later version, please get in touch if you'd like to work on it. We maintain a [Kanban Board](https://github.com/xibosignage/xibo-linux/projects/1) to ensure we're not doing overlapping work.

Please check that you're happy for your work to be available under the project licence - the AGPLv3 or later.

Let us know you'd like to contribute by [joining our community](https://community.xibo.org.uk/c/support/linux-player).



# Build

If you would like to work on the Player you can build it locally using the instructions below.



## Building from sources

### Building manually

NOTE: These libraries can require additional installations if you haven't such. We have tested only with listed libraries versions, however, it can be possible to build with newer or older versions as well.
- `cmake>=3.14` cross-platform software for managing the build process
- `gtk>=3.22` and `gtkmm>=3.22` GUI library and C++ bindings
- `glib>=2.56` and `glibmm>=2.56` low-level system library written in C and C++ bindings
- `gstreamer, gstreamer-base-plugins, gstreamer-good-plugins, gstreamer-bad-plugins>=1.14` multimedia framework for audio/video playback with plugins
- `gstreamer1.0-libav`, `gstreamer1.0-gtk3`, `gstreamer1.0-gl`, `gstreamer1.0-vaapi`, `gstreamer1.0-alsa`, `gstreamer1.0-pulseaudio` needed for running/accelerating video content
- `cryptopp=8.1` for crypto utils (RSA, RC4 etc.)
- `cryptopp-pem`that is compatible with `cryptopp` version needed for PEM key format
- `zeromq=4.3` distributed messaging
- `spdlog=1.4.1` logging library
- `gtest=1.8.1` for tests
- `webkitgtk>=2.4.10` web content rendering
- `Boost.System, Boost.Filesystem, Boost.Date_Time, Boost.Thread=1.70` 



### Building with Snapcraft

- Install snapcraft
- Clone this repository
- Run `snapcraft` in the root of the repository
>>>>>>> upstream/develop
