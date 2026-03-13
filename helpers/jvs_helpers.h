#ifndef JVS_HELPERS_H
#define JVS_HELPERS_H

static inline float jvs_clampFloat(float v, float lo, float hi) {
	return (v < lo) ? lo : (v > hi) ? hi
									: v;
}

#endif
