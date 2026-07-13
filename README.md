# Digital Twin Beef Center Project

**IMPORTANT:** This project is exclusively compatible with **Unreal Engine 5.7**.

This repository utilizes MQTT, Mosquitto, a custom MQTT Unreal Engine Plugin, and Git Large File Storage (LFS) to handle large assets and data pipelines.

---

## 🛑 CRITICAL WARNING: DO NOT OPEN THE PROJECT YET
**Do NOT attempt to open the Unreal Engine `.uproject` file immediately after cloning.** 
If you do not have MQTT and Mosquitto installed and configured first, the Unreal Engine project **will fail to open**.

For MQTT/Mosquitto and the MQTT Unreal Engine plugin installation instructions, please follow **slides 54-69** in this presentation:
[MQTT Setup Presentation](https://docs.google.com/presentation/d/188c1xj9NUrmfzG-8HFQJDRAvc5Q32MFHLoQqBvBxeR8/edit?usp=drivesdk)

*Only proceed to open the project in Unreal Engine 5.7 after you have completed the setup steps in the slides above.*

---

## Cloning Instructions (GitHub Desktop)

This guide is tailored specifically for users utilizing the **GitHub Desktop** application.

### Step 1: Install Git LFS
Because this project uses Large File Storage (LFS) for Unreal Engine assets, you must ensure LFS is installed on your system before cloning.
1. Download and install [Git LFS](https://git-lfs.github.com/).
2. Open your computer's terminal (Command Prompt on Windows or Terminal on Mac).
3. Run the following command to initialize it:
   `git lfs install`
*(GitHub Desktop generally handles LFS automatically, but running this step ensures your system is properly configured globally to prevent missing asset errors).*

### Step 2: Clone the Repository
1. Open **GitHub Desktop**.
2. Navigate to **File > Clone repository...** (or press `Ctrl+Shift+O` / `Cmd+Shift+O`).
3. Select the **URL** tab.
4. Paste the URL of this repository into the URL field.
5. Choose your desired local path.
6. Click **Clone**.
7. Wait for the process to finish. Because of Git LFS, it may take some time to download all the large binary files.
