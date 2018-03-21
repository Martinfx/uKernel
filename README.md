DeforaOS uKernel
================

About uKernel
-------------

uKernel is intended to be the kernel of the DeforaOS Operating System.

This project is in a very early stage and only targets the Intel 32-bit
architecture for the moment (x86).


Compiling uKernel
-----------------

First, the Makefiles must be generated for the current platform. This can be
performed with `configure(1)` from the DeforaOS configure project, found at
<https://www.defora.org/os/project/16/configure>. The procedure is then as
follows:
```
$ configure
```

Please refer to the documentation of DeforaOS configure for further
instructions.

Once this done, to build uKernel, simply run:
```
$ make
```

The resulting kernel is located in `src/uKernel.bin`. It produces a
multiboot-compliant kernel file.


Testing uKernel
---------------

To test uKernel:
```
$ qemu-system-i386 -nographic -kernel src/uKernel.bin
```