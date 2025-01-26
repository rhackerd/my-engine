# cpp-fmt-project

This project is a simple application that utilizes the `fmt` library for formatted output. It is structured into core and app modules, with the core module handling the main application logic and the app module managing user interactions.

## Project Structure

```
cpp-fmt-project
├── src
│   ├── core
│   │   ├── main.cpp       # Main function and core logic
│   │   └── main.hpp       # Declarations for core functionalities
│   ├── app
│   │   ├── app.cpp        # Application-specific logic
│   │   └── app.hpp        # Interface for the app module
├── premake5.lua           # Project configuration file
└── README.md              # Project documentation
```

## Setup Instructions

1. **Clone the repository:**
   ```
   git clone <repository-url>
   cd cpp-fmt-project
   ```

2. **Install dependencies:**
   Ensure you have the `fmt` library installed. You can install it via your package manager or include it in your project.

3. **Build the project:**
   Use Premake to generate the build files:
   ```
   premake5 <action>
   ```

4. **Compile the project:**
   Follow the instructions for your chosen build system to compile the project.

## Usage

After building the project, you can run the application. The main function in `src/core/main.cpp` initializes the application and utilizes the `fmt` library for output formatting.

## Contributing

Feel free to submit issues or pull requests for improvements or bug fixes.