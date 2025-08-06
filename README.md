# OptiLogger

[![Unreal Engine](https://img.shields.io/badge/Unreal%20Engine-5.x-blue.svg)](https://www.unrealengine.com/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Version](https://img.shields.io/badge/Version-1.0-orange.svg)](https://github.com/yourusername/OptiLogger/releases)


OptiLogger is an Unreal Engine editor plugin for in-depth resource analysis in levels. It examines meshes, textures, materials, animations, audio, lighting, and post-process effects to help optimize performance and identify bottlenecks.


## Features

- **Comprehensive Level Analysis**: Scan the current level for all resource types, with options to filter by visible actors only.
- **Individual Resource Breakdown**: Analyze specific categories like static/skeletal meshes, textures, materials, animations, audio, lighting, and post-process volumes.
- **Memory Estimation**: Provides estimated memory usage for assets like meshes, textures, animations, and audio.
- **Shader Complexity Insights**: For materials, get vertex/pixel shader instruction counts and complexity levels.
- **Export Reports**: Save analysis results as JSON for further review or integration with other tools.
- **On-Screen Display**: Toggle a HUD overlay showing analysis summaries and controls.
- **Hotkey Support**: Quick access via Ctrl + Numpad keys for analysis, export, clear, refresh, and toggle display.
- **UI Dashboard**: Intuitive widget with summary panel, controls, and detailed results list view.

## Requirements

- Unreal Engine 5.x
- Editor-only plugin; works in standalone editor and PIE (Play In Editor).
- No additional dependencies beyond standard UE modules.

## Installation

1. **Clone the Repository**:
   ```
   git clone https://github.com/yourusername/OptiLogger.git](https://github.com/vicvasper/Optilogger_UE5.3.git
   ```

2. **Copy to Plugins Folder**:
   - Place the `OptiLogger` folder in your project's `Plugins` directory (e.g., `YourProject/Plugins/OptiLogger`).

3. **Enable the Plugin**:
   - Open your project in Unreal Editor.
   - Go to **Edit > Plugins**, search for "OptiLogger", enable it, and restart the editor.

4. **Build the Project**:
   - Regenerate project files (right-click `.uproject` > Generate Visual Studio Project Files).
   - Build your project in your IDE (e.g., Visual Studio).

## Usage

### Opening the Plugin
- From the menu: **Window > OptiLogger**

### Performing Analysis
1. Open the OptiLogger window.
2. Use the toolbar buttons:
   - **Analyze Level**: Full scan of the current level.
   - **Export Report**: Save results to JSON in `Saved/ResourceReport/`.
   - **Clear**: Reset results.
   - **Visible Only**: Toggle to analyze only camera-visible actors.
3. Use category buttons for focused analysis (e.g., Static Meshes).
4. View results in the list view; summary stats in the left panel.

## Screenshots

![Where is located]</br></br>
<img width="389" height="769" alt="image" src="https://github.com/user-attachments/assets/59fda0ef-4f9b-4d3d-ba44-68174d9beddc" /></br>
*Here is where you can access the plugin.*
</br></br></br>

![Main Window]</br></br>
<img width="951" height="578" alt="image" src="https://github.com/user-attachments/assets/b3054e8d-1926-48c1-afa3-bbdb4a587aae" /></br>
*The main screen, with all the information on it.*
