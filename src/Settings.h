// state machinr threshhold and time
int launchthresh = 2; // launch detect in G's
int descentthresh = 2; // 1.5 meters
int chutethresh = 100; // we want to be 100 meters above ground level to deploy the chutes
uint32_t fire_length = 1500; // pyro will fire for 1.5 seconds
int landedthresh = 5; // to check whether we have landed we should be under 5 meters