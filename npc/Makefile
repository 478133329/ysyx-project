all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator --cc --build --exe --trace vsrc/my_cpu.v csrc/sim_main.cpp -Ivsrc
	./obj_dir/Vmy_cpu 

include ../Makefile
