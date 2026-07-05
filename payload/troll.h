#pragma once

// High-impact demo functions
void runDemo();           // Full demo: hijack window, show message, extract data
const char* extractToken(); // Try to find session token in memory
void hijackWindowTitle();   // Change main window title
void showProofMessageBox(); // Show a MessageBox from inside the process
const char* getStateJson(); // Read state.json (install_id etc)
