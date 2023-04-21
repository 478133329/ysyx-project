VSRC_DIR := $(abspath $(NPC_HOME)/vsrc)
CSRC_DIR := $(abspath $(NPC_HOME)/csrc)

IMG_DIR=/home/wangsijie/workspace/ics2022/am-kernels/tests/cpu-tests/build
ALL=
IMG=$(IMG_DIR)/$(ALL)-riscv64-npc.bin

all:
	@echo "Write this Makefile by your self."

clean:
	@rm -rf obj_dir

sim: clean
	verilator --cc --build --exe --trace $(VSRC_DIR)/my_cpu.v $(CSRC_DIR)/*.cpp -I$(VSRC_DIR) -CFLAGS -I$(CSRC_DIR)/include
	./obj_dir/Vmy_cpu -f $(IMG)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

include $(NPC_HOME)/../Makefile

