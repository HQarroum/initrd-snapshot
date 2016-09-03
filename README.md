<h1 align="center">
  <br>
  <a href="#"><img width="500" src="snapshot.png" alt="initrd-snapshot" /></a>
  <br><br>
</h1>

<h4 align="center">Library and tools to create and parse initial ramdisk snapshots. </h4>

<p align="center">
  <a href="https://travis-ci.org/HQarroum/initrd-snapshot">
    <img src="https://travis-ci.org/HQarroum/initrd-snapshot.svg"
         alt="Travis Build">
  </a>
</p>
<br>

## Description

Initial ramdisks (initrd) provide the capability to load a RAM disk by the boot loader. This RAM disk can then be mounted as the root file system and programs can be run from it. Afterwards, a new root file system can be mounted from a different device. The previous root (from initrd) is then moved to a directory and can be subsequently unmounted.

`initrd` snapshots are mainly designed to allow system startup to occur in two phases, where the kernel comes up with a minimum set of compiled-in drivers, and where additional modules are loaded from `initrd`.

This project contains different components, namely :

 * A C++11 library initially developped to provide the [Microcosm Kernel](https://github.com/HQarroum/microcosm) with the ability to load its root filesystem, though it is not tight or dependant on any of microcosm's software components.
 * A set of POSIX tools built on top the library to create and browse initrd images.

## Library usage

### 

