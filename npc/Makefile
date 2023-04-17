VSRC_DIR := $(abspath $(NPC_HOME)/vsrc)
CSRC_DIR := $(abspath $(NPC_HOME)/csrc)

all:
	@echo "Write this Makefile by your self."

sim:
	verilator --cc --build --exe --trace $(VSRC_DIR)/my_cpu.v $(CSRC_DIR)/*.cpp -I$(VSRC_DIR) -I$(CSRC_DIR)/include
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

include $(NPC_HOME)/../Makefile

