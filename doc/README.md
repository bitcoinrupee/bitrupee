Bitrupee Core
=============

Setup
---------------------
Bitrupee Core is the original Bitrupee client and it builds the backbone of the network. It downloads and, by default, stores the entire history of Bitrupee transactions, which requires a few hundred gigabytes of disk space. Depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download Bitrupee Core, visit [bitrupeecore.org](https://bitrupeecore.org/en/download/).

Running
---------------------
The following are some helpful notes on how to run Bitrupee Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/bitrupee-qt` (GUI) or
- `bin/bitrupeed` (headless)

### Windows

Unpack the files into a directory, and then run bitrupee-qt.exe.

### macOS

Drag Bitrupee Core to your applications folder, and then run Bitrupee Core.

### Need Help?

* See the documentation at the [Bitrupee Wiki](https://en.bitrupee.it/wiki/Main_Page)
for help and more information.
* Ask for help on [Bitrupee StackExchange](https://bitrupee.stackexchange.com).
* Ask for help on #bitrupee on Libera Chat. If you don't have an IRC client, you can use [web.libera.chat](https://web.libera.chat/#bitrupee).
* Ask for help on the [BitrupeeTalk](https://bitrupeetalk.org/) forums, in the [Technical Support board](https://bitrupeetalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build Bitrupee Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [FreeBSD Build Notes](build-freebsd.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Android Build Notes](build-android.md)
- [Gitian Building Guide (External Link)](https://github.com/bitrupee-core/docs/blob/master/gitian-building.md)

Development
---------------------
The Bitrupee repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://doxygen.bitrupeecore.org/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [BitrupeeTalk](https://bitrupeetalk.org/) forums, in the [Development & Technical Discussion board](https://bitrupeetalk.org/index.php?board=6.0).
* Discuss project-specific development on #bitrupee-core-dev on Libera Chat. If you don't have an IRC client, you can use [web.libera.chat](https://web.libera.chat/#bitrupee-core-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [bitrupee.conf Configuration File](bitrupee-conf.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [I2P Support](i2p.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [PSBT support](psbt.md)
- [Reduce Memory](reduce-memory.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [ZMQ](zmq.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
