#include <sim_sdb.h>

int main(int argc, char** argv) {
	sim_env_init(argc, argv);
	sim_exec_init(5);
	sdb_mainloop();
	return 0;
}
