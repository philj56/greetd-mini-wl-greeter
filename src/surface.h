#ifndef SURFACE_H
#define SURFACE_H

#include <stdbool.h>
#include <stdint.h>
#include "egl.h"
#include "gl.h"

struct surface {
	struct egl egl;
	struct gl gl;
	struct wl_surface *wl_surface;
	int32_t width;
	int32_t height;
	bool redraw;
};

void surface_initialise(
		struct surface * restrict surface,
		struct wl_display *wl_display,
		struct image * restrict texture);
void surface_draw(
		struct surface * restrict surface,
		struct color * restrict color,
		struct image * restrict texture);

#endif /* SURFACE_H */
