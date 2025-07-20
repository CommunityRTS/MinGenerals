<!-- markdownlint-disable -->
<div align="center">
  <img src="./Generals/Code/Main/Generals.ico" alt="MinGenerals" width="64" height="64">

# MinGenerals

**An open-source preservation project for Command & Conquer Generals and Zero Hour**

[![License](https://img.shields.io/badge/License-GPL%20v3-blue.svg)](LICENSE.md)
![Platform](https://img.shields.io/badge/Platform-Win32-lightgrey.svg)
![Build System](https://img.shields.io/badge/Build%20System-Visual%20Studio%206.0-orange.svg)
[![Discord](https://img.shields.io/badge/Discord-Join%20Server-5865F2.svg)](https://discord.gg/CRZDZEhR5p)
[![DeepWiki](https://img.shields.io/badge/DeepWiki-Documentation-green.svg)](https://deepwiki.com/CommunityRTS/MinGenerals)

[Getting Started](#getting-started) • [Building](#building) • [Dependencies](#dependencies) • [Known Issues](#known-issues)

</div>

MinGenerals contains the complete source code for Command & Conquer Generals and its expansion pack Zero Hour. This open-source platform enables modding, bug fixes, and modernization efforts of these beloved RTS classics. Built from the original EA source release, this project empowers the community to maintain and evolve the games for current and future platforms.

> [!IMPORTANT]
> You must own the original games to use the compiled binaries. Purchase the C&C Ultimate Collection on [EA App](https://www.ea.com/en-gb/games/command-and-conquer/command-and-conquer-the-ultimate-collection/buy/pc) or [Steam](https://store.steampowered.com/bundle/39394/Command__Conquer_The_Ultimate_Collection/).

## Getting Started

### Prerequisites

- **Operating System**: Windows (Win32 architecture)
- **Compiler**: Microsoft Visual Studio C++ 6.0 (SP6 recommended)
- **Game Ownership**: Valid copy of C&C Generals/Zero Hour
- **Dependencies**: See [Dependencies](#dependencies) section for required libraries

### Quick Start

1. **Clone the repository**:

   ```bash
   git clone https://github.com/CommunityRTS/MinGenerals
   ```

2. **Navigate to the project directory**:

   ```bash
   cd MinGenerals
   ```

3. **Set up dependencies** (see [Dependencies](#dependencies) section)

4. **Open the workspace**:
   - Launch Visual Studio C++ 6.0
   - Open `Generals/Code/RTS.dsw` or `GeneralsMD/Code/RTS.dsw`

5. **Build the project**:
   - Select Build → Batch Build
   - Click "Rebuild All"

## Building

### Visual Studio 6.0 (Recommended)

For binary-accurate builds matching official releases:

```bash
# Open workspace file
Generals/Code/RTS.dsw          # For Generals
GeneralsMD/Code/RTS.dsw        # For Zero Hour
```

- **Generals**: Matches patch 1.08
- **Zero Hour**: Matches patch 1.04

### Modern Visual Studio

To use a newer version of Visual Studio:

1. Open `RTS.dsw` in Visual Studio .NET 2003
2. Convert the project files when prompted
3. Open the converted solution in MSVC 2015 or newer

> [!WARNING]
> Modern MSVC versions enforce stricter C++ standards. Extensive code modifications may be required for successful compilation, especially for Win64 targets.

### Output

Compiled binaries are copied to the `/Run/` folder in the respective game directory.

## Dependencies

The following third-party libraries are required for compilation:

| Library | Version | Expected Path | Purpose |
|---------|---------|---------------|---------|
| **DirectX SDK** | 9.0+ | `\Code\Libraries\DirectX\` | Graphics and input |
| **STLport** | 4.5.3 | `\Code\Libraries\STLport-4.5.3` | Standard library |
| **3DSMax SDK** | 4.0 | `\Code\Libraries\Max4SDK\` | 3D model support |
| **NVASM** | - | `\Code\Tools\NVASM\` | Shader assembly |
| **BYTEmark** | - | `\Code\Libraries\Source\Benchmark` | Performance testing |
| **RAD Miles** | - | `\Code\Libraries\Source\WWVegas\Miles6\` | Audio system |
| **RAD Bink** | - | `\Code\GameEngineDevice\Include\VideoDevice\Bink` | Video playback |
| **SafeDisk API** | - | Multiple paths | Copy protection |
| **GameSpy SDK** | - | `\Code\Libraries\Source\GameSpy\` | Online multiplayer |
| **ZLib** | 1.1.4 | `\Code\Libraries\Source\Compression\ZLib\` | Compression |
| **LZH-Light** | 1.0 | `\Code\Libraries\Source\Compression\LZHCompress\` | Compression |

> [!NOTE]
> You'll need to find or write replacements for these proprietary libraries, or remove the dependent code entirely.

### STLport Setup

STLport requires modifications to compile successfully. Apply the provided patch:

```bash
# Apply the STLport patch
patch -p1 < stlport.diff
```

Ensure you're using STLport 4.5.3 before applying the patch.

## Known Issues

### UAC Elevation

Windows may require UAC elevation for executables containing "version", "update", or "install" in their filenames. This affects:

- `versionUpdate` project
- `buildVersionUpdate` project

**Solution**: Rename the output binaries to avoid these keywords.

### Modern Compiler Compatibility

> [!NOTE]
> As modern versions of MSVC enforce newer revisions of the C++ standard, you will need to make extensive changes to the codebase before it successfully compiles, even more so if you plan on compiling for the Win64 platform.

## Project Structure

```
MinGenerals/
├── Generals/          # Base game source code
│   ├── Code/         # Main source directory
│   │   ├── GameEngine/        # Core game engine
│   │   ├── GameEngineDevice/  # Hardware abstraction
│   │   ├── Libraries/         # Third-party dependencies
│   │   ├── Main/             # Application entry point
│   │   └── Tools/            # Development utilities
│   └── Run/          # Compiled binaries
├── GeneralsMD/       # Zero Hour expansion source
│   └── [Same structure as Generals]
├── LICENSE.md        # GPL v3 license with additional terms
├── README.md         # This file
└── stlport.diff     # STLport compatibility patch
```

## Tools Included

- **WorldBuilder**: Map creation and editing tool
- **Particle Editor**: Visual effects editor  
- **Autorun**: Installation utilities
- **Launcher**: Game launcher with mod support
- **Various Utilities**: Compression, asset management, and debugging tools

## Support

For questions, discussions, and support, join our [Discord server](https://discord.gg/CRZDZEhR5p).

## Contributing

We welcome contributions to the MinGenerals project! Whether you're fixing bugs, adding features, improving documentation, or creating new tools, your contributions help preserve and enhance this classic game's source code.

### How to Contribute

1. **Fork the repository** to your GitHub account
2. **Create a feature branch** from the main branch
3. **Make your changes** with clear, descriptive commit messages
4. **Test your changes** to ensure they work correctly
5. **Submit a pull request** with a detailed description of your changes

For major changes or new features, consider opening an issue first to discuss your ideas with the community.

## License & Legal Disclaimer

This project is neither affiliated with nor associated with Electronic Arts Inc., its affiliates, or their employees. All trademarks and intellectual property rights belong to their respective owners.

This repository and its contents are licensed under the GPL v3 license, with additional terms applied. Please see [LICENSE.md](LICENSE.md) for details.
