# AurorMobile

AurorMobile is basically an experiment to make mobile operating system based on AurorOS kernel. It switches files and performs operations to make AurorOS an OS available and designed for mobile.

## Requirements

To achive full working copy of AurorMobile you need to have installed:

- git
- gcc
- binutils

## Building AurorMobile

There are two ways to compile AurorMobile. [Need help](#something-is-wrong)?

### The automatic way

Just run the following command:

```make```

### The manual way

First - clone the AurorOS kernel or any C distribution of it. To clone the original AurorOS (which is confirmed to work) run:

```make kernel```

Next, run the following command to switch x86 stuff to ARM:

```make arm```

Then - after switching everything - build the AurorMobile:

```make build```

### Something is wrong?

**Linker errors:** make sure to compile AurorOS on Linux distribution.
**Internal compiler error:** it happens (it is fucking C). Ignore and restart the compilation.
**Code errors:** please submit an issue to [our mobile GitHub's repo](https://github.com/Interpuce/AurorMobile/issues).
**Git errors:** you probably has something wrong with your internet connection. Please, check it.