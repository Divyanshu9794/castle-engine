# Test TCastleImage.DrawFrom

Test drawing one TCastleImage on another (using TCastleImage.DrawFrom)
with various blending modes.

_It is not advised to use this approach. It may be deprecated in the future._
It is faster, and more feature-packed, to draw on images using GPU,
following ../draw_images_on_gpu/ approach.

Using [Castle Game Engine](https://castle-engine.io/).

## Building

Compile by:

- [CGE editor](https://castle-engine.io/manual_editor.php). Just use menu item _"Compile"_.

- Or use [CGE command-line build tool](https://castle-engine.io/build_tool). Run `castle-engine compile` in this directory.

- Or use [Lazarus](https://www.lazarus-ide.org/). Open in Lazarus `x3d_call_pascal_code_standalone.lpi` file and compile / run from Lazarus. Make sure to first register [CGE Lazarus packages](https://castle-engine.io/documentation.php).
