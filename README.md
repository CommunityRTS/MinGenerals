<!-- markdownlint-disable -->
<div align="center">
  <img src="./Generals/Code/Main/Generals.ico" alt="MinGenerals" width="64" height="64">

# MinGenerals

**A community fork of Command & Conquer Generals, and its expansion pack Zero Hour**

[![License](https://img.shields.io/badge/License-GPL%20v3-blue.svg)](LICENSE.md)
![Platform](https://img.shields.io/badge/Platform-Win32-lightgrey.svg)
![Build System](https://img.shields.io/badge/Build%20System-Visual%20Studio%206.0-orange.svg)
[![Discord](https://img.shields.io/badge/Discord-Join%20Server-5865F2.svg)](https://discord.gg/CRZDZEhR5p)
[![Ask DeepWiki](https://deepwiki.com/badge.svg)](https://deepwiki.com/CommunityRTS/MinGenerals)

[Getting Started](#getting-started) • [Building](#building) • [Dependencies](#dependencies)

</div>

This repository includes modified source code from Command & Conquer Generals, and its expansion pack Zero Hour.

Non-code assets that are needed to run the games such as graphics, sounds, or music are not included.

> [!IMPORTANT]
> You must own the original games to use the official game art and other copyrighted game assets. 
Purchase the C&C Ultimate Collection 
on [EA App](https://www.ea.com/en-gb/games/command-and-conquer/command-and-conquer-the-ultimate-collection/buy/pc) 
or [Steam](https://store.steampowered.com/bundle/39394/Command__Conquer_The_Ultimate_Collection/).

## Getting Started

### Prerequisites

- **Operating System**: Windows
- **Compiler**: Microsoft Visual Studio C++ 6.0 (SP6)
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

## Building (Visual Studio 6.0)

```text
# Open workspace file
Generals/Code/RTS.dsw          # For Generals
GeneralsMD/Code/RTS.dsw        # For Zero Hour
```

- **Generals**: Matches EA's Generals patch 1.08
- **GeneralsMD**: Matches EA's Zero Hour patch 1.04

### Output

Compiled binaries are copied to the `/Run/` folder in the respective game directory.

## Dependencies

The following libraries must be downloaded separately due to licensing restrictions:

### DirectX 8.1 SDK
- **Download**: https://archive.org/download/dx81sdk_full/dx81sdk_full.exe
- **Install to**: `\Code\Libraries\Source\DirectX\`

### NVASM 1.42 (Nvidia Shader Assembler)
- **Download**: https://archive.org/download/nvasm_1_42/nvasm_1_42.zip
- **Install to**: `\Code\Tools\NVASM\`

## Project Structure

```text
MinGenerals/
├── Generals/         # Base game source code
│   ├── Code/         # Main source directory
│   │   ├── GameEngine/        # Core game engine
│   │   ├── GameEngineDevice/  # Hardware abstraction
│   │   ├── Libraries/         # Third-party dependencies
│   │   ├── Main/              # Application entry point
│   │   └── Tools/             # Development utilities
│   └── Run/          # Compiled binaries
├── GeneralsMD/       # Zero Hour expansion source
│   └── [Same structure as Generals]
├── LICENSE.md        # GPL v3 license with additional terms
└── README.md         # This file
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
5. **Submit a pull request** to the dev branch with a detailed description of your changes

For major changes or new features, consider opening an issue first to discuss your ideas with the community.

## License & Legal Disclaimer

This project is neither affiliated with nor associated with Electronic Arts Inc., its affiliates, or their employees. All trademarks and intellectual property rights belong to their respective owners.

This repository and its contents are licensed under the GPL v3 license, with additional terms applied. Please see [LICENSE.md](LICENSE.md) for details.
