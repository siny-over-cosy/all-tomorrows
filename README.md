# all-tomorrows

> [!NOTICE]
> The base program is finished. However, I haven't yet implemented the build system.
> More will be explained in the [Build](#build) section of this README.

A simple tool to ensure you never forget what the date of tomorrow is.\
Please let me know if there are issues with the program :)

## Build
- I'm still working on implementing the build system for this project but am not able to prioritise it at the moment.
- In other words, I'm too noob to use CMake.
- However, I'll walk through 2 alternative substitutes for the time being to allow you to download, compile, and execute the program.

### Manual Build
The basic idea is to just **git clone the repository** and **compile the source code** directly.
1. In your terminal, execute `git clone https://github.com/siny-over-cosy/all-tomorrows.git`.
2. Change directory ("cd") into `src/` directory.
3. If on Linux, execute ``g++ date.cpp date.hpp main.cpp render.cpp render.hpp -o a.o `Magick++-config --cppflags --cxxflags --ldflags --libs` ``.\
If on Windows, execute ``g++ date.cpp date.hpp main.cpp render.cpp render.hpp -o a.exe `Magick++-config --cppflags --cxxflags --ldflags --libs` ``.\
This will compile the executable to run the program. The executable will be named `a.exe` or `a.o`.
4. Run the executable.
5. **You can use a file manager for this step.** Go to the project's `img/` directory and open `output.png`. The result should be the meme with tomorrow's date.

### Download executable
This method is easier than the manual build method but I haven't tested it myself. The main reason I recommend the manual build method first is because I'm not sure if there will be directory-navigating problems in this method since, again, I haven't tested it myself.
1. Download the latest release version. There will be one for Windows systems and one for Linux systems.
2. Unzip the folder.
3. Run the executable.
4. **You can use a file manager for this step.** Go to the project's `img/` directory and open `output.png`. The result should be the meme with tomorrow's date.

## Credits
- This project uses the [Magick++](https://imagemagick.org/script/magick++.php) library.
- The used default font is the [Work-Sans-Extra-Light](https://www.freefontdownload.org/en/work-sans-extra-light.font) font.
- The original image used in the meme template is from Home Alone. *(Home Alone. Directed by Chris Columbus, 20th Century Fox, 1990).*
