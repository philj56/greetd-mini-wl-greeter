#ifndef GL_H
#define GL_H

#include <epoxy/gl.h>

struct color;
struct image;

struct gl {
	GLuint vbo;
	GLuint vao;
	GLuint ebo;
	GLuint texture;
	GLuint shader;
};

void gl_initialise(struct gl * restrict gl, struct image * restrict texture);
void gl_clear(struct gl * restrict gl, struct color *color);
void gl_draw_texture(
		struct gl * restrict gl,
		struct image * restrict texture,
		int32_t x,
		int32_t y,
		int32_t width,
		int32_t height);

#endif /* GL_H */
