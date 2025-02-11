.PHONY: all kernel arm build clean

all: kernel arm build

kernel:
	git clone https://github.com/Interpuce/AurorOS/ original

arm:
	@echo not for now

build:
	@echo sorry but also not for now