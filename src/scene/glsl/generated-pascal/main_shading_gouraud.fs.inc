{ -*- buffer-read-only: t -*- }
{ DON'T EDIT -- this file was automatically generated from "source/main_shading_gouraud.fs" }
'/* Gouraud shading GLSL fragment shader. */' + LineEnding +
'' + LineEnding +
'#ifdef GL_ES' + LineEnding +
'precision mediump float;' + LineEnding +
'#endif' + LineEnding +
'' + LineEnding +
'/* PLUG-DECLARATIONS */' + LineEnding +
'' + LineEnding +
'#ifdef HAS_GEOMETRY_SHADER' + LineEnding +
'  #define castle_vertex_eye castle_vertex_eye_geoshader' + LineEnding +
'  #define castle_normal_eye castle_normal_eye_geoshader' + LineEnding +
'  #define castle_Color      castle_Color_geoshader' + LineEnding +
'#endif' + LineEnding +
'' + LineEnding +
'varying vec4 castle_vertex_eye;' + LineEnding +
'varying vec3 castle_normal_eye;' + LineEnding +
'varying vec4 castle_Color;' + LineEnding +
'' + LineEnding +
'/* Include fragment shader utilities used by both Gouraud and Phong shading. */' + LineEnding +
'/* CASTLE-COMMON-CODE */' + LineEnding +
'' + LineEnding +
'void main(void)' + LineEnding +
'{' + LineEnding +
'  vec4 fragment_color = castle_Color;' + LineEnding +
'' + LineEnding +
'/* Fragment shader in Gouraud doesn''t get a normal vector, for speed. */' + LineEnding +
'#define normal_eye_fragment vec3(0.0)' + LineEnding +
'' + LineEnding +
'  /* PLUG: main_texture_apply (fragment_color, normal_eye_fragment) */' + LineEnding +
'  /* PLUG: texture_apply (fragment_color, normal_eye_fragment) */ // deprecated' + LineEnding +
'  /* PLUG: steep_parallax_shadow_apply (fragment_color) */' + LineEnding +
'' + LineEnding +
'  /* PLUG: fragment_modify (fragment_color) */' + LineEnding +
'' + LineEnding +
'  #ifdef CASTLE_GAMMA_CORRECTION' + LineEnding +
'  fragment_color.rgb = castle_linear_to_screen(fragment_color.rgb);' + LineEnding +
'  #else' + LineEnding +
'  #ifdef CASTLE_TONE_MAPPING' + LineEnding +
'  fragment_color.rgb = castle_linear_to_screen(fragment_color.rgb);' + LineEnding +
'  #endif' + LineEnding +
'  /* Optimization to not call castle_linear_to_screen always:' + LineEnding +
'     it does nothing when neither CASTLE_GAMMA_CORRECTION nor CASTLE_TONE_MAPPING */' + LineEnding +
'  #endif' + LineEnding +
'' + LineEnding +
'  /* PLUG: fog_apply (fragment_color, normal_eye_fragment) */' + LineEnding +
'' + LineEnding +
'#undef normal_eye_fragment' + LineEnding +
'' + LineEnding +
'  gl_FragColor = fragment_color;' + LineEnding +
'' + LineEnding +
'  /* PLUG: fragment_end (gl_FragColor) */' + LineEnding +
'}' + LineEnding +
''
