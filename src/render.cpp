#include <Magick++.h>
#include "render.hpp"
#include <string>
#include <string_view>

void render_img(std::string date) {
  Magick::Image newImg("../img/template.png");

  // font shenanigans
  newImg.strokeWidth(2);
  newImg.font("../fonts/work-sans-extra-light.ttf"); // change to a font that
                                              // your OS has installed if
                                              // program throws errors or doesn't
                                              // work as expected
                                              // 99% chance this will be the cause of it
  newImg.fontPointsize(50);

  // draw text onto template
  newImg.strokeColor("black");
  newImg.draw(Magick::DrawableText(265, 43, date));

  newImg.write("../img/output.png");
}
