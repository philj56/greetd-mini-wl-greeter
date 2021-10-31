#ifndef EGL_H
#define EGL_H

#include <wayland-egl.h>
#include <epoxy/egl.h>

struct egl {
	EGLNativeWindowType window;
	EGLDisplay display;
	EGLContext context;
	EGLSurface surface;
};

void egl_create_window(
		struct egl * restrict egl,
		struct wl_surface * restrict wl_surface,
		uint32_t width,
		uint32_t height);
void egl_create_context(struct egl * restrict egl, struct wl_display * restrict wl_display);
void egl_log_error(const char * restrict msg);
void egl_make_current(struct egl * restrict egl);
void egl_swap_buffers(struct egl * restrict egl);

#endif /* EGL_H */
